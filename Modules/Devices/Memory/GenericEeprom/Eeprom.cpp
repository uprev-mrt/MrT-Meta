#include "Eeprom.h"
#include "platform.h"


#define DELAY_TIME 2


Eeprom::Eeprom(void* mod, uint8_t addr, uint64_t size,uint32_t pageSize );
{
	mMod = mod;
	mAddr = addr;
	mSize = size;
	mPageSize = size;
}

void Eeprom::write(uint16_t address, uint8_t * data, int len)
{
	MRT_MUTEX_LOCK;
	int pageEnd;

	int remaining =len;
	int chunkSize = len;
	int idx =0;

	while(remaining > 0)
	{
		chunkSize = remaining;
		pageEnd = (((address/mPageSize) + 1) * mPageSize);

		if((address+chunkSize) >= pageEnd)
		{
			chunkSize = pageEnd - address;
		}

		MRT_I2C_MEM_WRITE(mMod, mAddr, address, 2, data[idx], chunkSize, 500 );
		MRT_DELAY_MS(DELAY_TIME);

		idx+= chunkSize;
		remaining-= chunkSize;
	}
	MRT_MUTEX_UNLOCK;
}

void Eeprom::read(uint16_t address, uint8_t * data, int len)
{
	MRT_MUTEX_LOCK;
	int pageEnd;

	int remaining =len;
	int chunkSize = len;
	int idx =0;

	while(remaining > 0)
	{
		chunkSize = remaining;
		pageEnd = (((address/mPageSize) + 1) * mPageSize);

		if((address+chunkSize) >= pageEnd)
		{
			chunkSize = pageEnd - address;
		}

		MRT_I2C_MEM_READ(mMod, mAddr, address, 2, data[idx], chunkSize, 500 );
		MRT_DELAY_MS(DELAY_TIME);

		idx+= chunkSize;
		remaining-= chunkSize;
	}

	MRT_MUTEX_UNLOCK;
}


extern "C"{

	eeprom_t* new_eeprom(void* mod, uint8_t addr, uint64_t size,uint32_t pageSize )
	{
		Eeprom* p = new Eeprom(mod,addr,size,pageSize);
	  return (Eeprom*)p;
	}

	void eeprom_read(eeprom_t * pEeprom, uint16_t address, uint8_t* data, uint8_t len)
	{
		static_cast<Eeprom*>(pEeprom)->read(address,data,len);
	}

	void eeprom_write(eeprom_t * pEeprom, uint16_t address, uint8_t * data, uint8_t len)
	{
		static_cast<Eeprom*>(pEeprom)->write(address,data,len);
	}

}

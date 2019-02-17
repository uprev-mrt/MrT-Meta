

Packet::Packet(Protocol* protocol)
{

}

Packet::~Packet()
{

}


/**
  *@brief set fields by hash
  */
void Packet::set(int hash, int val)
{
}

void Packet::set(int hash, string val)
{
}


/**
  *@brief set elements of array-fields by hash
  */
void Packet::set(int hash, int idx, int val)
{
}

void Packet::set(int hash, int idx, string val)
{
}


/**
  *@brief same setters but using friendly names instead of hashes
  */
void Packet::set(string name, int val){ set(hash(name), val); }
void Packet::set(string name, string val){ set(hash(name), val); }
void Packet::set(string name, int idx, int val) { set(hash(name),idx,val); }
void Packet::set(string name, int idx, string val){ set(hash(name),idx,val); }

int Packet::get(int hash, int idx=0)
{

}

string Packet::get(int hash, int idx=0)
{
}

int Packet::get(string name, int idx =0)
{
}

string Packet::getString(string name, int idx =0)
{
}


void Packet::parseJson(string json)
{
}

string Packet::toJson()
{
}


void Packet::build(uint8_t* data, int len)
{
}

int Packet::pack(uint8_t* data, int len)
{
}



int Packet::getOffset(int hash)
{
  int cursor =-1;
  for(int i=0; i < mProtocol.itemCount(); i++)
  {
    if(mProtocol.getHash(i) == hash)
    {
      break;
    }
    else if(hasItem())
    {
        cursor+= mProtocol.Item(i).getActualLen(&mData[cursor]);
    }
  }

  return cursor;
}

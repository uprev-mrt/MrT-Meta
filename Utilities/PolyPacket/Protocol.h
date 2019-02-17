/**
  *@file Packet.h
  *@brief configurable packet
  *@author Jason Berger
  *@date 12/1/2018
  */

#pragma once

#include <PolyPacket/PacketItem.h>

#define MAX_STRING_LEN 255

namespace PolyPacket
{

enum eCheckType {
  SIMPLE,
  CRC32B,
  CRC32A
};

class Protocol
{
public:
  Protocol();
  ~Protocol();

  void addItem(PacketItem item);
  int hash(string string);

  PacketItem& getItem(int idx) const {return mItmes[idx];}
  int getHash(int idx) const {return mItems[idx].Hash();}

  int itemCount() const {return mItems.size();}

private:
  std::vector<PacketItem> mItems;   //Collection of items in message protocol
  string mVersion;                  //string of version i.e. 0.1.27.123
  uint32_t mSignature;              //calculated signature of protocol, used to verify continuity
};

}

/**
  *@file PacketItem.h
  *@brief item/field in a packet
  *@author Jason Berger
  *@date 12/1/2018
  */

#pragma once

namespace PolyPacket
{

enum ePacketItemType {
  TYPE_UINT8,
  TYPE_INT8,
  TYPE_UINT16,
  TYPE_INT16,
  TYPE_UINT32,
  TYPE_INT32,
  TYPE_STRING
};

enum ePacketItemFormat {
  DEC =0,
  HEX,
  ASCII
};

class PacketItem
{
public:
  PacketItem(string name, ePacketItemType type, int len =1 );
  ~PacketItem();


  int getActualLen(void* data, len);


  string Name() const {return mName;}
  void Name(const string& val) {mName = val;}

  int Len() const {return mLen;}
  void Len(int val) {mLen = val;}

  ePacketItemType Type() const {return mType;}
  void Type(ePacketItemType val) {mType = val;}

  ePacketItemFormat Type() const {return mFormat;}
  void Type(ePacketItemFormat val) {mFormat = val;}

  int Hash() const {return mHash;}

private:
  string mName;               //friendly name of field
  int mHash;              //hash of friendly Name
  int mLen;                   //length of data
  ePacketItemType mType;      //type of data
  ePacketItemFormat mFormat;  //format for displaying data
  bool mOptional = true;

};

}

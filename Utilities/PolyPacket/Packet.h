/**
  *@file Packet.h
  *@brief configurable packet
  *@author Jason Berger
  *@date 12/1/2018
  */

#pragma once

namespace PolyPacket
{

class Packet
{
public:
  Packet(Protocol* protocol);
  ~Packet();


  /**
    *@brief set fields by hash
    */
  void set(int hash, int val);
  void set(int hash, string val);

  /**
    *@brief set elements of array-fields by hash
    */
  void set(int hash, int idx, int val);
  void set(int hash, int idx, string val);

  /**
    *@brief same setters but using friendly names instead of hashes
    */
  void set(string name, int val);
  void set(string name, string val);
  void set(string name, int idx, int val);
  void set(string name, int idx, string val);

  int get(int hash, int idx=0);
  string get(int hash, int idx=0);

  int get(string name, int idx =0);
  string getString(string name, int idx =0);

  void parseJson(string json);
  string toJson();

  void build(uint8_t* data, int len);
  int pack(uint8_t* data, int len);

  int hash(string name);

private:
  std::vector<uint8_t> mData;
  int mLen;
  int mCheckSum;
  Protocol* mProtocol;
  uint32_t mToken;

  int getOffset(int hash);

};

}

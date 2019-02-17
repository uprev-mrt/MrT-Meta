

int PacketItem::getActualLen(void* data, int len)
{
  int actualLen =0;
  int count =0;
  switch(mType)
  {
    case TYPE_UINT8:
    case TYPE_INT8:
      actualLen = mLen * sizeof(uint8_t);
      break;
    case TYPE_UINT16:
    case TYPE_INT16:
      actualLen = mLen * sizeof(uint16_t);
      break;
    case TYPE_UINT32:
    case TYPE_INT32:
      actualLen = mLen * sizeof(uint32_t);
      break;
    case TYPE_STRING:
      while(count < mLen)
      {
        if(data[actualLen++] == 0 )
        {
          count++;
        }
      }
      break;
  }

  return actualLen;
}

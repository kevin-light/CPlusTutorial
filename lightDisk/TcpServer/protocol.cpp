#include "protocol.h"

// 协议动态空间申请
PDU *mkPDU(uint uiMsgLen)
{
    uint uiPDULen = sizeof (PDU)+uiMsgLen;
    PDU *pdu = (PDU*)malloc(uiPDULen);
     if (nullptr == pdu){
         exit(EXIT_FAILURE);
     }
     memset(pdu, 0, uiPDULen);
     pdu->uiPDULen = uiPDULen;
     pdu->uiMsgLen = uiMsgLen;
     return pdu;
}

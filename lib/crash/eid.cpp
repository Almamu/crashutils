#include "eid.h"

char alphaTable[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                      'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                      'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                      'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
                      'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                      'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                      'Y', 'Z', '_', '!' 
                    };


void getEIDstring(char* _EIDstring, long EID)
{
  _EIDstring[4] = alphaTable[(EID >> 1) & 0x3f];
  _EIDstring[3] = alphaTable[(EID >> 7) & 0x3f];
  _EIDstring[2] = alphaTable[(EID >> 13) & 0x3f];
  _EIDstring[1] = alphaTable[(EID >> 19) & 0x3f];
  _EIDstring[0] = alphaTable[(EID >> 25) & 0x3f];
  _EIDstring[5] = '\0'; 
    
}
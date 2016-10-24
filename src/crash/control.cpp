#include "control.h"

control::control()
{
  keys   = 0;
  active = false;
}

void control::setKeyboardBuffer(bool *_keys)
{
  keys = _keys;
}

unsigned long control::readControls()
{
  if (!active) { return 0; }
  
  unsigned short ctrlBth = 0;
  if (!keys[VK_SHIFT])
  {
    ctrlBth = (keys['Z']          <<  0)  | 
              (keys['R']          <<  1)  | 
              (keys['Q']          <<  2)  | 
              (keys['E']          <<  3)  |
              (keys['W']          <<  4)  |
              (keys['D']          <<  5)  |
              (keys['S']          <<  6)  |
              (keys['A']          <<  7)  |
              (keys[' ']          <<  8)  |
              (keys[VK_RETURN]    << 11)  | 
              (keys[VK_UP]          << 12)  |
              (keys[VK_RIGHT]          << 13)  |
              (keys[VK_DOWN]          << 14)  |
              (keys[VK_LEFT]          << 15);
  }
                             
  unsigned long controls = (ctrlBth << 16) | ctrlBth;
  
  return controls;
}

bool control::toggleActive()
{
  active = !active;

  return active;
}

bool control::isActive()
{
  return active;
}


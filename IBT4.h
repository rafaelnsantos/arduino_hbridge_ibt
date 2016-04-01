// IBT4.h

#ifndef _IBT4_h
#define _IBT4_h

#include "Arduino.h"

class IBT4
{
 protected:
	 int pinCW;
	 int pinCCW;
	 int intensity;
	 bool isCW;

 public:
	 IBT4();
	 IBT4(int CW, int CCW);
	 void begin();
	 void setPinCW(int pin);
	 void setPinCCW(int pin);
	 void setIntensityCW(int i);
	 void setIntensityCCW(int i);
	 int getIntensity();
	 void turnOff();
};

#endif


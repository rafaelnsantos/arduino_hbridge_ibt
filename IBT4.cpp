// 
// 
// 

#include "IBT4.h"

IBT4::IBT4(){}

IBT4::IBT4(int CW, int CCW){
	pinCW = CW;
	pinCCW = CCW;
}

void IBT4::begin()
{
	pinMode(pinCW, OUTPUT);
	pinMode(pinCCW, OUTPUT);
	digitalWrite(pinCW, LOW);
	digitalWrite(pinCCW, LOW);
	delay(300);
}

void IBT4::setPinCW(int pin){
	pinCW = pin;
}

void IBT4::setPinCCW(int pin){
	pinCCW = pin;
}

void IBT4::setIntensityCW(int i){
	if (isCW && intensity == i) return;
	isCW = true;
	intensity = i;
	digitalWrite(pinCCW, LOW);
	delay(15);
	analogWrite(pinCW, map(intensity, 0, 100, 0, 252));
}

void IBT4::setIntensityCCW(int i){
	if (!isCW && intensity == i) return;
	isCW = false;
	intensity = i;
	digitalWrite(pinCW, LOW);
	delay(15);
	analogWrite(pinCCW, map(intensity, 0, 100, 0, 252));
}

int IBT4::getIntensity(){
	if (isCW){
		return intensity;
	}
	else {
		return -intensity;
	}
}

void IBT4::turnOff(){
	digitalWrite(pinCW, LOW);
	digitalWrite(pinCCW, LOW);
}


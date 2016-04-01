#include "IBT4.h"

IBT4 peltier(10, 11); //connected pins

void setup()
{
	peltier.begin();
}


void loop()
{
	//peltier.setIntensityCCW(50);
	peltier.setIntensityCW(50);
}

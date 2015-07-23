#ifndef Timer_h
#define Timer_h

#include "Arduino.h"

class Timer{
	public:
	
	boolean ton(boolean input, unsigned long millisec);
	boolean tof(boolean input, unsigned long millisec);
	boolean timer(unsigned long millisec);
	
	private:
	
	
	unsigned long lastTON;
	boolean tempTOF;
	unsigned long lastTOF;
	//boolean tempTimer;
	unsigned long lastMillis;
	
	
	
};

#endif
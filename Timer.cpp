#include<Timer.h>
#include "Arduino.h"

boolean Timer::ton(boolean input,unsigned long millisec){
	if(!input){
	lastTON = millis();
	return false;	
	} 
	else
	if(millis()-lastTON>millisec)return true;		
}

boolean Timer::tof(boolean input,unsigned long millisec){
	if(!input){
	if(millis()-lastTOF<millisec && tempTOF){
	return true;		
	}
	tempTOF = false;
	return false;	
	} 
	else
	lastTOF = millis();
	tempTOF = true;
}

boolean Timer::timer(unsigned long millisec){
	if(millis()<lastMillis) lastMillis=millis();
	if(millis()-lastMillis>millisec){
		lastMillis=millis();
		return true;
	}
	return false;
}
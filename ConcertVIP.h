/*  ConcertVIP.h
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#ifndef CONCERTVIP_H_
#define CONCERTVIP_H_
#include "ConcertAttendees.h"

class ConcertVIP : public ConcertAttendees{
public:
	ConcertVIP(std::string name);
	virtual ~ConcertVIP();
	virtual bool HasMeetAndGreetPasses(){
		return true;
	}
	virtual bool HasPreConcertPasses(){
		return true;
	}
};

#endif 
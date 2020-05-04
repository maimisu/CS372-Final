#pragma once
/*  ConcertRegs.h
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#include "ConcertAttendees.h"

#ifndef CONCERTREGS_H_
#define CONCERTREGS_H_


class ConcertRegs : public ConcertAttendees {

public:
	ConcertRegs(std::string name);
	virtual ~ConcertRegs();
	virtual bool HasMeetAndGreatPasses(){
		return false;
	}
	virtual bool HasPreConcertPasses(){
		return false;
	}
};

#endif

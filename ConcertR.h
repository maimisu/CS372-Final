/*  ConcertR.h
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#ifndef CONCERTR_H_
#define CONCERTR_H_

class ConcertAttendees;

class ConcertR {
public:
	virtual void PreConcert(ConcertAttendees* attendees) = 0;
	virtual void MeetAndGreet(ConcertAttendees* attendees) = 0;
};
#endif
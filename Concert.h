#pragma once
/*  Concert.h
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#ifndef CONCERT_H_
#define CONCERT_H_

class ConcertAttendees;

class Concert {
public:
	Concert();
	virtual ~Concert();
	virtual void PreConcert(ConcertAttendees* patron);
	virtual void MeetAndGreet(ConcertAttendees* patron);
};

#endif

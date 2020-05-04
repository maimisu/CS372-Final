/*  ConcertProxy.h
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#ifndef CONCERTPROXY_H_
#define CONCERTPROXY_H_

class Concert;
class ConcertAttendees;

class ConcertProxy {
public:
	ConcertProxy(Concert* concert);
	virtual ~ConcertProxy();
	virtual void PreConcert(ConcertAttendees* attendees);
	virtual void MeetAndGreet(ConcertAttendees* attendees);

private:
	Concert* m_aConcert;
};

#endif
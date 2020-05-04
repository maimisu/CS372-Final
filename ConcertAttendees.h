/*  ConcertAttendees.h
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#ifndef CONCERTATTENDEES_H_
#define CONCERTATTENDEES_H_

#include <string>

class ConcertAttendees {
public:
	ConcertAttendees(std::string name)
		: m_name(name) {}

	virtual ~ConcertAttendees() {}

	std::string GetName() { return m_name; }

	virtual bool HasMeetAndGreetAccess() = 0;
	virtual bool HasPreConcertAccess() = 0;

private:
	std::string m_name;
};

#endif
/*	ConcertProxy.cpp
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#include "ConcertProxy.h"
#include "Concert.h"
#include "ConcertAttendees.h"

#include <iostream>

ConcertProxy::ConcertProxy(Concert* concert)
	: m_aConcert(concert){}

ConcertProxy::~ConcertProxy() {}

void ConcertProxy::PreConcert(ConcertAttendees * attendees)
{
	if (attendees->HasPreConcertAccess())
	{
		m_aConcert->PreConcert(attendees);
	}
	else
	{
		std::cout << "Sorry, " << attendees->GetName() << ", you don't have access to the Pre-Concert show\n";
	}
}

void ConcertProxy::MeetAndGreet(ConcertAttendees* attendees)
{
	if(attendees-> HasMeetAndGreetAccess())
	{
		m_aConcert->MeetAndGreet(attendees);
	}
	else
	{
		std::cout << "Sorry, " << attendees->GetName() << ", you dont have VIP meet and greet passes!\n";
	}
}
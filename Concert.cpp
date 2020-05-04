/*  Concert.cpp
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#include "Concert.h"
#include "ConcertAttendees.h"
#include <iostream>


Concert::Concert() {}
Concert::~Concert() {}

void Concert::PreConcert(ConcertAttendees* attendees){
	std::cout << "Welcome, " << attendees->GetName() << ",to our pre concert show!\n";
}

void Concert::MeetAndGreet(ConcertAttendees* attendees)
{
	std::cout << "Welcome, " << attendees->GetName() << ",to the VIP meet and greet!\n";
}

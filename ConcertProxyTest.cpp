/*  ConcertProxyTest.cpp
	Malvika Shriwas
	CS 372 Design Pattern proxy */

#include "Concert.h"
#include "ConcertProxy.h"
#include "ConcertVIP.h"
#include "ConcertRegs.h"

int main()
{
	ConcertVIP vip(std::string("Adam"));
	ConcertRegs regs(std::string("John"));

	Concert concert;
	ConcertProxy concertProxy(&concert);

	concertProxy.PreConcert(&vip);
	concertProxy.PreConcert(&regs);
	concertProxy.MeetAndGreet(&vip);
	concertProxy.MeetAndGreet(&regs);

	return 0;
}
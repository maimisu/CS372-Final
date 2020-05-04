# CS372-Final

I first did this project on chain of responsibility but that didn't turn out ok, so I re-did it implementing Proxy.

Proxy Pattern is a structural design pattern that lets users keep a placeholder for another oject to get access to it. 
Similarly to the website I have used as my main reference, I created:
We will consider a regular music concert, where there are two types of attendees (VIP: bought meet & greet tickets and have access to a pre-concert show) while the the other is just regular with no perks. First the Concert object was created which is protected by ConcertProxy object hence making it the protection proxy pattern. Those two objects implement the ConcertR interface using two methods which are PreConcert() and MeetAndGreet(). Both these methods have one ConcertAttendees an argument which will be the interface to two types of the attendees that I mentioned before, AttendeesReg and AttendeesVip. The two methods mentioned in here are HasPreConcertPasses() and HasMeetAndGreetPasses(). These methods return true if it passes, and false if not. The ConcertProxy is there to protect the Concert object by regulating that the attendees are VIP to get those extra perks!

This project was sort of tough for me given I have never programmed keeping one particuar pattern in mind. However with my sources 1 and 2, I was able to get a deeper dive and thorougly understand Proxies. 



These are some of the code examples at before starting the project: 
1. https://www.robertlarsononline.com/2017/05/26/proxy-pattern-using-cplusplus/ 
(I used this website to refer to the code to make sure what I was doing would produce the right output.)
2. https://www.youtube.com/watch?v=NwaabHqPHeM&t=1698s
3. https://www.bogotobogo.com/DesignPatterns/proxy.php
4. https://sourcemaking.com/design_patterns/proxy/cpp/1
5. https://refactoring.guru/design-patterns/proxy/cpp/example

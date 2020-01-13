#pragma once
#include "BaseQueue.h"
static void consumer()
{
	while (true)
	{
		std::unique_lock<std::mutex> cLock(mx);
		cv.wait(cLock, [] {return burgerReady; });
		while (!burgers.empty())
		{
			std::cout << "Eating delicious int burger no. " << burgers.front() << std::endl;
			burgers.pop();
			burgerReady = false;
			
		}
	}
	
}
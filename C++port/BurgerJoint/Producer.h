#pragma once
#include "BaseQueue.h"
static void producer()
{
	
	//Cycles through 50 burgers, displaying text after making each one
	//places the current int in a queue (the burgers are imaginary, they're all ints, sorry Phil)
	
	for (int i = 0; i < 50; i++)
	{
		
		{
			std::cout << "Frying up burger " << i << std::endl;
			burgers.push(i);
			burgerReady = true;
		}
		cv.notify_all();
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}
	
}
/*
Auther:Greg Cahill
BurgerJoint project, switching from java to c++
Utilise threading to produce and consume product.
*/
#include "Consumer.h" 
#include "Producer.h"


int main()
{
	std::thread produce(producer);
	std::thread consume(consumer);
	produce.join(); consume.join();
	
	
}
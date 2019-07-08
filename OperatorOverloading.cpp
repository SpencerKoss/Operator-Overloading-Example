

#include "pch.h"
#include "meatAndPotatoes.h"
#include <iostream>

int main()
{
	meatAndPotatoes objectA(34);
	meatAndPotatoes objectB(21);
	meatAndPotatoes objectC;

	objectC = objectA + objectB;
	std::cout << objectC.num;
    std::cout << "Hello World!\n"; 
}



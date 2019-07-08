#include "pch.h"
#include <iostream>
#include "meatAndPotatoes.h"


meatAndPotatoes::meatAndPotatoes()
{
}

meatAndPotatoes::meatAndPotatoes(int a)
{
	num = a;
}

meatAndPotatoes meatAndPotatoes::operator+(meatAndPotatoes object) {
	//creating a new object
	meatAndPotatoes brandNew;

	brandNew.num = num + object.num;
	return(brandNew);
}

meatAndPotatoes::~meatAndPotatoes()
{
}

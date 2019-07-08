#ifndef MEATANDPOTATOES_H
#define MEATANDPOTATOES_H

class meatAndPotatoes
{
public:
	int num;
	meatAndPotatoes();
	meatAndPotatoes(int);
	meatAndPotatoes operator+(meatAndPotatoes);
	~meatAndPotatoes();
};
#endif


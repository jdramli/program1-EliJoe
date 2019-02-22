//Vector.h Program1

#ifndef VECTORH_JDR
#define VECTORH_JDR

#include "Planet.h"

class Vector{

private:
	unsigned int current_elements; // made unsigned to match consistency in functions
	Planet ** vector;
	unsigned long capacity;
public:
Vector();
~Vector();

void insert(int, Planet*);
Planet * read(int);
bool remove(int);
unsigned long size();

unsigned int getNumElements(){ return this->current_elements;}



};



#endif

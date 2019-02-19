//Vector.h

#ifndef VECTORH_JDR
#define VECTORH_JDR

#include "Planet.h"

class Vector{

private:
	int current_elements;
	Planet ** vector;

public:
Vector();
~Vector();

void insert(int, Planet*);
Planet * read(int);
bool remove(int);
unsigned size();



};



#endif

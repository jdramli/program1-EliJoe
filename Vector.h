//Vector.h

#ifndef VECTORH_JDR
#define VECTORH_JDR


class Vector{

private:
	int current_elements;
	Vector ** vector;

public:
Vector();
~Vector();

void insert(int, Planet*);
Planet * read(int);
bool remove(int);
unsigned size();



};



#endif

//Planet.cpp
#include "Planet.h"
#include <cstdlib> // Necessary for random number generator.
#include <iostream>//Necessary for IO

// You should also randomly select a planet type between rocky, habitable, and gaseous. Add a new private variable, char type that represents the planet type with a character: 'h' = habitable, 'r'=rocky, 'g'=gaseous

Planet::Planet(int distance){
	//this->id = id; //removed in update
	this->distance = distance;
    this->pos = (rand() %359); // TODO: double check if this should be 359 or 360 to include 359
	int selector = (rand()%3);
	if(selector == 0){
			this->type = 'h'; // habitable
	}
	else if(selector == 1){
			this->type = 'r'; // rocky
	}
	else{
		this->type = 'g'; // gaseous
	}
	 
}

int Planet::orbit(){
	if(this->pos >= 359){
		this->pos = 0;
	}
	else if(this->pos < 0){
		this->pos = 0;
	}
	else{
		this->pos = this->pos + 1;
	}
	return this->pos;
}

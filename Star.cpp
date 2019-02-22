//Star.cpp Program1

#include <iostream>
#include <cstdlib>
#include "Star.h"

Starvector::Starvector(){
	//initialize memory
	this->current_elements = 0;
	Vector * planets_vector = NULL;
}
Starvector::~Starvector(){
	//deallocate all memory when Star is deleted (this Starvector is deleted)
	for(int i = 0; i < this->current_elements; i++){
		delete planets_vector[i];
	}
	delete [] planets_vector;
}
long Starvector::addPlanet(){
	
	
	
}
bool Starvector::removePlanet(int){
	
}
Planet* Starvector::getPlanet(int){
	
}
void Starvector::orbit(){
	
}
void Starvector::printStarInfo(){
	
}
unsigned int Starvector::getCurrentNumPlanets(){
	
}

Starlist::Starlist(){
	//initialize memory
	
	
	
}
Starlist::~Starlist(){
		//deallocate memory on deletion of Star(this Starlist class)
}
Starlist::long addPlanet(){
		
}
bool Starlist::removePlanet(int){
	
}
Planet* Starlist::getPlanet(int){
	
}
void Starlist::orbit(){
		
}

void Starlist::printStarInfo(){
	
}
unsigned int Starlist::getCurrentNumPlanets(){
	
}






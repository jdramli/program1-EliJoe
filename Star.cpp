//Star.cpp Program1

#include <iostream>
#include <cstdlib>
#include "Star.h"


Starvector::Starvector(){
	//initialize memory
	//this->current_elements = 0;
	//this->planets_vector = NULL;
	//this->planets_vector = NULL;
}
Starvector::~Starvector(){
	//deallocate all memory when Star is deleted (this Starvector is deleted)
	/*
	for(int i = 0; i < this->current_elements; i++){
		delete planets_vector[i];
	}
	delete [] planets_vector;
	*/
}


long Starvector::addPlanet(){
	long current_size = planets_vector.size();
	Planet * new_planet = new Planet(rand()%3000);
	this->planets_vector.insert(current_size,new_planet);
	return new_planet->getID();

}

bool Starvector::removePlanet(int index){

	return planets_vector.remove(index);

}

Planet* Starvector::getPlanet(int index){

	return planets_vector.read(index);

}

unsigned int Starvector::getCurrentNumPlanets(){

		return this->planets_vector.getNumElements();

}

void Starvector::orbit(){

	for(unsigned int p = 0; p < this->planets_vector.getNumElements(); p++){
		//std::cout << "The current position is: " << this->planets[p]->getPos() << std::endl;
		this->planets_vector.read(p) ->orbit();  // Should just require the simple dereference with * to orbit the object... so use ->
	}
}

void Starvector::printStarInfo(){
	std:: cout << "The star currently has " << this->planets_vector.getNumElements() << " planets." << std::endl;
	//std::cout << "The star can support up to  " << this->max_planets << " planets." << std::endl;

	for(unsigned int a = 0; a < this->planets_vector.getNumElements(); a++){
		std::cout << "Planet " << this->planets_vector.read(a)->getType() << a << " is " << this->planets_vector.read(a)->getDistance() <<  " million miles away at position " << this->planets_vector.read(a)->getPos() << " around the star." << std::endl;
	}
}



/*
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

}*/

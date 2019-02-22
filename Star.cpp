//Star.cpp Program1

#include <iostream>
#include <cstdlib>



Starvector::Starvector(){
	//initialize memory
	//this->current_elements = 0;
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
	
}
bool Starvector::removePlanet(int index){
	
	return planets_vector.remove(index);
	
}
Planet* Starvector::getPlanet(int index){
	
	return planets_vector.read(index);
	
}
void Starvector::orbit(){
	
	for(int p = 0; p < planets_vector.getCurrentNumPlanets(); p++){
		//std::cout << "The current position is: " << this->planets[p]->getPos() << std::endl;
		planets_vector[p] ->orbit();  // Should just require the simple dereference with * to orbit the object... so use ->
	}
	
}
void Starvector::printStarInfo(){
	std:: cout << "The star currently has " << planets_vector. << " planets." << std::endl;
	//std::cout << "The star can support up to  " << this->max_planets << " planets." << std::endl;
	
	for(int a = 0; a < this->current_planets; a++){
		std::cout << "Planet " << planets[a]->getType() << a << " is " << this->planets[a]->getDistance() <<  " million miles away at position " << this->planets[a]->getPos() << " around the star." << std::endl;
	}
	
}
unsigned int Starvector::getCurrentNumPlanets(){
	
		return this->planets_vector.getNumElements();
	
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






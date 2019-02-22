//Star.h Program1

#ifndef STARH_JDR
#define STARH_JDR
#include "Planet.h"
#include "Vector.h"


class Starvector{
	
	//int current_planets;
	Vector planets_vector; //double check if this should be a pointer or not.
	//int next_id; //prob don't need this


public:
	Starvector();
	~Starvector();
	long addPlanet();
	bool removePlanet(int);
	Planet * getPlanet(int);
	void orbit();
	void printStarInfo();
	unsigned int getCurrentNumPlanets();


};

class Starlist{


public:
	Starlist();
	~Starlist();
	long addPlanet();
	bool removePlanet(int);
	Planet * getPlanet(int);
	void orbit();
	void printStarInfo();
	unsigned int getCurrentNumPlanets();


};


#endif



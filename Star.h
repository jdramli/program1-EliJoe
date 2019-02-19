//Star.h Program1

#ifndef
#define


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











class Starvector{


public:
	Starvector();
	~Starvector();
	long addPlanet();
	bool removePlanet(int);
	Planet * getPlanet(int);
	void orbit();
	void printStarInfo();
	unsigned in getCurrentNumPlanets();


};




//Star.h Program1

#ifndef
#define



class Starvector{
	
	int current_planets;
	//int next_id; //prob don't need this


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



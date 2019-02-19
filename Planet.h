//Planet.h Program1
#ifndef PLANETH_JDR
#define PLANETH_JDR


class Planet{
	private:
	//the "this" pointer should be a pointer that holds the address of the Planet object (this class). 
		//int id;  //If we are using "this" for the address which is already done in the constructor, then we probably don't need this variable.
		int pos;
		int distance;
		char type;
	public:
		Planet(int); //Should we also have a no-argument creator as well?
        int orbit();
		long int getID() {return this;} //This needs to be a long int to hold the address -- apparently the address can be stored in a variable that is not a pointer?
        int getDistance() {return this->distance;}
        int getPos() {return this->pos;}
		char getType() {return this->type;}
		//you may add any additional methods you may need.
};

#endif

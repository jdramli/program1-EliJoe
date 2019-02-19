#ifndef PLANETH_JDR
#define PLANETH_JDR


class Planet{
	private:
		int id;
		int pos;
		int distance;
		char type;
	public:
		Planet(int); //Should we also have a no-argument creator as well?
        int orbit();
		long int getID() {return this->id;} //This needs to be a long and h old the address
        int getDistance() {return this->distance;}
        int getPos() {return this->pos;}
		char getType() {return this->type;}
		//you may add any additional methods you may need.
};

#endif

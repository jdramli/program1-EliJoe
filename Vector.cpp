//Vector.cpp Program1

#include "Vector.h"
#include <iostream>
#include <cstdlib>

Vector::Vector(){

	this->vector = NULL;
	this->current_elements = 0;
	this->capacity = 0;
	//this->capacity = 1; // Should be 1 because it should start at the size of index + 1 equivalent -- index starts at 0
}

Vector::~Vector(){
	for(int i = 0; i < this->current_elements; i++){ //sizeof(vector)/sizeof(vector[0])
		delete vector[i];
	}
	if(this->vector != NULL) delete [] vector;

}

void Vector::insert(int index, Planet* p){
	//first check to make sure it is in bounds
	if(index > this->capacity){
		//the planet pointer is being passed with "p" so we dont' need to create any planet objects
		Planet ** temp_vec = new Planet* [index+1];  //THIS IS WHERE WE CREATE THE SIZE OF INDEX+1 to avoid confusion of increments/decrements
		for(int i = 0; i < index+1; i++){ //iterated up to un-increased 'capacity' here, because we would get a seg-fault since old vector will only be of size 'capacity'
//			if(vector[i] == NULL){
//				temp_vec[i] == NULL;
//			}
			temp_vec[i] = vector[i];
		}
		temp_vec[index] = p;  // using 'index' or this->capacity-1 should work.

		//do we need a loop here to set the values in between to NULL?  hopefully not //maybe set other ID's to 0 in the constructors

		if(vector != NULL) {delete [] this->vector;}
		this->vector = temp_vec;
		this->capacity = index+1; // can set future capacity AFTER the loop through the array, to ensure that old 'capacity' was used in the loop to prevent a segmentation fault
		this->current_elements++;
	}
	//else, the index is IN-BOUNDS and the capacity should be increased by 1
	else{
			//Add the pointer element to the array of pointers

			//Add two loops to account for the vector array.
			Planet ** temp_vec = new Planet*[this->capacity + 1];  //increases the vector size by 1 to hold the insertion.
			for(int i = 0; i < this->capacity; i++){
				if(i < index){
					temp_vec[i] = this->vector[i];
				}
				else{
					temp_vec[i+1] = this->vector[i]; //temp_vec indexed at i+1 to leave a space at the intended insertion index of p
				}
			}
			temp_vec[index] = p; // sets the index to the pointer passed "p"
			if(vector != NULL) {delete [] this->vector;} //CAN'T FORGET THIS TO DELETE THE MEMORY OF OLD POINTER ARRAY
			vector = temp_vec;
			this->current_elements++;
			this->capacity++;
	}

}

Planet* Vector::read(int index){
	if(index > this->capacity || index < 0){
		return NULL;
	}
	if(vector[index]->getID() == NULL){
		return NULL;
	}

	return vector[index]; // This should simply get a pointer from vector[index] i.e. vector [1] and return it, it is already a pointer
}


bool Vector::remove(int index){

	if(index < 0 || index > this->capacity){ return false;} //Can only remove the planet if the index is valid, otherwise returns false.

	Planet ** temp_vec = new Planet*[this->capacity-1];
	//NOTE** NEED TO USE THE HANDLE AT THE INDEX TO DELETE THE PLANET OBJECT BEFORE COPYING THE NEW POINTERS
	delete vector[index]; //this should actually take the pointer at the index and delete the underlying planet object
	for(int i = 0; i < this->capacity; i++){

		if(i < index){
			temp_vec[i] = vector[i];
		}
		else{
			temp_vec[i] =vector[i+1]; //set to i+1 to leave a space at the intended insertion index of p
		}
	}
	if(vector != NULL) {delete [] this->vector;}//This will prevent a memory leak of pointer objects (still just memory objects in essence)
	this->vector = temp_vec;

	this->current_elements--;
	this->capacity--;
	return true;

}

unsigned int Vector::size(){

	//calculating size could be the number of bytes of each element combined
	//or the acutal # of elements.
	return this->capacity; //check this


}

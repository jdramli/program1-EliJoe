#include "Vector.h"
#include <iostream>
#include <cstdlib>

//Vector.cpp

Vector::Vector(){
	
	this->vector = NULL;
	this->current_elements = 0;

}

Vector::~Vector(){
	for(int i = 0; i < this->current_elements; i++){ //sizeof(vector)/sizeof(vector[0])
		delete vector[i];
	}
	if(this->vector != NULL) delete [] vector;

}

void Vector::insert(int index, Planet* p){
	
	//first check to make sure it is in bounds
	if(index > this->current_elements){
		//This is where we increase capacity to the size of the index+1
		//the planet pointer is being passed with "p" so we dont' need to create any planet objects 
		Planet ** temp_vec = new Planet* [this->current_elements+1];
		for(int i = 0; i < this->current_elements; i++){
			temp_vec[i] = vector[i]; 
		}
		if(vector != NULL) {delete [] this->vector;}
		temp_vec[this->current_elements] = p;
		vector = temp_vec;
		this->current_elements++;
		
	}
	else{
			//Add the pointer element to the array of pointers
			
			//Add two loops to account for the vector array.
			Planet ** temp_vec = new Planet*[this->current_elements+1];
			for(int i = 0; i < this->current_elements; i++){
				
				if(i < index){
					temp_vec[i] = this->vector[i];
				}
				else{
					temp_vec[i+1] = this->vector[i]; //set to i+1 to leave a space at the intended insertion index of p
				} 
			}
			temp_vec[index] = p; // sets the index to the pointer passed "p"
			if(vector != NULL) {delete [] this->vector;} //CAN'T FORGET THIS TO DELETE THE MEMORY OF OLD POINTER ARRAY
			vector = temp_vec;
			this->current_elements++;
	}

}

Planet* Vector::read(int index){
	
	if(index > this->current_elements || index < 0){
		return NULL;
	}
	
	return vector[index]; // This should simply get a pointer from vector[index] i.e. vector [1] and return it, it is already a pointer 
	
}


bool Vector::remove(int index){
	Planet ** temp_vec = new Planet*[this->current_elements-1];
	//NOTE** NEED TO USE THE HANDLE AT THE INDEX TO DELETE THE PLANET OBJECT BEFORE COPYING THE NEW POINTERS
	delete vector[index]; //this should actually take the pointer at the index and delete the underlying planet object
	for(int i = 0; i < this->current_elements; i++){
		
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
	
}

unsigned Vector::size(){

	//calculating size could be the number of bytes of each element combined
	//or the acutal # of elements.
	
}


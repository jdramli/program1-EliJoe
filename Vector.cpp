#include "Vector.h"
#include <iostream>
#include <cstdlib>

//Vector.cpp

Vector::Vector(){
	
	this->vector = NULL;
	this->current_elements = 0;

}

Vector::~Vector(){

}

void Vector::insert(int index, Planet *p){
	
	//first check to make sure it is in bounds
	if(index > this->current_elements){
		//This is where we increase capacity to the size of the index+1
		//and add planet?
		Vector ** temp_vec = new Vector* [this->current_elements+1];
		for(int i = 0; i < this->current_elements; i++){
			temp_vec[i] = vector[i]; 
		}
		delete [] vector;
		temp_vec[this->current_elements] = p;
		vector = temp_vec;
		
	}
	else{
			//Add the element to the array of pointers
			
			//Add two loops to account for the vector array.
			Vector ** temp_vec = new Vector*[this->current_elements+1];
			for(int i = 0; i < this->current_elements; i++){
				
				if(i < index){
					temp_vec[this->current_elements] = p;
				}
				temp_vec[i] = vector[i]; 
			}
			//temp_vec[index] = p;
			
	}

}

bool Vector::remove(int index){

}

unsigned Vector::size(){

	//calculating size could be the number of bytes of each element combined
	//or the acutal # of elements.
	
}


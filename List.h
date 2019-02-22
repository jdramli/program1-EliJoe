//List.h Program1

#ifndef
#define

class Node{
	
public:
//used exact data and node variable names from the class notes.  This seems like a good idea for these two names to always be used in both academics and industry.
	//int data; // In this case, our data will probably also include a planet pointer? or an index? or remove this?
	Planet * planet;
	Node * next; //CAN CONSIDER ADDING A "*prev" node if we need that functionality 
	Node * prev;
	//Node(int num) {data = num; next = NULL;}
	
//This class is done in List with an inline constructor because this seems to be a popular way to organize the Node that will be the building block of the Linked List in this file (or these types of files).
};


class List(){

//Should our Node class be defined here?

private:
//used exact data and node variable names from the class notes.  This seems like a good idea for these two names to always be used in both academics and industry.
	Node * head;
	Node * tail;

public:
		List();
		~List();
		void insert(int, Planet*);
		Planet* read(int)
		bool remove(int)
		unsigned size();



};

#endif

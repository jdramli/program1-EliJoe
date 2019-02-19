M = program1test
P = program1
Q = Planet
R = Vector
S = Star
L = List
CFLAGS = -g -Wall -std=c++14 -Wextra -pedantic


run:	all
	./$(M)

all:	$(M) 
	
$(M):	$(P).o $(Q).o  $(R).o $(S).o $(L).o
	g++ $(P).o $(Q).o $(R).o $(S).o $(L).o -o  $(M)  
		
	
$(P).o:	$(P).cpp 
	g++ -c  $(CFLAGS) $(P).cpp  
		

$(Q).o:	$(Q).cpp
	g++ -c  $(CFLAGS) $(Q).cpp
		
$(R).o:	$(R).cpp
	g++ -c  $(CFLAGS) $(R).cpp
	
$(S).o:	$(S).cpp
	g++ -c  $(CFLAGS) $(S).cpp

$(L).o:	$(L).cpp
	g++ -c  $(CFLAGS) $(L).cpp


runval:	all
	valgrind ./$(M) 
		
	
clean:
	rm $(P).o
	rm $(Q).o 
	rm $(R).o
	rm $(M)

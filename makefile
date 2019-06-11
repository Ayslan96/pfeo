PROG = petfera
CC = g++
CPPFLAGS = -O0 -g -Wall -std=c++11 
OBJS = main.o classes1.o classes2.o classes3.o 


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o :
	$(CC) $(CPPFLAGS) -c main.cpp 

classes1.o : ../include/animal.h
	$(CC) $(CPPFLAGS) -c ../src/animal.cpp

classes2.o : ../include/anfibio.h
	$(CC) $(CPPFLAGS) -c ../src/anfibio.cpp

classes3.o : ../include/date.h
	$(CC) $(CPPFLAGS) -c ../src/date.cpp
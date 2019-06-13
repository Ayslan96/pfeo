PROG = petfera
CC = g++
IDIR = /include
CPPFLAGS = -I $(IDIR)-O0 -g -Wall -std=c++11 
OBJS = main.o animal.o anfibio.o date.o ave.o reptil.o mamifero.o classArquivo.o menu.o interfaces.o veterinario.o funcionario.o


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp 

animal.o : 
	$(CC) $(CPPFLAGS) -c src/animal.cpp

anfibio.o : 
	$(CC) $(CPPFLAGS) -c src/anfibio.cpp

date.o : 
	$(CC) $(CPPFLAGS) -c src/date.cpp

ave.o : 
	$(CC) $(CPPFLAGS) -c src/ave.cpp

reptil.o : 
	$(CC) $(CPPFLAGS) -c src/reptil.cpp

mamifero.o : 
	$(CC) $(CPPFLAGS) -c src/mamifero.cpp

classArquivo.o : 
	$(CC) $(CPPFLAGS) -c src/classArquivo.cpp

menu.o : 
	$(CC) $(CPPFLAGS) -c src/menu.cpp

interfaces.o : 
	$(CC) $(CPPFLAGS) -c src/interfaces.cpp

veterinario.o:
	$(CC) $(CPPFLAGS) -c src/veterinario.cpp

funcionario.o:
	$(CC) $(CPPFLAGS) -c src/funcionario.cpp
#tratador.o:
#	$(CC) $(CPPFLAGS) -c src/veterinario.cpp

clean:
	rm -f core $(PROG) $(OBJS)

PROG = petfera
CC = g++
IDIR = /include
CPPFLAGS = -I $(IDIR)-O0 -g -Wall -std=c++11 
OBJS = main.o animal.o animalnativo.o animalexotico.o animalsilvestre.o anfibio.o anfibionativo.o anfibioexotico.o date.o ave.o avenativo.o aveexotico.o reptil.o reptilnativo.o reptilexotico.o mamifero.o mamiferonativo.o mamiferoexotico.o classArquivo.o menu.o interfaces.o veterinario.o funcionario.o tratador.o


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp 

animal.o : 
	$(CC) $(CPPFLAGS) -c src/animal.cpp
	
animalnativo.o :
	$(CC) $(CPPFLAGS) -c src/animalnativo.cpp

animalexotico.o :
	$(CC) $(CPPFLAGS) -c src/animalexotico.cpp

animalsilvestre.o :
	$(CC) $(CPPFLAGS) -c src/animalsilvestre.cpp

anfibio.o : 
	$(CC) $(CPPFLAGS) -c src/anfibio.cpp
	
anfibionativo.o : 
	$(CC) $(CPPFLAGS) -c src/anfibionativo.cpp

anfibioexotico.o : 
	$(CC) $(CPPFLAGS) -c src/anfibioexotico.cpp

date.o : 
	$(CC) $(CPPFLAGS) -c src/date.cpp

ave.o : 
	$(CC) $(CPPFLAGS) -c src/ave.cpp

avenativo.o : 
	$(CC) $(CPPFLAGS) -c src/avenativo.cpp

aveexotico.o : 
	$(CC) $(CPPFLAGS) -c src/aveexotico.cpp

reptil.o : 
	$(CC) $(CPPFLAGS) -c src/reptil.cpp
	
reptilnativo.o : 
	$(CC) $(CPPFLAGS) -c src/reptilnativo.cpp

reptilexotico.o : 
	$(CC) $(CPPFLAGS) -c src/reptilexotico.cpp

mamifero.o : 
	$(CC) $(CPPFLAGS) -c src/mamifero.cpp

mamiferonativo.o : 
	$(CC) $(CPPFLAGS) -c src/mamiferonativo.cpp

mamiferoexotico.o : 
	$(CC) $(CPPFLAGS) -c src/mamiferoexotico.cpp

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
tratador.o:
	$(CC) $(CPPFLAGS) -c src/tratador.cpp

clean:
	rm -f core $(PROG) $(OBJS)

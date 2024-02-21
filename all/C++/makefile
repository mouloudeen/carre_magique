#Makefile des carre

CC = g++
CFLAGS = -Wall 
LIB =
EXEC = carre

#Tous les fichiers .c
SRC = $(wildcard *.cpp)

#Générer les noms des fichiers .o à partir de la liste des fichiers .c
OBJ = $(SRC:.cpp=.o)


all: $(EXEC)


$(EXEC) : $(OBJ) 
	$(CC) -o $@  $^ $(CFLAGS)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo "Suppression des fichiers $(OBJ)"
	rm  $(OBJ)

mrproper: clean
	rm $(EXEC)



rebuild: mrproper all





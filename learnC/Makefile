CC = gcc
EXEC = prog
SRC = putstr.c main.c
OBJ = main.c putstr.c

all : $(EXEC)

# use the varible $(cc)
$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

%.o : %.c
	$(CC) -o $(OBJ) -c $(SRC) -Wall -Werror -Wextra


clean :
	rm -fr *.o

<cible> : <dependances>
	<commande>

# Variable speciales
# $@ nom de la cible
# $< nom premiere dependance
# $^ liste dependances plus recente que la cible
# $* nom fichier sans son extension


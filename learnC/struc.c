#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
	int nombre;
	Element *suivant;
};
typedef struct Liste Liste;
struct Liste
{
	Element *premier;
};

Liste initialisation()
{
	Liste *liste = malloc (sizeof(*liste));
	Element *element = malloc (sizeof(*element));
	if (liste == NULL || element == NULL)
		return (liste);
	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;
	return (*liste);
}

void insertion(Liste *liste, int nvNombre)
{
	Element *nouveau = malloc(sizeof(*nouveau));
	if (liste == NULL || nouveau == NULL)
			break;
	nouveau->nombre = nvNombre;

	/*Insertion de l'element au debut de la liste */
	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
}
void	suppression(Liste *liste)
{
	if(liste != NULL)
	{
		if (liste -> premier !NULL)
		{
			Element *aSupprimer = liste->premier;
			liste->premier = liste->premier->suivant;
			free(aSupprimer);
		}
	}
}
void afficherListe(Liste *liste)
{
	if (liste != NULL)
		{
			Element *actuel = liste->premier;

			while (actuel != NULL)
			{
				printf("%d ->", actuel->nombre);
				actuel = actuel->suivant;
			}
			printf("NULL\n");
		}
}

int main(void)
{
	Liste *maListe = initialisation();
	initialisation(maListe, 4);
	initialisation(maListe, 8);
	initialisation(maListe, 16);
	initialisation(maListe, 32);

	afficherListe(maListe);
}

#----------------------------------------007MJ-------------------------------------------------#

NAME     =     libft.a
RM         =     rm -f
CC         =     gcc
CFLAG     =     -Wall -Werror -Wextra
OBJ     =         $(SRC:.c=.o)
SRC     =     ft_isalph.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_split.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

all : $(NAME)
#the name of the compileur programme
# ar -rcs
# the generates output file

$(NAME) : $(OBJ)
    ar -rcs $@  $^
#compil source into object
%.o : %.c
    $(CC) $(CFLAG) -c $^ -o $@

clean :
    $(RM) $(OBJ)
fclean : clean
    $(RM) $(NAME)
re : fclean all

DEFAULT_GOAL: all
.DELETE_ON_ERROR: $(NAME)
.PHONY: all bonus clean fclean re

# Hide calls
export VERBOSE    =    TRUE
ifeq ($(VERBOSE),TRUE)
    HIDE =
else
    HIDE = @
endif
int        ft_isalpha(int c);

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC        =    gcc
CFLAGS    =    -Wall -Werror -Wextra -I. -I./include
RM        =    rm -rf

# Dir and file names
NAME    =    libft.a
SRCDIR    =    src/
OBJDIR    =    bin/
DEPDIR    =    include/
SRCS    =    $(wildcard $(SRCDIR)*.c)
OBJS    =    $(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))
DEP        =    $(wildcard $(DEPDIR)*.h)


#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(NAME)

# Generates output file
$(NAME): $(OBJS)
    $(HIDE)ar -rcs $@ $^

# Compiles source files into object files
$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c $(OBJDIR) $(DEP)
    $(HIDE)$(CC) $(CFLAGS) -c $< -o $@

# Creates directory for binaries
$(OBJDIR):
    $(HIDE)mkdir -p $(OBJDIR)

# Removes objects
clean:
    $(HIDE)$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
    $(HIDE)$(RM) $(NAME)

# Removes objects and executables and remakes
re: fclean all

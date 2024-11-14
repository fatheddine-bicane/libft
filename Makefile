

SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c

OBJ = $(SRC)
	gcc -c &(SRC)

test : &(OBJ)
	gcc 

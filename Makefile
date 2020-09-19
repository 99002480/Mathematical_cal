SRC = src/adder.c\
main.c

INC = -Iinc

PROJECT_NAME = adder.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
CC = gcc
CC_W = -Wall -Werror -Wextra -pedantic -Wno-unused-parameter -Wno-unused-variable
CC_ARGS = -g $(CC_W)
APP = ./bin/app
SRC = ./src
INC = -I./include

build:
	$(CC) $(CC_ARGS) $(INC) $(SRC)/*.c -o $(APP)

run:
	$(APP)

br: build run
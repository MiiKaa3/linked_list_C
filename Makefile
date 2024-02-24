GCC_ARGS = -g -Wall -Werror -Wextra -pedantic -Wno-unused-parameter -Wno-unused-variable

build:
	gcc $(GCC_ARGS) ./*.c -o ./app

run:
	./app

br: build run
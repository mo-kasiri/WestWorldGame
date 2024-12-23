###########################################################
# Declare some Makefile variables
###########################################################

ifeq ($(OS), Windows NT)
	CC=msvc
else
	CC=g++
endif

LANG_STD = -std=c++17
COMPILER_FLAGS = -Wall -Wfatal-errors

SRC_FILES = ./src/*.cpp \
			./src/States/*.cpp
OBJ_NAME = WestWorldGame

###########################################################
# Declare some Makefile Rules
###########################################################

build:
	$(CC) $(COMPILER_FLAGS) $(LANG_STD) $(SRC_FILES) -o $(OBJ_NAME);
run:
	./$(OBJ_NAME)
clear:
	rm $(OBJ_NAME)
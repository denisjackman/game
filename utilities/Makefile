#OBJS specifies which files to compile as part of the project
OBJS =  ../include/rogue.cpp monster_checker.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w -std=gnu++0x --coverage -fprofile-arcs -ftest-coverage
MAC_COMPILER_FLAGS = -w


#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2 -lcppunit -fprofile-arcs -lgcov
MAC_LINKER_FLAGS =

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = monster_checker

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

Mac : $(OBJS)
	$(CC) $(OBJS) $(MAC_COMPILER_FLAGS) $(MAC_LINKER_FLAGS) -o $(OBJ_NAME)


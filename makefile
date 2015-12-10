#
# This is an example Makefile for a countwords program.  This
# program uses both the scanner module and a counter module.
# Typing 'make' or 'make count' will create the executable file.
#

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = g++
CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: program

program: boulderd.o main.o fileProcessor.o
	$(CC) $(CFLAGS) -o program boulderd.o main.o fileProcessor.o

# To create the executable file count we need the object files
# countwords.o, counter.o, and scanner.o:
#
main.o:  main.cpp
	$(CC) $(CFLAGS) -c main.cpp

fileProcessor.o:  fileProcessor.cpp
	$(CC) $(CFLAGS) -c fileProcessor.cpp fileProcessor.h

# To create the object file countwords.o, we need the source
# files countwords.c, scanner.h, and counter.h:
#
boulderd.o:  boulderd.cpp boulderd.h
	$(CC) $(CFLAGS) -c boulderd.cpp boulderd.h


clean: 
	$(RM) program *.o *~
OUTPUT = ListaStudentow

CXX=g++
CXXFLAGS+=-Wall -g#-O0 $(GXX_FLAGS) -std=c++11
#CXXFLAGS+=-g

#Dependency for the ouotput file
#DEP_FLAGS=-MMD
#DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=${SRC:.cpp=.d}

#Add dependency generation to the compiler options
CXXFLAGS+=$(DEP_FLAGS)

all: $(OUTPUT)
	@echo Cel glowny zbudowany

$(OUTPUT): $(OBJ)
	@$(CXX) $(OBJ) -o $@
	
%.o: %.cpp
	@$(CXX) -c $(CXXFLAGS) $<

.PHONY: clean ListaStudentow

clean:
	@rm -f ListaStudentow $(OBJ) *.d

-include $(DEP) 
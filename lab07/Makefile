OUTPUT = StudentGrades

CXX=g++

CXXFLAGS = -Wall -g

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=${SRC:.cpp=.d}

CXXFLAGS+=$(DEP_FLAGS)

all: $(OUTPUT)
	@echo Cel glowny zbudowany

$(OUTPUT): $(OBJ)
	@$(CXX) $(OBJ) -o $@
	
%.o: %.cpp
	@$(CXX) -c $(CXXFLAGS) $<

.PHONY: clean StudentGrades

clean:
	@rm -f StudentGrades $(OBJ) *.d

-include $(DEP) 
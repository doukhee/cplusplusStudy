CPP = g++

SRCS = CarMain.cpp Car.cpp

CPP_HEADER = Car.h

CPP_INC = $(patsubst %,-I%, $(CPP_HEADER))

TARGET = CarMain

BUILDIR = buildDir

CPPOBJS = $(addprefix $(BUILDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDIR})

build:$(CPPOBJS)
	$(CPP) -o $(BUILDIR)/$(TARGET) $^

$(CPPOBJS):$(BUILDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -o $@ -c $<

clean:
	rm -rf $(BUILDIR)

.SUFFIXES: .cpp .o
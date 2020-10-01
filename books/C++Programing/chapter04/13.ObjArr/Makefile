CPP = g++

SRCS = objArr.cpp

TARGET = objArr

BUILIDDIR = buildDir

CPPOBJS = $(addprefix $(BUILIDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILIDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILIDDIR)/$(TARGET) $^

$(CPPOBJS):$(BUILIDDIR)/%.o : %.cpp
	$(CPP) -o $@ -c $<

clean:
	rm -rf $(BUILIDDIR)

.SUFFIXES: .cpp .o
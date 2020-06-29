CPP = g++

SRCS = BetweenAdder.cpp

TARGET = BetweenAdder

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

$(CPPOBJS):$(BUILDDIR)/%.o : %.cpp
	$(CPP) -o $@ -c $<

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .cpp .o
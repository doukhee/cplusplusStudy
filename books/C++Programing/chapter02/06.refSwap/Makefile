CPP = g++

SRCS = RefSwap.cpp

TARGET = RefSwap

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build


createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^


$(CPPOBJS):$(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)


.SUFFIXES: .cpp .o
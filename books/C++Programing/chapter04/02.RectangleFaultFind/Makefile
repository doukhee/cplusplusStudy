CPP = g++

SRCS = RectangleFaultFind.cpp Point.cpp Rectangle.cpp

CPP_HEADER = Point.h Rectangle.h

CPP_INC = $(patsubst %,-I%, $(CPP_HEADER))

TARGET = RectangleFaultFind

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS):$(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .cpp .o

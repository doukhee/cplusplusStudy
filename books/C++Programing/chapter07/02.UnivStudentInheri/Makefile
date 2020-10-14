CPP = g++

SRCS = UnivStudentInheri.cpp

TARGET = UnivStudentInheri

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS):$(BUILDDIR)/%.o : %.cpp
	$(CPP) -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .cpp .o
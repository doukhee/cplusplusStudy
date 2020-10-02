CPP = g++

SRCS = ShallowCopyError.cpp

TARGET = ShallowCopyError

BUILDDIR = buildDir

CPPBOJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPBOJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPBOJS):$(BUILDDIR)/%.o : %.cpp
	$(CPP) -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .cpp .o
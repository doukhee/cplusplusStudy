GPP = g++

SRCS = DefaultValue.cpp

TARGET = DefaultValue

BUILDDIR = buildDir

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

$(COBJS):$(BUILDDIR)/%.o : %.cpp
	$(GPP) -c $< -o $@

build: $(COBJS)
	$(GPP) -o $(BUILDDIR)/$(TARGET) $^

clean:
	rm -rf $(BUILDDIR)


.SUFFIXES: .cpp .o
CXXFLAGS	= -I/usr/X11R6/include -DX11 -Wall
LDLIBS	= -L/usr/X11R6/lib -lglfw -lGL -lXrandr -lrt -lpthread -lm
OBJECTS	= $(patsubst %.cpp,%.o,$(wildcard *.cpp))
TARGET	= ggsample01

.PHONY: clean depend

$(TARGET): $(OBJECTS)
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	-$(RM) $(TARGET) *.o *~ .*~ core

depend:
	$(CXX) $(CXXFLAGS) -MM *.cpp > $(TARGET).dep

-include $(wildcard *.dep)

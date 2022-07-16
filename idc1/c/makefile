#head files path
PUBINCL= -I/project/public

#framework cpp file
PUBCPP=/project/public/_public.cpp

#compile parameter
CFLAGS=-g


all:crtsurfdata1 crtsurfdata2 crtsurfdata3

crtsurfdata1:crtsurfdata1.cpp
	g++ $(CFLAGS) -o crtsurfdata1 crtsurfdata1.cpp $(PUBINCL) $(PUBCPP) -lm -lc
	cp crtsurfdata1 ../bin/.

crtsurfdata2:crtsurfdata2.cpp
	g++ $(CFLAGS) -o crtsurfdata2 crtsurfdata2.cpp $(PUBINCL) $(PUBCPP) -lm -lc
	cp crtsurfdata2 ../bin/.

crtsurfdata3:crtsurfdata3.cpp
	g++ $(CFLAGS) -o crtsurfdata3 crtsurfdata3.cpp $(PUBINCL) $(PUBCPP) -lm -lc
	cp crtsurfdata3 ../bin/.
clean:
	rm crtsurfdata1 crtsurfdata2 crtsurfdata3

CC=g++
CFLAGS="-Wall"
LDFLAGS="-lstdc++"

debug:clean
	$(CC) $(CFLAGS) -g -o stringbad main.cpp
stable:clean
	$(CC) $(CFLAGS) -o stringbad main.cpp
vegnews:clean
	$(CC) $(CFLAGS) $(LDFLAGS) -o vegnews vegnews.cpp strngbad.cpp
clean:
	rm -vfr *~ stringbad vegnews

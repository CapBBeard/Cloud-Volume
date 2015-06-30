CC=g++
INCLDIRS=-I/usr/local/include 
LIBSDIRS=-L/opt/hfs14.0.361/ -L/usr/local/lib
LIBS=-lHalf -lopenvdb -ltbb

CFLAGS=-pthread -fPIC $(INCLDIRS) $(LIBSDIRS) $(LIBS)

hello:
	$(CC) $(CFLAGS) hello.cc -o hello

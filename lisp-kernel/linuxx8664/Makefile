VPATH=..
OBJS=main.o aux.o
CDEFINES=-DLINUX

.c.o:
	cc -c $< $(CDEFINES) -o $@

hello: $(OBJS)
	cc $(OBJS) -o hello

clean:
	rm -f hello $(OBJS)

main.o: main.c hello.h


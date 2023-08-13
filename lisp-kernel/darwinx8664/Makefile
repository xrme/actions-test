VPATH=..
OBJS=main.o helper.o
CDEFINES=-DDARWIN

.c.o:
	cc -c $< $(CDEFINES) -o $@

hello: $(OBJS)
	cc $(OBJS) -o hello

clean:
	rm -f hello $(OBJS)

main.o: main.c hello.h


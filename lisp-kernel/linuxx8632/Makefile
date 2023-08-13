VPATH=..
OBJS=main.o helper.o
CDEFINES=-DLINUX -DWORD_SIZE=32

.c.o:
	cc -m32 -c $< $(CDEFINES) -o $@

hello: $(OBJS)
	cc $(OBJS) -o hello

clean:
	rm -f hello $(OBJS)

main.o: main.c hello.h


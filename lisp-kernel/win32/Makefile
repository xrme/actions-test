VPATH=..
OBJS=main.o helper.o
CDEFINES=-DWINDOWS -DWIN_32 -DWORD_SIZE=32

.c.o:
	cc -c $< $(CDEFINES) -o $@

hello: $(OBJS)
	cc $(OBJS) -o hello

clean:
	rm -f hello $(OBJS)

main.o: main.c hello.h


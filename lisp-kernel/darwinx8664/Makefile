VPATH=..
OBJS=main.o helper.o
CDEFINES=-DDARWIN -DWORD_SIZE=64

.c.o:
	cc -c $< $(CDEFINES) -o $@

hello: $(OBJS)
	cc $(OBJS) -o hello

clean:
	rm -f hello $(OBJS)

main.o: main.c hello.h


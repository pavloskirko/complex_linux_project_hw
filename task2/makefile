CC = gcc
OBJ = lower.o uper.o
LIB = libconvert.so
LIBNAME = convert
DEPS = lower_upper_header.h

all: lower uper

lower: $(LIB) $(DEPS)
	$(CC) lower.c -o $@ -L . -l $(LIBNAME)

uper: $(LIB) $(DEPS)
	$(CC) uper.c -o $@ -L . -l $(LIBNAME)

lower_upper.o: lower_upper.c $(DEPS)
	$(CC) -c -fpic $^ 

$(LIB): lower_upper.o $(DEPS)
	$(CC) -shared -o $@ $<
	chmod 0755 $(LIB)
	cp $(LIB) /usr/lib/
	ldconfig

clean:
	rm -rf *.gch *.o lower uper
	rm -rf /usr/lib/$(LIB)
	rm -rf $(LIB)
	ldconfig
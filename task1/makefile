CC = gcc
OBJ = main.o
LIBS = libcalc.a
DEPS = main.h biargument_math.h oneargument_math.h

main: $(OBJ) $(LIBS)
	$(CC) $< -L . -l calc -o $@

main.o: main.c $(DEPS)
	$(CC) -c $< $^

biargument_math.o: biargument_math.c $(DEPS)
	$(CC) -c $< $^

oneargument_math.o: oneargument_math.c $(DEPS)
	$(CC) -c $< $^

libcalc.a: biargument_math.o oneargument_math.o
	ar -rcs $@ $^

clean:
	rm -rf *.o *.gch *.a 
	rm -rf main
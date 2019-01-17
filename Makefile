INSTALL = install
PREFIX  = /usr/bin

ckipver: src/ckipver.o
	$(CC) $(LDFLAGS) -o src/ckipver src/ckipver.o

install:
	$(INSTALL) -m 755 src/ckipver $(PREFIX)

clean:
	$(RM) src/ckipver src/*.o
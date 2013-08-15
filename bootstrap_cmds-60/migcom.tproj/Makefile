TARGET=migcom
OBJECTS=error.o global.o header.o lex.yy.o mig.o routine.o server.o \
	statement.o string.o type.o user.o utils.o parser.o
CPPFLAGS=-D__i386__ -DI386 -D__LITTLE_ENDIAN__ -I../../headers/include/foreign \
	-D__private_extern__=
CFLAGS=-m32 -O2 -pipe
LDFLAGS=

all: $(TARGET)

$(TARGET): parser.h $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

parser.h:
	yacc -d parser.y -o parser.c

lex.yy.o:
	lex lexxer.l
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o lex.yy.o lex.yy.c

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJECTS) lex.yy.c parser.h

install: $(TARGET)
	install -m 755 -o root -g root migcom /usr/bin/migcom
	install -m 755 -o root -g root mig.sh /usr/bin/mig


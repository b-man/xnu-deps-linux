CC = clang
CFLAGS = -g -O0 -I ../include/

PROG := setsegname

OBJS := \
	setsegname.o

%c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

install: $(PROG)
	install -d $(DESTDIR)/bin
	install -m 755 $(PROG) $(DESTDIR)/bin/$(PROG)

.PHONY: clean
clean:
	rm -rf $(OBJS) $(PROG)

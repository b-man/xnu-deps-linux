CC = clang
CFLAGS = -g -O0 -I ../include/

DARWIN_PREFIX=arm-apple-darwin11
PROG := setsegname

OBJS := \
	setsegname.o

%c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJS)
	clang $(OBJS) -o $(PROG)

install: $(PROG)
	install -d $(DESTDIR)/bin
	install -m 755 $(PROG) $(DESTDIR)/bin/$(DARWIN_PREFIX)-$(PROG)

.PHONY: clean
clean:
	rm -rf $(OBJS) $(PROG)

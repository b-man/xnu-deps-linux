CC = clang
CFLAGS = -g -O0 -I ../../include/
LFLAGS = -lstdc++ -luuid

PROG := kextsymboltool

OBJS := \
	swap.o \
	arch.o \
	kextsymboltool.o

%c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJS)
	$(CC) $(OBJS) -o $(PROG) $(LFLAGS)

install: $(PROG)
	install -d $(DESTDIR)/bin
	install -m 755 $(PROG) $(DESTDIR)/bin/$(PROG)

.PHONY: clean
clean:
	rm -rf $(OBJS) $(PROG)

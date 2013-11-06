all:
	make -C setsegname/
	make -C kextsymboltool/

install:
	make -C setsegname/ DESTDIR=${DESTDIR} install
	make -C kextsymboltool/ DESTDIR=${DESTDIR} install

.PHONY: clean
clean:
	make -C setsegname/ clean
	make -C kextsymboltool clean

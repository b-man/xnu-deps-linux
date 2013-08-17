DESTDIR=/usr/local

.PHONY: all

all: 
	@echo Building migcom...
	make -C bootstrap_cmds-60/migcom.tproj/
	@echo Building cctools...
	/bin/sh -c "cd cctools-836; ./configure --target=arm-apple-darwin11 --prefix=/; make CFLAGS=-I$(PWD)/headers/include/foreign all"

install:
	@echo Installing mig and migcom...
	make -C bootstrap_cmds-60/migcom.tproj/ DESTDIR=$(DESTDIR) install
	@echo Installing cctools...
	make -C cctools-836/ DESTDIR=$(DESTDIR) install
	@echo Installing xcode stubs...
	install -m 755 xcrun $(DESTDIR)/bin/xcrun
	install -m 755 xcodebuild $(DESTDIR)/bin/xcodebuild

clean:
	@echo Cleaning migcom...
	make -C bootstrap_cmds-60/migcom.tproj/ clean
	@echo Cleaning cctools...
	make -C cctools-836/ clean

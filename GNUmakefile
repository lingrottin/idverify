# IDAUTH MAKEFILE BY CDIL
# OPENSOURCED UNDER GPL 3.0
idauth: source/headers/idverify.h source/main.c
	mkdir binary
	gcc -o binary/idverify source/main.c

install: binary/idverify
	cp binary/idverify /usr/bin
clean:
	rm -rf binary/

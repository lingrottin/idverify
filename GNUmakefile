# IDAUTH MAKEFILE BY CDIL
# OPENSOURCED UNDER GPL 3.0
idauth: source/headers/idauth.h source/main.c
	mkdir binary
	gcc -o binary/idverify source/main.c

install: binary/idauth
	cp binary/idauth /usr/bin
clean:
	rm -rf binary/

PREFIX = /usr/local
PROG = flirt

all:
	cc ${PROG}.c -o ${PROG}

debug:
	clang ${PROG}.c -Wall -Werror -fsanitize=undefined,address -o ${PROG}

install:
	install -Dm755 ./${PROG} ${PREFIX}/bin/${PROG}

uninstall:
	rm -f ${PREFIX}/bin/${PROG}

clean:
	rm -rf ${XDG_CACHE_HOME}/${PROG}
PROGRAM=strleni
GCC ?= gcc
CC=$(GCC)
INSTALL ?= install
RM ?= rm
PREFIX ?= /usr/local
BINDIR ?= bin
CFLAGS ?= -std=gnu2x -march=native -O2 -pipe

ifdef _WIN32
OBJECT_EXT ?= .obj
EXECUTABLE_EXT ?= .exe
else
OBJECT_EXT ?= .o
EXECUTABLE_EXT ?= 
endif

SOURCES = $(PROGRAM)

$(PROGRAM): $(SOURCES)$(OBJECT_EXT)

clean:
	$(RM) -rf $(PROGRAM)$(OBJECT_EXT) $(PROGRAM)$(OBJECT_EXT) $(PROGRAM)$(EXECUTABLE_EXT)

install: $(PROGRAM)
	$(INSTALL) -d $(PREFIX)/$(BINDIR)
	$(INSTALL) -m 755 $(PROGRAM)$(EXECUTABLE_EXT) $(PREFIX)/$(BINDIR)

uninstall: $(PROGRAM)
	$(RM) -rf $(PREFIX)/$(BINDIR)/$(PROGRAM)$(EXECUTABLE_EXT)

CXX=g++
CPPFLAGS=-g -O0 
GENERIC_SRC=program_with_generics.cpp
GENERIC_SRC_BREAK_LINE=20
GENERIC_BIN=program_with_generics
GDB=sudo gdb
GDBFLAGS=-nx -x ../.gdbinit -ex "break $(GENERIC_SRC):$(GENERIC_SRC_BREAK_LINE)" -ex "set startup-with-shell off"

all: $(GENERIC_BIN)

$(GENERIC_BIN): $(GENERIC_SRC)
	$(CXX) $(CPPFLAGS) -o $(GENERIC_BIN) $(GENERIC_SRC)

clean:
	rm program_with_generics

test:
	$(GDB) $(GDBFLAGS) ./program_with_generics

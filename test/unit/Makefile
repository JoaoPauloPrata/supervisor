CC = g++
# Extension #
EXT = cpp
# Flags #
CFLAGS = -Wall -g
# Source directory #
SRC_DIR = ../../src
# Bin directory #
BIN_DIR = ../../bin
# Object Files #
OBJECTS = ../../bin/unit_user.o 
# Dynamic Link Libraries #
DLL = system_lib.dll
# Library #
LIB = -lsystem_lib
# Executable # 
EXE = test

exec: $(OBJECTS) exec_dll

exec_dll:
	$(CC) main.cpp -L$(BIN_DIR) $(LIB) $(OBJECTS) -o $(BIN_DIR)\$(EXE).exe

$(BIN_DIR)/unit_user.o: unit_user.$(EXT)
	$(CC) -c unit_user.$(EXT) -o $(BIN_DIR)/unit_user.o

# Recompile Library
dlls: system_dll
system_dll:
	$(CC) -shared $(SRC_DIR)/userimpl.cpp $(SRC_DIR)/itemimpl.cpp $(SRC_DIR)/purchaseimpl.cpp \
	 $(SRC_DIR)/receiptimpl.cpp $(SRC_DIR)/app.cpp -o $(BIN_DIR)/$(DLL)
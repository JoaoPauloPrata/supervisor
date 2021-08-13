CC = g++
# Extension #
EXT = cpp
# Flags #
CFLAGS = -Wall -g
# Dynamic Link Libraries #
DLL = system_lib.dll
# Library #
LIB = -lsystem_lib
# Executable # 
EXE = a
# Source directory #
SRC_DIR = .
# Bin directory #
BIN_DIR = ../bin

dlls: system_dll

system_dll:
	$(CC) -shared $(SRC_DIR)/userimpl.cpp $(SRC_DIR)/itemimpl.cpp $(SRC_DIR)/purchaseimpl.cpp \
	 $(SRC_DIR)/receiptimpl.cpp $(SRC_DIR)/app.cpp -o $(BIN_DIR)/$(DLL)

exec_dll:
	$(CC) main.cpp -L$(BIN_DIR) $(LIB) $(BIN_DIR)/api.o -o $(BIN_DIR)\$(EXE).exe
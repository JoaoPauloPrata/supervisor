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
SRC_DIR = ./src
# Bin directory #
BIN_DIR = ./bin
# Unit testing directoty #
UNIT_DIR = ./test/unit
# Object Files #
OBJECTS = ./bin/unit_user.o ./bin/unit_app.o 

all: $(OBJECTS) system_dll

system_dll:
	$(CC) -shared $(SRC_DIR)/userimpl.cpp $(SRC_DIR)/itemimpl.cpp $(SRC_DIR)/purchaseimpl.cpp \
	 $(SRC_DIR)/receiptimpl.cpp $(SRC_DIR)/app.cpp -o $(BIN_DIR)/$(DLL)

$(BIN_DIR)/unit_user.o: $(UNIT_DIR)/unit_user.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_user.$(EXT) -o $(BIN_DIR)/unit_user.o

$(BIN_DIR)/unit_app.o: $(UNIT_DIR)/unit_app.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_app.$(EXT) -o $(BIN_DIR)/unit_app.o

exec_dll:
	$(CC) main.cpp -L$(BIN_DIR) $(LIB) $(OBJECTS) -o $(BIN_DIR)\$(EXE).exe

run: exec_dll

clean:
	rm -f bin/*.o bin/unit_tests bin/*.dll
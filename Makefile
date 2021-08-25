CC = g++
# Extension #
EXT = cpp
# Flags #
# CFLAGS = -Wall -g
CFLAGS = -g
# Dynamic Link Libraries #
DLL = system_lib.dll
# Library #
LIB = -lsystem_lib
# Source directory #
SRC_DIR = ./src
# Bin directory #
BIN_DIR = ./bin
# Unit directory #
UNIT_DIR = ./test/unit
# Funcional directory #
FUNC_DIR = ./test/functional
# Object Files #
OBJECTS = ./bin/unit_user.o ./bin/unit_app.o ./bin/unit_item.o ./bin/unit_purchase.o ./bin/unit_receipt.o 

api: 
	$(CC) -shared $(SRC_DIR)/userimpl.cpp $(SRC_DIR)/itemimpl.cpp $(SRC_DIR)/purchaseimpl.cpp \
	 $(SRC_DIR)/receiptimpl.cpp $(SRC_DIR)/app.cpp -o $(BIN_DIR)/$(DLL)

tests: exec_func exec_unit

test_func:
	g++ ./test/functional/*.cpp -L./bin $(LIB) -o ./bin/functional_tests $(CFLAGS)

test_unit:
	g++ ./test/unit/*.cpp -L./bin $(LIB) -o ./bin/unit_tests $(CFLAGS)

run_tests: run_func run_unit

run_func:
	./bin/func

run_unit:
	./bin/unit

clean:
	rm -f bin/*.o bin/*.so bin/*.dll bin/*.exe

exec_unit: $(OBJECTS)
	$(CC) ./test/unit/main.cpp -L$(BIN_DIR) $(LIB) $(OBJECTS) -o $(BIN_DIR)\unit.exe

exec_func: ./bin/functional_tests.o
	$(CC) ./test/functional/main.cpp -L$(BIN_DIR) $(LIB) ./bin/functional_tests.o -o $(BIN_DIR)\func.exe

$(BIN_DIR)/unit_user.o: $(UNIT_DIR)/unit_user.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_user.$(EXT) -o $(BIN_DIR)/unit_user.o

$(BIN_DIR)/unit_app.o: $(UNIT_DIR)/unit_app.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_app.$(EXT) -o $(BIN_DIR)/unit_app.o

$(BIN_DIR)/unit_item.o: $(UNIT_DIR)/unit_item.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_item.$(EXT) -o $(BIN_DIR)/unit_item.o

$(BIN_DIR)/unit_purchase.o: $(UNIT_DIR)/unit_purchase.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_purchase.$(EXT) -o $(BIN_DIR)/unit_purchase.o

$(BIN_DIR)/unit_receipt.o: $(UNIT_DIR)/unit_receipt.$(EXT)
	$(CC) -c $(UNIT_DIR)/unit_receipt.$(EXT) -o $(BIN_DIR)/unit_receipt.o

./bin/functional_tests.o: $(FUNC_DIR)/functional_tests.$(EXT)
	$(CC) -c $(FUNC_DIR)/functional_tests.$(EXT) -o $(BIN_DIR)/functional_tests.o
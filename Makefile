api:
	g++ -shared ./src/app.cpp ./src/item.cpp ./src/itemimpl.cpp ./src/purchaseimpl.cpp \
	 ./src/receiptimpl.cpp ./src/userimpl.cpp -o ./bin/libapi.so -L./bin -fpic -Wl,-rpath,bin

tests: test_func test_unit

test_func:
	g++ ./test/functional/*.cpp -L./bin -lapi -o ./bin/functional_tests -Wl,-rpath,bin

test_unit:
	g++ ./test/unit/*.cpp -L./bin -lapi -o ./bin/unit_tests -Wl,-rpath,bin

clean:
	rm -f bin/*.o bin/*.so bin/functional_tests bin/unit_tests

run_tests: run_func run_unit

run_func:
	./bin/functional_tests

run_unit:
	./bin/unit_tests

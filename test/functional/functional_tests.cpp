#include "functional_tests.h"

using namespace std;

void functional_first_test() {
    cout << "TESTE FUNCIONAL INICIANDO" << endl;

    App &a = App::getInstance();

    Item *i = a.createItem("1", "name", 10.1);
    Purchase *p = a.createPurchase(2, "time", i);

    Item *i2 = a.createItem("2", "name2", 20.2);
    Purchase *p2 = a.createPurchase(4, "time2", i2);

    a.report();

    cout << "TESTE FUNCIONAL FINALIZADO" << endl;
};

void run_functional_tests() {
    functional_first_test();
};

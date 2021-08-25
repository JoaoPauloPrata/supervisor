#include "functional_tests.h"

using namespace std;

void functional_first_test() {
    cout << "TESTE FUNCIONAL INICIANDO" << endl;

    App &a = App::getInstance();

    Item *i = a.createItem("1", "name", 20.4);
    Purchase *p = a.createPurchase(2, "time", i);

    // a.addToReceipt(p);

    cout << "TESTE FUNCIONAL FINALIZADO" << endl;
};

void run_functional_tests() {
    functional_first_test();
};

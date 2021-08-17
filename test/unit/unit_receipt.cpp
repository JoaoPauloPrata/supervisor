#include "./unit_receipt.h"

using namespace std;

void unit_Receipt_constructor()
{
    cout<< "RECEIPT CONSTRUCTOR TEST STARTING..."<<endl;

    Receipt *receipt = new ReceiptImpl();
    ReceiptImpl *receipt2 = new ReceiptImpl();
    ReceiptImpl receipt3;

    Receipt *receipt4 = new ReceiptImpl("23/07/2000", 324.3, 500.3);
    assert(receipt4->getDate() == "23/07/2000");
    assert(receipt4->getInitialValue() == 324.3);
    assert(receipt4->getFinalValue() == 500.3);
    
    cout <<"RECEIPT CONSTRUCTOR TEST ENDED"<<endl;
};

void unit_Receipt_destructor()
{
    cout<<"RECEIPT DESTRUCTOR TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl();
    delete r;
    cout<<"RECEIPT DESCTRUCTOR TEST ENDED."<<endl;
};

void unit_Receipt_getDate()
{
    cout<<"RECEIPT GET DATE TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl("23/07/2000", 1.1, 2.1);
    assert(r->getDate() == "23/07/2000");

    const ReceiptImpl con("22/06/2000", 1.0, 2.3); 
    assert(con.getDate() == "22/06/2000");

    cout<<"RECEIPT GET DATE TEST ENDED."<<endl;
}

void unit_Receipt_setDate()
{
    cout<<"RECEIPT SET DATE TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl();
    r->setData("23/07/2000");

    assert(r->getDate() == "23/07/2000");

    ReceiptImpl over("22/07/2000", 0, 0);
    over.setData("21/07/2000");
    
    assert(over.getDate() == "21/07/2000");

    cout<<"RECEIPT SET DATE TEST ENDED..."<<endl;
}   

void unit_Receipt_getInitialValue()
{
    cout<<"RECEIPT GET INITIAL VALUE TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl("23/07/2000", 1.1, 2.1);
    assert(r->getInitialValue() == 1.1);

    const ReceiptImpl con("22/06/2000", 1.0, 2.3); 
    assert(con.getInitialValue() == 1.0);

    cout<<"RECEIPT GET INITIAL VALUE TEST ENDED."<<endl;
}

void unit_Receipt_setInitialValue()
{
    cout<<"RECEIPT SET INITIAL VALUE TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl();
    r->setInitialValue(2.2);

    assert(r->getInitialValue() == 2.2);

    ReceiptImpl over("22/07/2000", 3.2, 0);
    over.setInitialValue(4.5);
    
    assert(over.getInitialValue() == 4.5);

    cout<<"RECEIPT SET INITIAL VALUE TEST ENDED..."<<endl;
}   

void unit_Receipt_getFinalValue()
{
    cout<<"RECEIPT GET FINAL VALUE TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl("23/07/2000", 1.1, 2.1);
    assert(r->getFinalValue() == 2.1);

    const ReceiptImpl con("22/06/2000", 1.0, 2.3); 
    assert(con.getFinalValue() == 2.3);

    cout<<"RECEIPT GET FINAL VALUE TEST ENDED."<<endl;
}

void unit_Receipt_setFinalValue()
{
    cout<<"RECEIPT SET FINAL VALUE TEST STARTING..."<<endl;

    Receipt *r = new ReceiptImpl();
    r->setFinalValue(2.2);

    assert(r->getFinalValue() == 2.2);

    ReceiptImpl over("22/07/2000", 3.2, 0);
    over.setFinalValue(4.5);
    
    assert(over.getFinalValue() == 4.5);

    cout<<"RECEIPT SET FINAL VALUE TEST ENDED..."<<endl;
}   

void run_unit_tests_Receipt()
{
    unit_Receipt_constructor();
    unit_Receipt_destructor();
    unit_Receipt_getDate();
    unit_Receipt_setDate();
    unit_Receipt_getInitialValue();
    unit_Receipt_setInitialValue();
    unit_Receipt_getFinalValue();
    unit_Receipt_setFinalValue();
}
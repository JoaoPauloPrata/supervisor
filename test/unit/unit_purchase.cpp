#include "./unit_purchase.h"

using namespace std;

void unit_Purchase_constructor()
{
    cout<<"PURCHASE CONSTRUCTOR TEST STARTING..."<<endl;

    Purchase *p = new PurchaseImpl();
    PurchaseImpl *p2 = new PurchaseImpl();
    PurchaseImpl p3;
    Item* item = new ItemImpl();
    PurchaseImpl *p4 = new PurchaseImpl(item, 2, "23/08/20 23:59");

    assert(abs(p4->getQuantity() - 2) < 0.0001);
    assert(p4->getTime() == "23/08/20 23:59");

    cout<<"PURCHASE CONSTRUCTOR TEST ENDED."<<endl;
}

void unit_Purchase_destructor()
{
    cout<<"PURCHASE DESTRUCTOR TEST STARTING..."<<endl;

    Purchase *p = new PurchaseImpl();
    delete p;

    cout<<"PURCHASE DESTRUCTOR TEST ENDED."<<endl;
}

void unit_Purchase_getQuantity()
{
    cout<<"PURCHASE GET QUANTITY TEST STARTING..."<<endl;
    
    Item* item = new ItemImpl();
    Purchase *purchase = new PurchaseImpl(item, 3, "23/08/20 23:59");        
    assert(abs(purchase->getQuantity() - 3) < 0.0001);

    Item* item2 = new ItemImpl();
    const PurchaseImpl con(item2, 5, "23/08/20 23:58");
    assert(con.getQuantity() == 5);

    cout<<"PURCHASE GET QUANTITY TEST ENDED."<<endl;
}

void unit_Purchase_setQuantity()
{
    cout<<"PURCHASE SET QUANTITY TEST STARTING..."<<endl;

  
    Purchase *purchase = new PurchaseImpl();        
    purchase->setQuantity(10);
    assert(abs(purchase->getQuantity() - 10) < 0.0001);

    Item* item2 = new ItemImpl();
    PurchaseImpl over(item2, 3, "23/08/20 23:59");
    over.setQuantity(5);
    assert(abs(over.getQuantity() - 5) < 0.001);

    cout<<"PURCHASE SET QUANTITY TEST ENDED."<<endl;
}

void unit_Purchase_getTime()
{
    cout<<"PURCHASE GET TIME TEST STARTING..."<<endl;
    
    Item* item = new ItemImpl();
    Purchase *purchase = new PurchaseImpl(item, 3, "23/08/20 23:59");        
    assert(purchase->getTime() == "23/08/20 23:59" );

    Item* item2 = new ItemImpl();
    const PurchaseImpl con(item2, 5, "23/08/20 23:58");
    assert(con.getTime() == "23/08/20 23:58");

    cout<<"PURCHASE GET TIME TEST ENDED."<<endl;
}

void unit_Purchase_setTime()
{
    cout<<"PURCHASE SET TIME TEST STARTING..."<<endl;

  
    Purchase *purchase = new PurchaseImpl();        
    purchase->setTime("23/08/20 23:59");
    assert(purchase->getTime() == "23/08/20 23:59" );

    Item* item2 = new ItemImpl();
    PurchaseImpl over(item2, 3, "23/08/20 23:59");
    over.setTime("23/08/20 23:58");
    assert(over.getTime()=="23/08/20 23:58");

    cout<<"PURCHASE SET TIME TEST ENDED."<<endl;
}

void unit_Purchase_getItem()
{
    cout<<"PURCHASE GET ITEM TEST STARTING..."<<endl;
    
    Item* item = new ItemImpl();
    Purchase *purchase = new PurchaseImpl(item, 3, "23/08/20 23:59");        
    assert(purchase->getItem() == item);

    Item* item2 = new ItemImpl();
    const PurchaseImpl con(item2, 5, "23/08/20 23:58");
    assert(con.getItem() == item2);

    cout<<"PURCHASE GET ITEM TEST ENDED."<<endl;
}

void unit_Purchase_setItem()
{
    cout<<"PURCHASE SET ITEM TEST STARTING..."<<endl;
        
    Item* item = new ItemImpl();
    Purchase *purchase = new PurchaseImpl();        
    purchase->setItem(item);
    assert(purchase->getItem() == item );

    Item* item2 = new ItemImpl();
    PurchaseImpl over(item2, 3, "23/08/20 23:59");
    over.setItem(item2);
    assert(over.getItem()==item2);

    cout<<"PURCHASE SET ITEM TEST ENDED."<<endl;
}


void run_unit_tests_Purchase()
{
    unit_Purchase_constructor();
    unit_Purchase_destructor();
    unit_Purchase_getQuantity();
    unit_Purchase_setQuantity();
    unit_Purchase_getTime();
    unit_Purchase_setTime();
    // unit_Purchase_getItem();
    // unit_Purchase_setItem();
}
#include "./unit_item.h"

using namespace std;

void unit_Item_constructor()
{
    cout<< "ITEM CONSTRUCTOR TEST STARTING..."<<endl;
    Item* item = new ItemImpl();
    ItemImpl *item2 = new ItemImpl();
    ItemImpl item3;

    Item *item4 = new ItemImpl("10", "feijao", 10.2);
    assert(item4->getId() == "10");
    assert(item4->getName() == "feijao");
    assert(abs(item4->getPrice() - 10.2) < 0.0001);

    cout <<"ITEM CONSTRUCTOR TEST ENDED."<<endl;
}
void unit_Item_destructor()
{
    cout<< "ITEM DESTRUCTOR TEST STARTING..."<<endl;
    
    Item *item = new ItemImpl();
    delete item;
    cout <<"ITEM DESTRUCTOR TEST ENDED."<<endl;
}

 void unit_Item_getId()
 {
    cout<< "ITEM GET ID TEST STARTING..."<<endl;

    Item* item = new ItemImpl("10", "arroz", 20.2);
    assert(item->getId() == "10");

    const ItemImpl con("11", "feijao", 10.2);
    assert(con.getId() == "11");

    cout<< "ITEM GET ID TEST ENDED."<<endl;
 }

void unit_Item_setId()
{
    cout<< "ITEM SET ID TEST STARTING..."<<endl;

    Item* item = new ItemImpl();
    item->setId("10");
    assert(item->getId() == "10");

    ItemImpl over("11", "feijao", 10.2);
    over.setId("23");
    assert(over.getId() == "23");

    cout<< "ITEM SET ID TEST ENDED."<<endl;
}

 void unit_Item_getName()
 {
    cout<< "ITEM GET NAME TEST STARTING..."<<endl;

    Item* item = new ItemImpl("10", "arroz", 20.2);
    assert(item->getName() == "arroz");

    const ItemImpl con("11", "feijao", 10.2);
    assert(con.getName() == "feijao");

    cout<< "ITEM GET ID TEST ENDED."<<endl;
 }

void unit_Item_setName()
{
    cout<< "ITEM SET NAME TEST STARTING..."<<endl;

    Item* item = new ItemImpl();
    item->setName("feijao");
    assert(item->getName() == "feijao");

    ItemImpl over("11", "arroz", 10.2);
    over.setName("maionese");
    assert(over.getName() == "maionese");


    cout<< "ITEM SET NAME TEST ENDED."<<endl;
}

 void unit_Item_getPrice()
 {
    cout<< "ITEM GET PRICE TEST STARTING..."<<endl;

    Item* item = new ItemImpl("10", "arroz", 20.2);
    assert(abs(item->getPrice() - 20.2) < 0.0001);

    const ItemImpl con("11", "feijao", 10.2);
    assert(abs(con.getPrice() - 10.2) < 0.0001);

    cout<< "ITEM GET PRICE TEST ENDED."<<endl;
 }

void unit_Item_setPrice()
{
    cout<< "ITEM SET PRICE TEST STARTING..."<<endl;

    Item* item = new ItemImpl();
    item->setPrice(10.5);
    assert(item->getPrice() == 10.5);

    ItemImpl over("11", "arroz", 10.2);
    over.setPrice(11.5);
    assert(abs(over.getPrice() - 11.5) < 0.0001);


    cout<< "ITEM SET PRICE TEST ENDED."<<endl;
}

void run_unit_tests_Item()
{
    unit_Item_constructor();
    unit_Item_destructor();
    unit_Item_getId();
    unit_Item_setId();
    unit_Item_getName();
    unit_Item_setName();
    unit_Item_getPrice();
    unit_Item_setPrice();
}
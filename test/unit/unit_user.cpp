#include "unit_user.h"

using namespace std;

void unit_User_constructor() {
    cout << "USER CONSTRUCTOR TEST STARTING..." << endl;

    // TEST 1 - DEFAULT CONSTRUCTOR
    User *u1 = new UserImpl();
    UserImpl *u2 = new UserImpl();
    UserImpl u3;

    // TEST 2 - COMPLETE CONSTRUCTOR
    User *user = new UserImpl("user", "pass");

    assert(user->getUsername() == "user");
    assert(user->getPassword() == "pass");
    assert(fabs(user->getId() - 4) < 0.0001);

    // TEST 3 - COPY CONSTRUCTOR
    // Copy constructor is private

    cout << "USER CONSTRUCTOR TEST ENDED." << endl;
}
void unit_User_destructor() {
    cout << "USER DESTRUCTOR TEST STARTING..." << endl;

    // TEST 1 - DESTRUCTOR
    User *user = new UserImpl();

    delete user;

    cout << "USER DESTRUCTOR TEST ENDED." << endl;
}
void unit_User_getUsername() {
    cout << "USER GET USERNAME TEST STARTING..." << endl;

    // TEST 1 - DEFAULT USER GET USERNAME
    User *user = new UserImpl("us", "pa");

    assert(user->getUsername() == "us");

    // TEST 2 - CONST USER GET USERNAME
    const UserImpl con("const_user", "const_pass");

    assert(con.getUsername() == "const_user");

    cout << "USER GET USERNAME TEST ENDED." << endl;
}
void unit_User_setUsername() {
    cout << "USER SET USERNAME TEST STARTING..." << endl;

    // TEST 1 - DEFAULT USER SET VALUE
    User *set = new UserImpl();
    set->setUsername("new_username");

    assert(set->getUsername() == "new_username");

    // TEST 2 - OVERWRITE VALUE
    UserImpl over("user", "pass");
    over.setUsername("over");

    assert(over.getUsername() == "over");

    cout << "USER SET USERNAME TEST ENDED." << endl;
}
void unit_User_getPassword() {
    cout << "USER GET PASSWORD TEST STARTING..." << endl;

    // TEST 1 - DEFAULT USER GET PASSWORD
    User *user = new UserImpl("us", "pa");

    assert(user->getPassword() == "pa");

    // TEST 2 - CONST USER GET PASSWORD
    const UserImpl con("const_user", "const_pass");

    assert(con.getPassword() == "const_pass");

    cout << "USER GET PASSWORD TEST ENDED." << endl;
}
void unit_User_setPassword() {
    cout << "USER SET PASSWORD TEST STARTING..." << endl;

    // TEST 1 - DEFAULT USER SET VALUE
    User *set = new UserImpl();
    set->setPassword("new_password");

    assert(set->getPassword() == "new_password");

    // TEST 2 - OVERWRITE VALUE
    UserImpl over("user", "pass");
    over.setPassword("over");

    assert(over.getPassword() == "over");

    cout << "USER SET PASSWORD TEST ENDED." << endl;
}

void run_unit_tests_User() {
    unit_User_constructor();
    unit_User_destructor();
    unit_User_getUsername();
    unit_User_setUsername();
    unit_User_getPassword();
    unit_User_setPassword();
}
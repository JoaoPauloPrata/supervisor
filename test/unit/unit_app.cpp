#include "./unit_app.h"

using namespace std;

void unit_App_getInstance()
{
  cout << "APP GET INSTANCE TEST STARTING..." << endl;

  // TEST 1 - SAME INSTANCE
  App &a = App::getInstance();
  App &b = App::getInstance();

  assert(&a == &b);

  cout << "APP GET INSTANCE TEST ENDED." << endl;
};

void unit_App_addUser()
{
  cout << "APP ADD USER TEST STARTING..." << endl;

  // TEST 1 - ADDING USER
  App &a = App::getInstance();

  User *user = new UserImpl("use", "pas");
  a.addUser(user);

  cout << "APP ADD USER TEST ENDED." << endl;
};

void unit_App_login()
{
  cout << "APP LOGIN TEST STARTING..." << endl;

  // TEST 1 - LOGIN
  App &a = App::getInstance();
  int login = a.login("use", "pas");

  // TEST 2 - EMPTY LOGIN
  int empty = a.login("", "");

  assert(fabs(empty - 0) < 0.0001);

  cout << "APP LOGIN TEST ENDED." << endl;
};

void run_unit_tests_App()
{
  unit_App_getInstance();
  unit_App_addUser();
  unit_App_login();
};
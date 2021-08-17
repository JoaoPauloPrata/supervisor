#ifndef MAIN_UNIT_TESTS_H
#define MAIN_UNIT_TESTS_H

#include "./unit_app.h"
#include "./unit_user.h"
#include "./unit_receipt.h"
int main()
{
  run_unit_tests_Receipt();
  run_unit_tests_User();
  run_unit_tests_App();
};

#endif
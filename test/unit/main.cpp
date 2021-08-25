#ifndef MAIN_UNIT_TESTS_H
#define MAIN_UNIT_TESTS_H

#include "./unit_app.h"
#include "./unit_user.h"
#include "./unit_receipt.h"
#include "./unit_item.h"
#include "./unit_purchase.h"

int main()
{
  run_unit_tests_Purchase();
  run_unit_tests_Receipt();
  run_unit_tests_Item();
  run_unit_tests_User();
  run_unit_tests_App();
};

#endif
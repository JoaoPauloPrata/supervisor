/**
 * @file unit_purchase.h
 */

#ifndef UNIT_PURCHASE_H
#define UNIT_PURCHASE_H

#include <iostream>
#include <assert.h>

#include "../../src/purchaseimpl.h"
#include "../../src/itemimpl.h"
void run_unit_tests_Purchase();

void unit_Purchase_constructor();
void unit_Purchase_destructor();
void unit_Purchase_getQuantity();
void unit_Purchase_setQuantity();
void unit_Purchase_getTime();
void unit_Purchase_setTime();
void unit_Purchase_getItem();
void unit_Purchase_setItem();

#endif
/**
 * @file unit_receipt.h
 */
#ifndef UNIT_RECEIPT_H
#define UNIT_RECEIPT_H

#include <iostream>
#include <assert.h>

#include "../../src/receiptimpl.h"

void run_unit_tests_Receipt();

void unit_Receipt_constructor();
void unit_Receipt_destructor();
void unit_Receipt_getDate();
void unit_Receipt_setDate();
void unit_Receipt_getInitialValue();
void unit_Receipt_setInitialValue();
void unit_Receipt_getFinalValue();
void unit_Receipt_setFinalValue();

#endif
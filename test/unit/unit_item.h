/**
 * @file unit_item.h
 */
#ifndef UNIT_ITEM_H
#define UNIT_ITEM_H

#include <iostream>
#include <assert.h>

#include "../../src/itemimpl.h"

void run_unit_tests_Item();

void unit_Item_constructor();
void unit_Item_destructor();
void unit_Item_getId();
void unit_Item_SetId();
void unit_Item_getName();
void unit_Item_setName();
void unit_Item_getPrice();
void unit_Item_setPrice();

#endif
/**
 * @file unit_user.h
 */
#ifndef UNIT_USER_H
#define UNIT_USER_H

#include <iostream>
#include <assert.h>
#include <math.h>

#include "../../src/userimpl.h"

void run_unit_tests_User();

void unit_User_constructor();
void unit_User_destructor();
void unit_User_getUsername();
void unit_User_setUsername();
void unit_User_getPassword();
void unit_User_setPassword();

#endif
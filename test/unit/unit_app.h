/**
 * @file unit_app.h
 */
#ifndef UNIT_APP_H
#define UNIT_APP_H

#include <iostream>
#include <assert.h>
#include <math.h>

#include "../../src/lib/app.h"
#include "../../src/userimpl.h"

void run_unit_tests_App();

void unit_App_getInstance();
void unit_App_addUser();
void unit_App_login();

#endif
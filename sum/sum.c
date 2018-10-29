/*
 * =====================================================================================
 *
 *       Filename:  sum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/26/2018 03:29:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  dingk (dkosystem@gmail.com)
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include "sum.h"

int sum(const int a, const int b) {

    int c = 0;
    c = a + b;

    return c;
}

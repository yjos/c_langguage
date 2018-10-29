/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/26/2018 03:20:56 PM
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


int main(int argc, char **argv) {
    int i;
    
   if (argc != 3) {
        printf("need two arg: a b\n");

        return -1;
    }

    i = sum(atoi(argv[1]), atoi(argv[2]));

    printf("%d + %d =  %d\n", atoi(argv[1]), atoi(argv[2]), i);

    return 0;
}


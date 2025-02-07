#pragma warning(disable : 4996)
#include "remake.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>

char* trim_left(char* sr);
char* trim_right(char* sr);
char* trim(char* sr);

char* trim_left(char* sr){
    while (*sr) {
        if (isspace(*sr)) {
            sr++;
        }
        else {
            break;
        }
    }
    return sr;
}

char* trim_right(char* sr) {
    int len = (int)strlen(sr) - 1;
    while (len >= 0) {
        if (isspace(*(sr + len))) {
            len--;
        }
        else {
            break;
        }
    }
    *(sr + ++len) = '\0';
    return sr;
}

char* trim(char* sr) {
    return trim_left(trim_right(sr));
}
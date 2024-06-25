//non-linked list
#include <stdio.h>

void revStr (char *s, int len) {
    char temp;
    if (len < 2){
        return;
    }
    len = len -1; 
    temp = *str;
    *str = str[len];
    revStr(s+1, len -1);
}
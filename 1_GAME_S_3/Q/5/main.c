#include <stdio.h>
#include <stdlib.h>
int fo(void);
int main(){
 fo();
 fo();
 fo();
 fo();
 printf("%d",fo());}
    int fo(){
     static int x = 3;
     return ++x;}

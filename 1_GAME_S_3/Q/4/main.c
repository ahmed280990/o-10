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
     int x = 2;
     return ++x;}

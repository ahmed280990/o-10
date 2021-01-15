#include <stdio.h>
#include <stdlib.h>
signed char fun(void);
int main(){
	printf("%d",fun());
	return 0;}
signed char fun(){
	return 255;}

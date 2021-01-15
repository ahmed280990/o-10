#include <stdio.h>
#include <stdlib.h>
int fun(void);
int a = 20;
int main(){
	int a = 10;
	fun();
	printf("%d",a);
	return 0;}
int fun(){
	int a = 12;
	return a;}

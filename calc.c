#include<stdio.h>

int add(int, int);

int main(){
	int a, b;
	printf("enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	printf("add result:%d", add(a, b));
	return 0;
}

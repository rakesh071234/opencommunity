#include<stdio.h>

int add(int, int);
int sub(int, int);

int main(){
	int a, b;
	printf("enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	printf("add result:%d", add(a, b));
	printf("\nsub result:%d", sub(a, b));
	return 0;
}

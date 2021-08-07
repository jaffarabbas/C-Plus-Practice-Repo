#include<stdio.h>


void func();

int main(){
	printf("hello");
	func();
	return 0;
}

void func(){
	int a;
	scanf("%d",&a);
	printf("num %d",a);
}

#include<stdio.h>

int fact(int n);

int main(){
	int a=fact(5);
	printf("%d",a);
	
	return 0;
}

int fact(int n){
	if(n<=1) return 1;
	else return n*fact(n-1);
}

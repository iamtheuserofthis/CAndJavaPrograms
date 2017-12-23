#include<stdio.h>
int sum_rec(int);

int main(){
	int a;			
	a = sum_rec(6);
	printf("%d",a);
	return 0;
}

int sum_rec(int num){
	if(num==0) return 0;
	else return (num + sum_rec(num-1));
}

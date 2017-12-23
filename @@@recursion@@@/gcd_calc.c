#include<stdio.h>
int gcd_calc(int a,int b);

int main(){
	printf("%d",gcd_calc(12,50));
	return 0;
}

int gcd_calc(int a, int b){
	int c;
	if(a%b == 0) return b;
	else{
		c = a;
		a = b;
		b = c;
		a = a%b;
		gcd_calc(a,b);
	}
}

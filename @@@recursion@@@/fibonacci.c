#include<stdio.h>
int fibo(int);
int main(){
	int n,a;
	for(a=0;a<9;a++) // for printing all terms upto the value of n
	printf("%d\t",fibo(a));
	return 0;
}

//this function just gives the nth term of the fibonacci series using recursive algorithm, but to get all the terms 
//upto the nth term it should be put in a loop where all values upto n can be found
int fibo(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return (fibo(n-1)+fibo(n-2));
}

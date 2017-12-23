#include<stdio.h>
#define SIZE 10

int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};

int bin_search(int a[SIZE],int p,int r,int num);

int main(){
	int x = bin_search(a,0,9,8);
	printf("\nIndex of the searched element :%d",x);
	return 0;
}

int bin_search(int a[SIZE],int p,int r,int num){
	int q = (p+r)/2;
	if(p>r){
		printf("The element does not exits in the array");
		return 0;
	}
	else if(a[q]==num) return q;
	else if(a[q] > num) return (bin_search(a,p,q-1,num));
	else if(a[q] < num) return (bin_search(a,q+1,r,num));
	
	}
	


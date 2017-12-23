#include<stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE] = {19,3,8,5,89,34,9,54,35,6};
}

int merge(int arr[SIZE],p,q,r){
	int n1 = q-p+1;
	int n2 = r-q;
	int k;
	
	int left[n1],right[n2];
	
	int i,j;
	
	for(i=0;i<n1;i++){
		left[i] = arr[p+i];//
	}
	for(j=0;j<n2;j++){
		right[j] = a[q+j+1];
	}
	left[n1] = 99999;
	right[n2] = 99999;
	
	i=1,j=1;
	for(k=p ; k<SIZE ; k++){
		
	}
}

#include<stdio.h>
#define SIZE 8

int a[SIZE]={2,8,7,1,3,5,6,4};

void quick_s(int a[SIZE],int p,int r);
int partition(int a[SIZE],int p,int r);

int main(){
	int i;
	quick_s(a,0,7);
	printf("\nSorted\n");
	for(i=0;i<SIZE;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

void quick_s(int a[SIZE],int p,int r){
	if(p<r){
		int q =partition(a,p,r);
		quick_s(a,p,q-1);
		quick_s(a,q+1,r);
	}
}

int partition(int a[SIZE],int p,int r){
	int x = a[r];
	int i = p-1;
	int j =p,temp;
	for(j=p;j<r;j++){
		if(a[j]<=x){
			i = i+1;
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	temp = a[i+1];
	a[i+1] = a[r];
	a[r] = temp;
	printf("\n%d",i+1);
	return i+1;
}


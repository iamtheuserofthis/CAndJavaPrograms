#include<stdio.h>
#define SIZE 10

int arr[SIZE] = {2,5,7,6,8,3,4,9,1,0};

void sel_sort();

int main(){
	int i;
	sel_sort();
	for(i=0;i<SIZE;i++){
		printf("\n%d",arr[i]);
	}
	return 0;
}

void sel_sort(){
	
int  sorted = -1,i,temp;
while(sorted<SIZE){
	for(i=(sorted+1);i<SIZE;i++){
	 if(arr[i]<arr[sorted+1]){
	    temp = arr[i];
	    arr[i] = arr[sorted+1];
	    arr[sorted+1] = temp;
	 }
}
	 	sorted++;
	
}
}

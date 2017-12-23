#include<stdio.h>
#define SIZE 10
int read_arr(int n,int *);


int main(){
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	read_arr(0,a);
	return 0;
}

int read_arr(int read_index,int *arr){
	if(read_index == SIZE){
	
		return 0;
	}
	else{
		printf("%d\t",arr[read_index]);
		read_arr(read_index+1,arr);
	}
	
}

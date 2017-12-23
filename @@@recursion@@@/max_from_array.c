#include<stdio.h>
#define SIZE 10
int find_max(int*,int index,int curr_max);

int main(){
	int arr[SIZE] = {10,20,6,7,8,90,11,12,13,80};
	printf("%d",find_max(arr,0,0));
}

int find_max(int *arr,int index,int curr_max){
	if(index == SIZE){
		return curr_max;
	}else{
		if(curr_max < arr[index]){
			curr_max = arr[index];
		}
		index++;
		find_max(arr,index,curr_max);
	}
}

#include<stdio.h>
int lin_search(int *arr,int size,int num);

int main(){
	int arr[10] = {3,4,5,12,2,33,41,25,36,7};
	int search = 9;
	int index = lin_search(arr,10,41);
	printf("%d",index);
	return 0;
}

int lin_search(int *arr,int size,int num){
	int index = 0;
	
	while(index<size){
		if(arr[index]==num)
		break;
		else
		index++;
	}
	
	if(index >= size){
		printf("\nElement does not exist in the array");
	}
	return index;
}


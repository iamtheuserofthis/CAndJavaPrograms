#include<stdio.h>
#define SIZE 8

int arr[SIZE] = {9,8,7,6,5,4,3,2};
int main(){
	
int i,j,temp;
printf("%d",SIZE);
for(i=0;i<SIZE;i++){
	for(j=0;j<(SIZE-i);j++){
		if(arr[j]>arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

for(i=0;i<SIZE;i++){
	printf("\n%d",arr[i]);
}
return 0;
}

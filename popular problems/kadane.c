//assumption that there always exists a positive element in the set of numbers inserted in an array
#include<stdio.h>
#include<limits.h>
#define SIZE 16
int kadane_algo(int *arr);
int start_index=-1;
int end_index=-1;


int main(){
	int arr[SIZE] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	int a = kadane_algo(arr);
	printf("%d",a);
	printf("\nstart index =%d\t,end_index=%d",start_index,end_index);
	return 0;
	
}

int kadane_algo(int arr[SIZE]){
	int i,sum=INT_MIN,real_max_sum = INT_MIN;
	
	for(i=0;i<SIZE;i++){
	sum = sum + arr[i];
	if(sum<=0){
		sum = 0;
		start_index =i+1;
	}else{
		if(sum>=real_max_sum){
			real_max_sum = sum;
			end_index =i;
		}
	}
	}
	return real_max_sum;
}

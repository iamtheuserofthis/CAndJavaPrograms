#include<stdio.h>
#include<limits.h>
#define SIZE 16

int a[SIZE] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
struct values{
	int low;
	int high;
	int sum;
};

struct values find_max_crossing(int low,int high,int middle);
struct values max_subarray(struct values);

int main(){
	int i;
	struct values val,result;
	val.low = 0;
	val.high =SIZE-1;
	result = max_subarray(val);

	printf("%d,%d,%d",result.low,result.high,result.sum);
	return 0;
}

struct values max_subarray(struct values val){
	int middle,temp;
	struct values left,right,cross;
	if(val.high == val.low){
		val.sum = a[val.low];
		return val;
	}
	else{
		middle = (val.high+val.low)/2;
		//------------------------------------------------------
		temp = val.high;
		val.high = middle;
		left = max_subarray(val);
		//------------------------------------------------------
		val.high = temp;
		temp = val.low;
		val.low = middle+1;
		right = max_subarray(val);
		//------------------------------------------------------
		val.low = temp;
	//	printf("\nlow = %d\tmiddle=%d\thigh=%d",val.low,middle,val.high);
		cross = find_max_crossing(val.low,middle,val.high);
		
		if(left.sum>=right.sum && left.sum >=cross.sum) return left;
		else if(right.sum>=left.sum && right.sum>=cross.sum) return right;
		else return cross;
		
	}
}

struct values find_max_crossing(int low,int middle,int high){
	//printf("\n%d,%d,%d\n",low,middle,high);
	int max_left,sum,max_right,left_index,right_index,left_sum=INT_MIN,right_sum=INT_MIN;
	int i,j;
	for(i=middle;i>=low;i--){
		sum = a[i] + sum;
		if(sum>left_sum){
			left_sum = sum;
			left_index = i;
		}
	//	printf("\nleft = %d",left_sum);
	}
	
	sum = 0;
	
	for(j=(middle+1);j<=high;j++){
		sum = a[j] + sum;
		if(sum>right_sum){
			right_sum = sum;
			right_index = j;
		}
	//	printf("\nright=%d",right_sum);
	}
	
	sum = left_sum + right_sum;
//	printf("\nSum: %d",sum);
	struct values val;
	val.low = left_index;
	val.high= right_index;
	val.sum= sum;
	
	return val;	
}


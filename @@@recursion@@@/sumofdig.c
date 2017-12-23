#include<stdio.h>
int sum_of_dig(long num,int index);

int main(){
	long a = 12300123;
	printf("%d",sum_of_dig(a,0));
	
}

int sum_of_dig(long num,int sum){
	if(num == 0) return sum;
	else{
		sum = sum + num%10;
 		num = num/10;
 		sum_of_dig(num,sum);
	}
}

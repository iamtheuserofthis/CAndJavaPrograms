#include<stdio.h>

int count_digit(long num,int index);

int main(){
	
	printf("%d",count_digit(303030,0));
	

}

int count_digit(long num,int index){
	if(num == 0) return index;
    else{
    	num = num /10;
    	index++;
    	count_digit(num,index);
	}
}

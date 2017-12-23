#include<stdio.h>
int print_n_rec(int,int);

int main(){
	print_n_rec(1,50);
	return 0;
}

int print_n_rec(int low_limit,int upper_limit){
	if(low_limit == upper_limit){
		printf("%d" ,low_limit);
		exit(1);
	}
while(low_limit < upper_limit){
	printf("%d\t",low_limit);
	low_limit++;
	print_n_rec(low_limit,upper_limit);
}
}

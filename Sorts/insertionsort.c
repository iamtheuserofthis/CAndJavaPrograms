//cormen's book
// insertion sort

#include<stdio.h>
//#include<curses.h>

int main()
{
	int a[6] = {7,2,4,5,1,3};
	int arraysize = 6;
	
	int i,j,k,key;

for(j=1;j<=arraysize;j++){
	
	key = a[j];
	i = j-1;
	
	while(i>=0 && a[i]>key){
		
			a[i+1]=a[i];
			i--;
			
	}
	a[i+1]=key;
}



for(k=0;k<=5;k++){
	printf(" \n %d ",a[k]);
}

return 0;
 } 

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[8]={9,2,8,3,7,4,6,5};
	int key;
	int i,j;
	int temp;
	int size=8;
	for(i=0;i<7;i++){
	
	key=a[i];
	j = i +1;
	while(j<size && key>a[j]){
		
		
			
			temp = key;
			key = a[j];
			a[j]=temp;

		
		j++;
		
	}
	a[i]=key;

	}
	
	
	//--------------------------------checking----------------------------------
	for(i=0;i<8;i++){
		printf("\n %d",a[i]);
	}
	
	//----------------------------------------------------------------------------
	
	
	
	return 0;
}

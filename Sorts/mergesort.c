#include<stdio.h>
#include<conio.h>
	
int A[12]={1,3,5,7,9,10,11,1,2,4,6,7};
int size=12;

int main(){
	int i;
	
	sort_1(A,0,size-1);
	
	for(i=0;i<size;i++){
		
	printf("%d, ",A[i]);		
	}
return 0;
}



int sort_1(int A[],int p,int r){
	int i,q;


	if(p<r){
	q = (p+r)/2;
	
	sort_1(A,p,q);
	sort_1(A,(q+1),r);
	sort(A,p,q,r);
}
return 0;
}
	
	
int sort(int A[],int p,int q,int r){	
int i,j,k;
int n1 = q-p+1;
	int n2 = r-q;
	int L[n1+1];
	int R[n2+1];
	
	printf("\np=%d",p);
	printf("\nq=%d",q);
	printf("\nr=%d",r);
	for(i=0;i<n1;i++){
	L[i]=A[i+p];
//	printf("\n%d",L[i]);
    }
    
    printf("\n\n");
    
    for(j=0;j<n2;j++){
    	R[j]=A[q+j+1];
//    printf("\n%d",R[j]);	
	}
	 L[n1]=9999;
    R[n2]=9999;
    
	
	i=0;
	j=0;
	for(k=p;k<=r;k++){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}else{
			A[k]=R[j];
			j++;
		}
	}
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
 

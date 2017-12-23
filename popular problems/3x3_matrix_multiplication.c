#include<stdio.h>
#include<conio.h>
#define SIZE 3
void sumofmatrix(int a[SIZE][SIZE],int b[SIZE][SIZE]);
void print2dmatrix(int a[SIZE][SIZE]);
void print_diagonal(int a[SIZE][SIZE]);
void print_lower_triangle(int a[SIZE][SIZE]);
void print_upper_triangle(int a[SIZE][SIZE]);
void mul_matrix(int a[SIZE][SIZE],int b[SIZE][SIZE]);
int main(){
	int i,j;
	int a[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
    int b[SIZE][SIZE] = {10,11,12,13,14,15,16,17,18};
  
     printf("matrix a \n");
    print2dmatrix(a);
     printf("matrix b \n");
    print2dmatrix(b);
    printf("\nProduct-\n");
    mul_matrix(a,b);	
}

void sumofmatrix(int a[SIZE][SIZE],int b[SIZE][SIZE]){ 
int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			a[i][j] = a[i][j]+b[i][j];
		}
		}
		
		print2dmatrix(a);		
}

void print_diagonal(int a[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++)
		{
			if(i==j)
			printf("%d\n",a[i][j]);
		}
	}
}
void print2dmatrix(int a[SIZE][SIZE]){
int i,j;
	 for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
		   printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}
void print_lower_triangle(int a[SIZE][SIZE])
{
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++)
		{
			if(i>=j)
			printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n\n");
	}
}

void print_upper_triangle(int a[SIZE][SIZE])
{
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++)
		{
			if(j>=i)
			printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n\n");
	}
}

void mul_matrix(int a[SIZE][SIZE],int b[SIZE][SIZE]){
	int i,j,k,sum;
	int c[SIZE][SIZE];
	
	for(k=0;k<SIZE;k++){
		for(i=0;i<SIZE;i++){
			c[k][i]=0;
			sum =0;
			for(j=0;j<SIZE;j++){
				sum += a[k][j]*b[j][i];
				c[k][i]=sum;
			}
		}
	}
	print2dmatrix(c);
}

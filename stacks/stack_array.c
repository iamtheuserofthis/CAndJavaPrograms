#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int top = -1;
int stack[SIZE];

void push(int a);
void pop();

int main(){
	int choice,num;
	while(1){
		printf("\n1.push 2.pop");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter the number to be entered");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
		}
		
	}
	
}

void push(int a){
	if(top == (SIZE-1))
	{
		printf("\nStack overflow");
	}else{
		top = top +1;
		stack[top] = a;
	}
}

void pop(){
	if(top == -1){
		printf("Stack underflow");
		return;
	}else{
	 printf("%d",stack[top]);
     top = top-1;		
	}
}



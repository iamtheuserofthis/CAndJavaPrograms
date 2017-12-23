#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void push(int data);
void pop();
void trav_stack();

struct node *top =NULL;

int main(){
	int choice;
	int var;
	while(1){
		printf("\nSelect one :\n1.Push\t2.Pop");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter the data to be pushed");
				scanf("%d",&var);
				push(var);
				break;
			case 2:
				pop();
				break;
		}
	}	
}

void trav_stack(){
	struct node *temp = NULL;
	temp = top;
	while(temp != NULL){
		printf("%d",temp->data);
		temp = temp->next;
	}
}

void push(int data){
	struct node *stack_element = (struct node *)malloc(sizeof(struct node));
	stack_element->data = data;
	stack_element->next = top;
	top = stack_element;
}

void pop(){
	if(top == NULL){
		printf("Stack Empty");
		return;
	}
	printf("\n%d",top->data);
	struct node *temp = top;
	top = top->next;
	free(temp);
}



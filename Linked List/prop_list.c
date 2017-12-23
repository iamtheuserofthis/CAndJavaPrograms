#include<stdio.h>
#include<stdlib.h>

void add_element();
void del_element();
int calc_size();
void init_head(int data);

//functions inside add function
void add_beg(int data);
void add_end(int data);
void add_any(int index,int data);

//function inside delete function
void del_beg();
void del_end();
void del_pos(int index);

//function to traverse
void traverse();

struct list{
	int data;
	struct list *next;
}*head;
//init head at value 0;

int main(){
	int c1,size,data;
	printf("Enter the data value of head");
	scanf("%d",&data);
	init_head(data);
	while(1){
	printf("\nSelect one :\n1.Add a node\n2.Delete a node\n3.Traverse a node\n4.EXIT\n");
	scanf("%d",&c1);
	switch(c1){
		case 1:
			add_element();
			break;
		case 2:
			del_element();
			break;
		case 3:
	    	traverse();
			break;
		case 4:
			exit(0);
		case 5:
			size = calc_size();
			break;
		}
	}
	
}

void add_element(){

	int a,data,index;
	printf("\nEnter position for addition of the node\n1.begining\n2.end\n3.selected position\n4.traverse\n5.return");
	scanf("%d",&a);

if(a==1||a==2||a==3){
	
	printf("\nEnter data for the node");
	scanf("%d",&data);
	
	if(a==3){
		printf("\nEnter index");
		scanf("%d",&index);
	}
}

switch(a){
	case 1:
	add_beg(data);
	break;
	
	case 2:
	add_end(data);
	break;
	
	case 3:
	add_any(index,data);
	break;
	
	case 4: 
	traverse();
	break;
	
	case 5:
	return;
	
	

}
	
}

//------------------------------------------------head value init code-----------------------------------
void init_head(int data){
	head = (struct list *)malloc(sizeof(struct list));
	head->data =data;
	head->next = NULL;
}


//-------------------------------------------------ADD NODE SECTION---------------------------------------
void add_beg(data){
	struct list *new_node = NULL;
	new_node = (struct list *)malloc(sizeof(struct list));
	new_node->data = data;
	new_node->next = head;
	head = new_node;	
	
}

//--------------------------------------------------------------------------------------------------------
void add_end(data){
	
	struct list *new_node = NULL;
	new_node = (struct list *)malloc(sizeof(struct list));
	new_node->data = data;
	new_node->next = NULL;
	
	if(head->next == NULL){
		head->next = new_node; 
	}else{
		struct list *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

//--------------------------------------------------------------------------------------------------------
void add_any(int index,int data){
	int size = calc_size() +1;
	
	if(index>size){
		printf("\n invalid size");
	}else{
	int count=1; //when the index of the list =1 ,if index == 0 then put count =0;
	struct list *new_one,*temp,*pre_temp;
	new_one = (struct list *)malloc(sizeof(struct list));
	new_one->data = data;
	temp = head;
	while(count<index){
		pre_temp = temp;
		temp = temp->next;
		count = count+1;
	}
	printf("\nThe node will be added between \n%d and %d",pre_temp->data,temp->data);
	new_one->next = temp;
	pre_temp->next = new_one;
	
	printf("\n");
	traverse();
}
}

//--------------------------------------------------------------------------------------------------------
void del_element(){
	int del_type,index;
	printf("1.Delete first node\n2.Delete last node\n3.Delete index node\n4.Traverse\n5.Return");
	printf("Select the deletion position");
	scanf("%d",&del_type);	
	switch(del_type){
		case 1:
			del_beg();
			break;
		case 2:
			del_end();
			break;
		case 3:
			printf("\nEnter the index of deletion");
			scanf("%d",&index);
			del_pos(index);
			break;
		case 4:
			traverse();
			break;
		case 5:
			return;
		
	}
}

//-------------------------------------------deletion functions here-------------------------------------

void del_beg(){
	struct list *temp;
	temp = head;
	head = head->next;
	free(temp);
	traverse();
}

void del_end(){
	struct list *temp,*prev_temp;
	temp = head;
	if(temp->next==NULL){
		head =NULL;
		free(temp);
	}else{
	
	while(temp->next!=NULL){
		prev_temp = temp;
		temp= temp->next;
	}
	printf("%d \t%d",temp->data,prev_temp->data);
	prev_temp->next = NULL;
	free(temp);
}
}

void del_pos(int index){
	if(index>calc_size()){
		printf("\ninvalid deletion");
		return;
	}
	int count=1;
	struct list *temp,*prev_temp;
	temp = head;
	if(index==1){
		head = NULL;
		free(temp);
	}else{
		while(count<index){
			prev_temp = temp;
			temp = temp->next;
			count++;
		}
		prev_temp->next = temp->next;
		free(temp);
		traverse();
	}
}


void traverse(){
	struct list *temp;
	temp = head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp = temp->next ;
	}
}

int calc_size(){
	
	int count = 0;
	struct list *temp =NULL;
	temp =head;
	while(temp != NULL){
		
		temp = temp->next;
		count++;
		
	}
	printf("\n size = %d",count);
	return count;
}

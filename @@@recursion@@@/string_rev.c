#include<stdio.h>
#include<string.h>
char* str_rev(char *str,char *rev_str,int size,int index);
int main(){

	char a[] = "abcdefg";
	char b[]="";
	int size = 0;
	while(a[size]!='\0'){
		size++;
	}

	printf("%s",str_rev(a,b,size,0));
}

char* str_rev(char *str,char *rev_str,int size,int index){
   	
	   if(index==size-1){
   		return rev_str;
	   }else{
	   rev_str[index] = str[(size-1)-index];
	   index = index +1;
	   str_rev(str,rev_str,size,index);
	   }
}

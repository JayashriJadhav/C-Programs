#include<stdio.h>

void Display(char *Brr)
{
	printf("name is %s\n",Brr);
}


int main()
{
	char Arr[10];
	
	printf("enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);   
	
	
	
	
	return 0;
}
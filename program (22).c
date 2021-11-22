
#include<stdio.h>     //header file inclusion

//function declarations
void Display();
int main()
{
	
	Display();   //function call
	
	
	
	
	
	
	
	
 return 0;
}

//function defination
void Display()
{
	int iNo=7521;
	int iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}	
}
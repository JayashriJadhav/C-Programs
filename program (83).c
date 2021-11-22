#include<stdio.h>

void Display(char *Brr)
{

    int i=o;
	

	
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;

}


int main()
{
	char Arr[10];

	printf("enter your name\n");
	scanf("%[^'\n']s",Arr);

	Display(Arr);




	return 0;
}
// accept number from user and display on screen that number of times number
//  (Dynamic implementation)
//input: 3
//output: 1 2 3
#include<stdio.h>

void Display(int ivalue)
{
	
  int i=0;

  for(i=1;i<=ivalue;i++)
   {
	printf("%d\n",ivalue);
   }

}

int main()
{
	int ino=0;
	printf("enter number");
	scanf("%d",&ino);

   Display(ino);    //function call


  return 0;
}



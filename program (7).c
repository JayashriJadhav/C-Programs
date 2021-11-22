// accept number from user and display marvellous on screen that number of times
//  (Dynamic implementation)

#include<stdio.h>

void Display(int ivalue)
{
	
  int i=0;

  for(i=1;i<=ivalue;i++)
   {
	printf("Marvellous\n");
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



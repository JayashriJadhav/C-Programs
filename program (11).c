//dynamic: reverse number

#include<stdio.h>

void Display(int ivalue)
{
	
  int i=0;

  for(i=ivalue;i>=1;i--)
   {
	printf("%d\n",i);
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

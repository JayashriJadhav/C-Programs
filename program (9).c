//input updater(accept negative value and update it)


#include<stdio.h>

void Display(int ivalue)
{

  int i=0;
  
  

  if(ivalue<0)        //input updater
  {
	  ivalue=-ivalue;
  }	  

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



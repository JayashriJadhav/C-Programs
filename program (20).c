//N/2 complexity

#include<stdio.h>

 void DisplayFactors(int ivalue)
 {
  
  int icnt=0;
  if(ivalue<0)
  {
	  ivalue=-ivalue;
  }	  
   
   for(icnt=1;icnt<=(ivalue/2);icnt++)   //n/2 complexity  O(N/2)
   {
	   if((ivalue%icnt)==0)
	   {
		   printf("%d\n",icnt);
	   }
   } 
  
 } 
  
  
  int main()
{
  int ino=0;

  printf("enter the number\n");
  scanf("%d",&ino);

  DisplayFactors(ino);
  
  
  return 0;
  
 
}
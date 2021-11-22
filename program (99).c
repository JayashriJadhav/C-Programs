//accept string and display count number of capital characters


#include<stdio.h>

void Count(char *str)
{
  int Ccount=0,SCount=0;
  
  while(*str!='\0')
  {
    if((*str>='A')&& (*str<='Z'))
    { 
      Ccount++;
    }
	
	else if((*str>='a')&& (*str<='z'))
    { 
      SCount++;
    }
    str++;
  }
   printf("small letters are:%d\n",SCount);
   printf("capital letters are:%d\n",Ccount);
   

}
int main()
{
	char Arr[25];
	
	
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);
	
	
    return 0;
}
		
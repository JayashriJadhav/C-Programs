//accept string and display count number of capital characters


#include<stdio.h>

int CountCapital(char *str)
{
  int iCnt=0;
  
  while(*str!='\0')
  {
    if((*str>='A')&& (*str<='z'))
    { 
      iCnt++;
    }
    str++;
  }
  return iCnt;

}
int main()
{
	char Arr[25];
	int iRet=0;
	
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountCapital(Arr);
	
	printf("Small letters are :%d\n",iRet);
	
	
    return 0;
}
		
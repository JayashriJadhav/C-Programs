//accept string and count number of white spaces


#include<stdio.h>

int SpaceCount(char *str)
{
  int iCnt=0;
  
  while(*str!='\0')
  {
    if(*str==' ')
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
	
	iRet=SpaceCount(Arr);
	printf("Sapces are:%d\n",iRet);
	
	
    return 0;
}
		
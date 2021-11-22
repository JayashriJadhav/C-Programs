//accept string and display count number of small characters


#include<stdio.h>

  int SmallCount(char *str)
{
  int iCnt=0;
  
  while(*str!='\0')
  {
    if((c>='a')&& (c<='z'))
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
	
	iRet=SmallCount(Arr);
	
	printf("Small letters are :%d\n",iRet);
	
	
    return 0;
}
		
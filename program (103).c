#include<stdio.h>

int CountFrequency(char *str,char ch)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;

}
int main()
{
	char Arr[30];
	int iRet=0;
	char cValue='\0';
	
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("enter the character\n");
	scanf(" %c",&cValue); ///space takala h tyamule 28 vrcha enter gela
	
	iRet=CountFrequency(Arr,cValue);
	
	printf("frequency is:%d\n",iRet);
	
	return 0;
	
}

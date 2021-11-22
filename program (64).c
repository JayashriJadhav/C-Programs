//accept n numbers and count greater than 10 

#include<stdio.h>
#include<stdlib.h>

int CountRange(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]>10)&&(Arr[i]<20))
		{
			iCnt++;
			
		}
	}
	return iCnt;
	
}

int main()
{
	int iLength=0,i=0,iRet=0;
	int *ptr=NULL;
	
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=CountRange(ptr,iLength);
	
	printf("Count is :%d\n",iRet);
	
    free(ptr);
	
	return 0;	
}
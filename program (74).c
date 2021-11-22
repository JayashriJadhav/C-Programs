// find that number at last index


#include<stdio.h>
#include<stdlib.h>


int LastOccurance(int Arr[],int iSize,int iNo)
{
	int i=0;
	for(i=iSize-1;i>=0;i--)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
	}
	
       return i;

}

int main()
{
	int iLength=0,i=0,iValue=0;
	int *ptr=NULL;
	int iRet=0;
	
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&iValue);
	
	iRet=LastOccurance(ptr,iLength,iValue);
	if(iRet==-1)
	{
		printf("there is no such number\n");
	}
	else
	{
		printf("number is there at index:%d\n",iRet);
	}
		
 free(ptr);
	
	return 0;	
}
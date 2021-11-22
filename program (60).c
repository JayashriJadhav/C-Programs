#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int iSum=0,i=0;
	float fResult=0.0f;
	
	
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	
	fResult=(float)iSum/(float)iSize;   //explicit typecasting
	
	return fResult;
	
}

int main()
{
	int iLength=0,i=0;
	int *ptr=NULL;
	float fRet=0.0f;
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	fRet=Average(ptr,iLength);
	
	printf("Average is:%f\n",fRet);
	
	printf("entered data is:");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	free(ptr);
	
	return 0;	
}
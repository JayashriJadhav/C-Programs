//
// *
// * *                         irow=4,icol=4
// * *  *
// * *  *  *#include<stdio.h>

#include<stdio.h>
void Display(int iRow,int iCol)
{
	
	int i=0,j=0;
	
	if(iRow!=iCol)     //filter
	{
	  return;
	}
	
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
		      printf("*\t");
			}
           	 
	   
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("enter the number of rows\n");
	scanf("%d",&iValue1);
	
	printf("enter the number of columns\n");
	scanf("%d",&iValue2);
	
	
	Display(iValue1,iValue2);
	
	return 0;
}
//
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool CheckBit(UNIT iNo,UNIT iPos1,UNIT iPos2)
{
	UNIT iMask=0;
    UNIT iMask1=0x00000080;
	UNIT iMask2=0x00008000;
	UNIT iResult=0;
	/*if((iPos<1)||(iPos>32))
	{
		return false;
	}*/
	
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	iMask=(iMask1)||(iMask2);
	
	iResult=iNo&iMask;
	
	if(iResult==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	UNIT iValue=0,iBit1=0,iBit2=0;
	bool bRet=false;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	printf("enter positions\n");
	scanf("%d",&iBit1);
	
	printf("enter positions\n");
	scanf("%d",&iBit2);
	
	bRet=CheckBit(iValue,iBit1,iBit2);
	
	if(bRet==true)
	{
		printf("bit is ON\n");
	}
	else
	{
		printf("bit is OFF\n");
	}		
  return 0;
}

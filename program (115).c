#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool CheckBit(UNIT iNo,UNIT iPos)
{
    UNIT iMask=0x00000001;
	UNIT iResult=0;
	if((iPos<1)||(iPos>32))
	{
		return false;
	}
	
	iMask=iMask<<(iPos-1);
	
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
	UNIT iValue=0,iBit=0;
	bool bRet=false;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	printf("enter position\n");
	scanf("%d",&iBit);
	
	bRet=CheckBit(iValue,iBit);
	
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

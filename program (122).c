////open the file read content and close file using printf

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[7];
	
	printf("enter file name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open the file\n");
	    return -1; //return to OS
	}
	else
	{
		printf("file successfully opened with FD:%d\n",fd);
	}
	
    iRet=read(fd,Data,6);

    printf("%d bytes gets successfully read from the file\n",iRet);	
	
	printf("data from the file is:%s\n",Data);
	
	return 0;
}

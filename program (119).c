//open file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char Fname[30];
	
	printf("enter file name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open the file\n");
	}
	else
	{
		printf("file successfully opened with FD:%d\n",fd);
	}
		
	return 0;
}

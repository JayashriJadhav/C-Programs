#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int fd=0;
   char Arr[10];
   
   fd=open("lb17.txt",O_RDWR);
   if(fd==-1)
   {
	   printf("unable to open file\n");
	   return -1;
   }
     ////////////
	 lseek(fd,5,0);
    
	read(fd,Arr,5);
	write(1,Arr,5);
	
	printf("\n");
	
	///////////////
	lseek(fd,5,1);
	
	read(fd,Arr,5);
	write(1,Arr,5);
	
	printf("\n");
	
	close(fd);

  return 0;
}
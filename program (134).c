

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
	 lseek(fd,10,2);
   
    write(1,"  ",5);
	
	close(fd);

  return 0;
}
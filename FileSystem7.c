#include<stdio.h>    
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])

{ 
    int fd =0;
    int mode =0;
     

     printf("usage: name of Executable name_of-file Mode_of_Open: \n");

    if(argc!=3)
{
 
    printf("invalid number of arg\n");
    return -1;
}
   if(strcpy(argv[2],"Read")==0)
   {

    mode = O_RDONLY;
   }
   else if(strcmp(argv[2], "write")==0)
   {
     mode =O_WRONLY;

   }
   fd =open(argv[1],mode);
   if(fd==-1)
   {

   printf("Unable to open file\n");
   return -1;

   }

   else 
   {

    printf("File is successfully open:%d\n", fd);
    return 0;

    }

}

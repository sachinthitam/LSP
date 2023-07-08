#include<stdio.h>    
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])

{ 
    int fd =0;

     

     printf("usage: name of Executable name_of-file:\n");
     
    if(argc!=3)
{
 
    printf("invalid number of arg:\n");
    return -1;
}
   if(creat(argv[1], 0777))
   {

   if(fd==-1)
   {
         
  printf("Unale to create file\n");
  return -1;

   }
  else 
  {

    printf("File is succesfully created: %d\n", fd);
    return 0;
   
   }
   }
}
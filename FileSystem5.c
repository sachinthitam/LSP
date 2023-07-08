#include<stdio.h>    
#include<fcntl.h>
int main(int argc, char *argv[])

{
     
    char Fname[20];
    int fd=0;
    printf("Enter the filename that you want to open:\n");
    scanf("%s",Fname);

    fd =open(Fname ,O_RDONLY);
    if(fd==-1)
    {
        printf("Unale to open the file\n");
        return -1;


    }
    else {

        printf("file is successfully open with FD %d\n",fd);
    }
    return 0;

    }


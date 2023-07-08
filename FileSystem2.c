#include<stdio.h>

int main(int argc, char *argv[])

{
    printf("Name of appl : %s\n" *argv[0]);
    
    if(argc==1)
    {
        printf("Please enter your first name as command line aarguments");
        return -1;

    }
    else {
        printf("welcome to marvellous : %s\n",argv[1]);
        return 0;
    }
    }

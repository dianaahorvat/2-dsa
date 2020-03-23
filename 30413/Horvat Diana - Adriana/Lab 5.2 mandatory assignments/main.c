#include "head.h"

int main(int argc, char *argv[])
{
    printf("argc=%d\n",argc);
    int i=0;
    if(argc!=0)
    {
        for(i=0; i<argc; i++)
        {
            printf("argv[%d]=%s\n",i,argv[i]);
        }
    }
    else
        printf("Not enough arguments\n");

    FILE *f=fopen(argv[1],"r");
    readFile(f);

    return 0;
}

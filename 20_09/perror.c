#include"header.h"
#include<errno.h>
void main()
{
FILE *fp = fopen("data","r");
if(fp==0)
{
//perror("fopen");
//printf("Error: %d",errno);
printf("File not present %d\n",errno);
}

}

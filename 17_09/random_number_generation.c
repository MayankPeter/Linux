#include"header.h"

void main()
{
int a[5],i,j;

srand(getpid());
for(i=0;i<5;i++)
{
 a[i] = rand()%100;
}

for(i=0;i<5;i++)
printf("%d ",a[i]);

printf("\n");
}

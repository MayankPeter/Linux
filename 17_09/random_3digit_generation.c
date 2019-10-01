#include"header.h"

void main()
{
int a[5],i,j;

srand(getpid());
for(i=0;i<5;i++)
{
 a[i] = rand()%1000+100;
 if(a[i]>1000)
	a[i] = a[i]-100;
}

for(i=0;i<5;i++)
printf("%d ",a[i]);

printf("\n");
}

#include"header.h"

void main()
{
float a[5];
int i,j;

srand(getpid());

for(i=0;i<5;i++)
{
a[i] = rand()%100+1;

if(a[i]<25)
a[i] = (a[i]+25)/100;
else if(a[i]>75)
a[i] = (a[i]-25)/100;
else
a[i] = a[i]/100;
}


for(i=0;i<5;i++)
printf("%f ",a[i]);

printf("\n");
}

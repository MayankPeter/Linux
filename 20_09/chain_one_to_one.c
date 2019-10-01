#include"header.h"
void main()
{
int i;
for(i=0;i<3;i++)
{
if(fork()==0)
{
printf("Hello...\n");
}
else
{
printf("Hai...\n");
break;
}
}
while(1);
}

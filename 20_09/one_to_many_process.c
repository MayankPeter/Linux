#include"header.h"
void main()
{
int i;
printf("hello...\n");
for(i=0;i<3;i++)
{
if(fork()==0)
{
printf("child..\n");
break;
}
else
{
//printf("parent...\n");
}
}
while(1);
}

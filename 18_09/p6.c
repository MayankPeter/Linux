#include"header.h"
void main()
{
int r;
printf("Hello...pid = %d\n", getpid());
r = fork();
if(r==0)
{
printf("In child..\n");
}
else
{
printf("In parent..\n");
}
while(1);
}

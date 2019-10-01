#include"header.h"
void main()
{
int p;
if((p=fork())==0)
{
printf("C1.. %d\n",getpid());
while(1);
}
else
{
int s;
printf("P.. %d\n",getpid());
if(waitpid(p,&s,WIFSTOPPED(s)))
printf("Signal = %d\n",WSTOPSIG(s));
}
}

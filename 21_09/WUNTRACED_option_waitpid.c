#include"header.h"
void main()
{
if(fork()==0)
{
printf("C1.. %d\n",getpid());
while(1);
}
else
{
int s;
printf("P.. %d\n",getpid());
waitpid(-1,&s,WUNTRACED);
waitpid(-1,&s,0);
}
}

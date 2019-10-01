#include"header.h"
void main()
{
if(fork()==0)
{
printf("In child pid = %d ppid = %d\n",getpid(),getppid());
sleep(10);
printf("In child after sleep\n");
exit(1);
}
else
{
int r,s;
printf("In parent before wait..\n");
r = wait(&s);
printf("In Parent after wait...\n");
printf("r = %d s = %d\n",r,s);
while(1);
}
}

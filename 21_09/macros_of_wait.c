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
sleep(3);
r = wait(&s);
printf("In Parent after wait...\n");
printf("r = %d s = %d\n",r,s);
if(WIFEXITED(s)==1)
{
printf("WEXITSTATUS = %d\n",WEXITSTATUS(s));
}
else if(WIFSIGNALED(s)==1)
{
printf("WTERMSIG = %d\n",WTERMSIG(s));
}
while(1);
}
}

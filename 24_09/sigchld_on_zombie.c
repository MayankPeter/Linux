#include"header.h"
void isr(int n)
{
printf("Received signal = %d\n",n);
sleep(10);
}
void main()
{
if(fork()==0)
{
printf("In child...%d\n",getpid());
sleep(5);
printf("Child says bye...\n");
}
else
{
printf("Parent...\n");
signal(SIGCHLD,isr);
while(1);
}
}

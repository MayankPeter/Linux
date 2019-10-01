#include"header.h"
void my_isr(int n)
{
printf("Signal received.. %d\n",getpid());
}

void main()
{
if(fork()==0)
{
printf("In child.. %d\n",getpid());
alarm(5);
printf("Child..Bye.. %d\n",getpid());
}
else
{
printf("In parent.. %d\n",getpid());
alarm(5);
printf("Parent.. Bye.. %d\n",getpid());
}
struct sigaction new;
new.sa_handler = my_isr;
sigemptyset(&new.sa_mask);
new.sa_flags = 0;
sigaction(SIGALRM,&new,0);
while(1);
}

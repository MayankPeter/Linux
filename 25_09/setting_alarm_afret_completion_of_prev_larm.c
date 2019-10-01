#include"header.h"
void my_isr(int n)
{
printf("Alarm received... %d\n",getpid());
alarm(2);
}
void main()
{
printf("In process....\n");
struct sigaction new;
new.sa_handler = my_isr;
sigemptyset(&new.sa_mask);
new.sa_flags = 0;
sigaction(SIGALRM,&new,0);
//signal(SIGALRM,my_isr);

alarm(5);
while(1);
}

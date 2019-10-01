#include"header.h"
void my_isr(int n)
{
printf("In ISR... %d\n",n);
}
void main()
{
printf("Hello...%d\n",getpid());
struct sigaction new;
new.sa_handler = my_isr;
sigemptyset(&new.sa_mask);
new.sa_flags=0;

sigaction(SIGINT,&new,0);
printf("Hai...\n");
while(1);
}

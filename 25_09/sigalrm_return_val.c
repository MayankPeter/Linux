#include"header.h"
void my_isr(int n)
{
printf("Alarm received...\n");
}
void main()
{
int p;
printf("In process.. %d\n",getpid());
p = alarm(10);
printf("p = %d\n",p);
sleep(4);
p = alarm(2);
printf("p = %d\n",p);
signal(SIGALRM,my_isr);
while(1);
}

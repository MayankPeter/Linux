#include"header.h"
void main()
{
if(fork()==0)
{
int r;
printf("Executing Child 1...\n");
srand(getpid());
r = rand()%10+1;
printf("Wait time = %d\n",r);
sleep(r);
}
else
{
wait(0);
if(fork()==0)
{
int r;
printf("Executing Child 2...\n");
srand(getpid());
r = rand()%10+1;
printf("Wait time = %d\n",r);
sleep(r);
}
else
{
wait(0);
if(fork()==0)
{
int r;
printf("Executing Child 3...\n");
srand(getpid());
r = rand()%10+1;
printf("Wait time = %d\n",r);
sleep(r);
}
else
{
wait(0);
printf("All process done.. Parent exiting..\n");
sleep(3);
printf("Exit successful...\n");
}
}
}

}

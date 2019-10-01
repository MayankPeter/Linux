#include"header.h"
void main()
{
if(fork()==0)
{
printf("Child Hai...\n");
sleep(10);
printf("Child bye...\n");
exit(0);
}
else
{
printf("Parent Hai...\n");
sleep(5);
printf("Parent Bye...\n");
wait();
}
}

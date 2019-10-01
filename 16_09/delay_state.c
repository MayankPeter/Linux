#include"header.h"
void main()
{
int num;
printf("Hello pid = %d ppid = %d\n",getpid(), getppid());
//sleep(10);
printf("After sleep\n");
system("./a.out");
while(1);
}

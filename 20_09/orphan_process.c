#include"header.h"
void main()
{
if(fork()==0)
{
printf("Child..Hai.. pid = %d ppid = %d\n",getpid(),getppid());
sleep(10);
printf("Child..Bye.. pid = %d ppid = %d\n",getpid(),getppid());
}
else
{
printf("Parent..Hai.. pid = %d ppid = %d\n",getpid(),getppid());
sleep(5);
printf("Parent..Bye.. pid = %d ppid = %d\n",getpid(),getppid());
}
}


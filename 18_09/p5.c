#include"header.h"
void main()
{
int r;
printf("Hello...pid = %d\n",getpid());
r = fork();
printf("Hai...pid = %d r = %d\n", getpid(),r);
while(1);
}

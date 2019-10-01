#include"header.h"
void main()
{	
int num;
printf("Hello pid = %d ppid = %d\n",getpid(),getppid());
printf("Enter the number\n");
scanf("%d",&num);
printf("num = %d\n",num);

printf("Hello pid = %d ppid = %d\n",getpid(),getppid());
printf("Enter the number\n");
scanf("%d",&num);
printf("num = %d\n",num);
while(1);
}

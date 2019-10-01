#include"header.h"
void main()
{
	if(fork()==0)
	{
		int r;
		printf("Executing Child 1...\n");
		srand(getpid());
		r = rand()%10+1;
		printf("Child 1 sleeps for %d secs...\n",r);
		sleep(r);
		printf("Child 1 done...\n");
	}
	else
	{
		if(fork()==0)
		{
			int r;
			printf("Executing Child 2...\n");
			srand(getpid());
			r = rand()%10+1;
			printf("Child 2 sleeps for %d secs...\n",r);
			sleep(r);
			printf("Child 2 done...\n");
		}
		else
		{
			if(fork()==0)
			{
				int r;
				printf("Executing Child 3...\n");
				srand(getpid());
				r = rand()%10+1;
				printf("Child 3 sleeps for %d secs...\n",r);
				sleep(r);
				printf("Child 3 done...\n");
			}
			else
			{
				while(wait(0)!=-1);
				printf("Parent also Done...\n");
			}
		}
	}
}

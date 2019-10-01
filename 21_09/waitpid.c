#include"header.h"
int process[3];
void main()
{
	if((process[0]=fork())==0)
	{
		int r;
		printf("Executing Child 1... %d\n",getpid());
		srand(getpid());
		r = rand()%10+1;
		printf("Child 1 sleeps for %d secs...\n",r);
		sleep(r);
		printf("Child 1 done...\n");
	}
	else
	{
		if((process[1]=fork())==0)
		{
			int r;
			printf("Executing Child 2...%d\n",getpid());
			srand(getpid());
			r = rand()%10+1;
			printf("Child 2 sleeps for %d secs...\n",r);
			sleep(20);
			printf("Child 2 done...\n");
		}
		else
		{
			if((process[2]=fork())==0)
			{
				int r;
				printf("Executing Child 3... %d\n",getpid());
				srand(getpid());
				r = rand()%10+1;
				printf("Child 3 sleeps for %d secs...\n",r);
				sleep(20);
				printf("Child 3 done...\n");
				exit(1);
			}
			else
			{	
				int s;
				while(waitpid(process[1],&s,0)!=-1);
				if(WIFSTOPPED(s)==1)
				printf("SIGNAL = %d\n",WSTOPSIG(s));
				printf("Parent also Done...\n");
			}
		}
	}
}

#include"header.h"
int process[3];

void main()
{
	if((process[0]=fork())==0)
	{
		int r;
		printf("Executing Child 1...\n");
		srand(getpid());
		r = rand()%10+1;
		printf("Child 1 sleeps for %d secs...\n",r);
		sleep(r);
		//printf("Child 1 done...\n");
	}
	else
	{
		if((process[1] = fork())==0)
		{
			int r;
			printf("Executing Child 2...\n");
			srand(getpid());
			r = rand()%10+1;
			printf("Child 2 sleeps for %d secs...\n",r);
			sleep(r);
			//printf("Child 2 done...\n");
		}
		else
		{
			if((process[2] = fork())==0)
			{
				int r;
				printf("Executing Child 3...\n");
				srand(getpid());
				r = rand()%10+1;
				printf("Child 3 sleeps for %d secs...\n",r);
				sleep(r);
				//printf("Child 3 done...\n");
			}
			else
			{
				int r;
				while((r=wait(0))!=-1)
				{
					if(r==process[0]){ printf("Child 1 is Done...\n");}
					else if(r== process[1]) {printf("Child 2 is Done...\n");}
					else if(r==process[2]){printf("Child 3 is Done...\n");}
				}
					printf("Parent also Done...\n");
			
			}
		}
	}
}

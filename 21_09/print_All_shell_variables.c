#include"header.h"
void main(int argc,char *argv[], char**env)
{
int i;
for(i=0;env[i];i++)
{
printf("%s\n",env[i]);
sleep(1);
}
}

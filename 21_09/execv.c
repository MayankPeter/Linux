#include"header.h"
void main()
{
char *p[] = {"/bin/ls","-l","-i",NULL};
execv(p[0],p);
}

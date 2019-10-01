#include"header.h"
void main()
{
if(fork()==0)
{
system("./p1");
}
else
system("pwd");
}

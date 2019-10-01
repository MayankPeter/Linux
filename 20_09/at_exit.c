#include"header.h"

void abc(void)
{
printf("In abc...\n");
}

void main()
{
printf("Hello...");
atexit(abc);
printf("Hai...");
sleep(10);
printf("Done...");
_exit(0);
}

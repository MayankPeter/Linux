#include<stdio.h>

int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);

//typedef int(*FPTR)(int,int);
int (*)(int,int) ret_func_addr(void);

int main()
{
int m=10,n=20,r;
int(*p)(int,int);
p = ret_func_addr();
r=p(m,n);
printf("r = %d\n",r);

return 0;
}


int (*)(int,int) ret_func_addr(void)
{
return sum;
}

int sum(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int mul(int a,int b)
{
return a*b;

}

int div(int a,int b)
{
return a/b;
}

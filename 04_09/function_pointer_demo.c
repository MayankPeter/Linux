#include<stdio.h>

int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);

int main()
{

int m=10,n=20,r;
r = sum(m,n);
printf("r = %d\n",r);

int(*p)(int ,int);
p=mul;

r=(*p)(m,n); // r = p(m,n);
printf("r = %d\n",r);

return 0;
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

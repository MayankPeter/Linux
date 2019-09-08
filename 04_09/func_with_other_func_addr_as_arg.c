/* CALL_BACK_FUNCTION */

int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
int Call_Back_Func(int (*)(int,int),int , int );

#include<stdio.h>
int main()
{
int m=10,n=20,r;
r = Call_Back_Func(sum,m,n);
printf("r = %d\n",r);

return 0;
}

int Call_Back_Func(int (*p)(int,int),int m, int n)
{
int res;
res = p(m,n);
return res;
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

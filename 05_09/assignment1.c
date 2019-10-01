#include<stdio.h>

int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);

void main()
{
int r,i;
int m=10,n=20;
char op;
char t[4];
printf("Enter a symbol\n");
scanf(" %c",&op);

int(*p[4])(int,int);

p[0]=sum;
p[1]=sub;
p[2]=mul;
p[3]=div;

t[0]='+';
t[1]='-';
t[2]='*';
t[3]='/';

for(i=0;i<4;i++)
{
if(op==t[i])
{
r = p[i](m,n);
printf("r = %d\n",r);
break;
}
}
if(op==t[i])
{}
else
{
printf("Invalid option\n");
}

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


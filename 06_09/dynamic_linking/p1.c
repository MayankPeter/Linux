#include<stdio.h>
int sum(int, int);
int mul(int, int);
void print(const char *);
void main()
{
int r,m=10,n=20;

print("Hello world\n");

printf("This is printf\n");

r = sum(m,n);
printf("sum = %d\n",r);

r = mul(m,n);
printf("mul = %d\n",r);
}

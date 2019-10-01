#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,count=0;
char s[500];
char **cmd;

cmd = (char **)malloc(sizeof(char *)*10);
for(i=0;i<10;i++)
cmd[i] = (char *)malloc(sizeof(char)*10);


int j=0,k=0;
printf("Enter the string seperated by ;\n");
scanf("%s",s);

for(i=0;s[i];i++)
{
if(s[i]!=';')
{
cmd[j][k++] = s[i];
}
else
{
count++;
cmd[j][k]='\0';
k=0;
j++;
}
}

for(k=0;k<count+1;k++)
printf("%s\n",cmd[k]);
}

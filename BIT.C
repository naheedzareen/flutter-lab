#include<stdio.h>
#include<string.h>
int main()
{
int a[20],b[30],i,j,k,count,n;
clrscr();
printf("enter frame size(example:8):");
scanf("%d",&n);
printf("enter the frame in the form of 0 & 1 only:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
i=0;
count=1;
j=0;
while(i<n)
{
if(a[i]==1)
{
b[j]=a[i];
for(k=i+1;a[k]==1&&k<n&&count<5;k++)
{
j++;
b[j]=a[k];
count++;
if(count==5)
{
j++;
b[j]=0;
}
i=k;
}
}
else
{
b[j]=a[i];
}
i++;
j++;
}
printf("after bit stuffing:");
for(i=0;i<j;i++)
printf("%d",b[i]);
getch();
return 0;
}
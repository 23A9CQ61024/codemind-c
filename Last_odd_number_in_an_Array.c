#include<stdio.h> 
int main()
{
int i,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int max=0;
for(i=0;i<n;i++)
{
if(arr[i]%2!=0)
max=arr[i];
}
printf("%d",max);
}
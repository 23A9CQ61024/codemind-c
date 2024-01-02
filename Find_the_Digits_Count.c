#include <stdio.h>
int main()
{
int n,a,digit_count=0; 
scanf("%d",&n); 
while(n>0)
{
digit_count++; n=n/10;
} printf("%d",digit_count);
}
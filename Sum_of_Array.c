#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",sum);
		break;
	}
}
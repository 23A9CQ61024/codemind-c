#include <stdio.h>
int main()
{
    int i,c=0;
    char str[101];
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        c++;
    }
    printf("%d",c);
}
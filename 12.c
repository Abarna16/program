#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,rem=0;
    int x=n;
    scanf("%d",&n);
     while(n!=0)
     {
         rem=rem*10 +(n%10);
         n=n/10;
     }
    if(x==rem)
    printf("yes");
    else
    printf("no");
    return 0;
}

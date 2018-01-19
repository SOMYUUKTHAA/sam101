#include<stdio.h>
void main()
{
    int n,n1,n2;
    printf("ENTER ANY VALUE");
    scanf("%d",&n);
    while(n==0)
    {
        n=n/10;
        n2=n;
        n1=+n;
        
    }
    printf("THE VALUE IS :",n);
}

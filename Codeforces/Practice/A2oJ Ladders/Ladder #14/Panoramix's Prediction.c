#include <stdio.h>
int prime(int x)
{
    int c=0;
    for (int i=1;i<=x;i++)
    if((x%i)==0)
    c++;
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int k=0;
    while (k!=1)
    {
        k=prime(++n);
    }
    if (n==m)
    printf("YES");
    else
    printf("NO");
    return 0;
}

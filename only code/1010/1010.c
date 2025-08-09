#include <stdio.h>

long long combination(int n,int r);

int main(){
    int repeat,n,m;
    scanf("%d",&repeat);
    for (int i = 0; i < repeat; i++)
    {
        scanf("%d",&n);
        scanf("%d",&m);
        printf("%lld\n",combination(m,n));
    }
    
    return 0;
}


long long combination(int n,int r)
{
    long long result = 1;
    if (n < 2*r)
    {
        r = n - r;
    }
    for (int i = 0; i < r; i++)
    {
        result *= (n-i);
        result /= (i+1);
    }
    return result;
}
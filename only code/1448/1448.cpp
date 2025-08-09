#include <iostream>
#include <algorithm>


int main()
{
    int n,temp;
    scanf("%d",&n);
    int* len = (int*)malloc(sizeof(int)*(size_t)n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        len[i] = temp;
    }
    std::sort(len,len+n,std::greater<int>());
    for (int i = 0; i < n - 2; i++)
    {
        if (len[i + 1] + len[i + 2] > len[i])
        {
            printf("%d",len[i + 2]+len[i + 1]+len[i]);
            return 0;
        }
    }
    printf("%d",-1);

    return 0;
}
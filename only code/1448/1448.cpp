#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n,temp;
    scanf("%d",&n);
    std::vector<int> len(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        len[i] = temp;
    }
    std::sort(len.begin(),len.end(),std::greater<int>());
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int a = len[i],b = len[j], c = len[k];
                if (b + c > a)
                {
                    printf("%d",a + b + c);
                    return 0;
                }
            }
        }
    }
    printf("%d",-1);
    return 0;
}
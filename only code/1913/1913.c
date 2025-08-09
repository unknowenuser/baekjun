#include <stdio.h>

int main()
{
    int n,index;
    scanf("%d",&n);
    scanf("%d",&index);
    int snail[n][n], x = n / 2, y = n / 2,start = n / 2,i = 0;
    snail[x][y] = i + 1;
    i++;
    int dir[6] = {0,-1,0,1,0,-1};
    while(i != n*n)
    {
        y--;
        snail[x][y] = i + 1;
        i++;
        int move_num = (start - y) * 2;
        for (int j = 0; j < move_num - 1; j++)
        {
            x++;
            snail[x][y] = i+1;
            i++;
        }
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < move_num; k++)
            {
                x += dir[j];
                y += dir[j+3];
                snail[x][y] = i+1;
                i++;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",snail[j][k]);
            if (snail[j][k] == index)
            {
                x = j+1;
                y = k+1;
            }
        }
        printf("\n");
    }
    printf("%d %d",y,x);
    return 0;
}
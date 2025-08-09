#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int snail[n][n], x = (n + 1) / 2, y = (n + 1) / 2, index = 1,start = (n + 1) / 2,i = 0;
    snail[x][y] = index;
    index += 1;
    int dir[8] = {1,0,-1,0,0,-1,0,1};
    while(i != n*n)
    {
        if (x == y && x <= (n + 1) / 2)
        {
            y++;
            snail[x][y] = index;
            index++;
            i++;
            continue;
        }
        int move_num = (start - y) * 2;
        for (int j = 0; j < 4; i++)
        {
            for (int k = 0; k < move_num; k++)
            {
                x += dir[j];
                y += dir[j+4];
                snail[x][y] = i;
                i++;
            }
        }
    }
    
    return 0;
}
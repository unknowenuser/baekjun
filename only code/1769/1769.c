#include <stdio.h>

int main(){
    char num[1000001];
    int tempnum = 0,rooptimes = 0;
    scanf("%s",num);
    if (num[1] != '\0')
    {
        rooptimes++;
        for (int i = 0; num[i] != '\0'; i++)
        {
            tempnum = tempnum + (num[i] - '0');
        }
    }
    else{
        tempnum = num[0] - '0';
    }
    while (tempnum >= 10)
    {
        rooptimes++;
        sprintf(num,"%d",tempnum);
        tempnum = 0;
        for (int i = 0; num[i] != '\0'; i++)
        {
            tempnum = tempnum + (num[i] - '0');
        }
    }
    printf("%d\n",rooptimes);
    if (tempnum % 3 == 0)
    {
        printf("%s","YES");
    }
    else
    {
        printf("%s","NO");
    }
    return 0;
}

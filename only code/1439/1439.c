#include <stdio.h>

void adder(char past_num,int* zeros,int* ones);
int min(int a,int b);

int main()
{
    char num[1000001];
    int i = 1,zeros = 0,ones = 0;
    scanf("%s",num);
    char current = num[0];
    while(num[i] != '\0')
    {
        if (current != num[i])
        {
            adder(current,&zeros,&ones);
            current = num[i];
        }
        i++;
    }
    adder(num[i - 1],&zeros,&ones);
    printf("%d",min(zeros,ones));
    return 0;
}

void adder(char past_num,int* zeros,int* ones){
    if (past_num == '0')
    {
        *zeros = *zeros + 1;
    }
    else
    {
        *ones = *ones + 1;
    }
}

int min(int a,int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a,const void* b);

int main()
{
    int guiter_num;
    scanf("%d",&guiter_num);
    char serial[guiter_num][51];
    for (int i = 0; i < guiter_num; i++)
    {
        scanf("%s",serial[i]);
    }
    qsort(serial,sizeof(serial) / sizeof(serial[0]),sizeof(char[51]),compare);
    for (int i = 0; i < guiter_num; i++)
    {
        printf("%s\n",serial[i]);
    }
    return 0;
}

int compare(const void* a,const void* b)
{
    const char* serial_a = (const char*)a;
    const char* serial_b = (const char*)b;
    int alen = (int)strlen(serial_a),blen = (int)strlen(serial_b),anum = 0,bnum = 0;
    if (alen != blen)
    {
        return alen - blen;
    }
    else
    {
        for (int i = 0; i < alen; i++)
        {
            if (serial_a[i] >= '0' && serial_a[i] <= '9')
            {
                anum += serial_a[i] - '0';
            }
        }
        for (int i = 0; i < blen; i++)
        {
            if (serial_b[i] >= '0' && serial_b[i] <= '9')
            {
                bnum += serial_b[i] - '0';
            }
        }
        if (anum != bnum)
        {
            return anum - bnum;
        }
        else
        {
            for (int i = 0; i < alen; i++)
            {
                if (serial_a[i] != serial_b[i])
                {
                    return serial_a[i] - serial_b[i];
                }
            }
            return 0;
        }
        
    }
    
}
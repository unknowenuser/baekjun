#include <iostream>

using namespace std;

int IsPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i*i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void sieveOfEratosthenes(int *list,int len,int check){
    int i = 0;
    for (; i < check; i++)
    {
        if (list[i] % check == 0)
        {
            break;
        }
    }
    for (; i < len; i += check)
    {
        list[i] = 0;
    }
}

int* generate_prime_list(int over, int less) {
    int len = less - over + 1;
    int* list = new int[len];
    for (int i = 0; i < len; i++)
    {
        list[i] = over + i;
    }
    for (int i = 2; i < less; i++)
    {
        sieveOfEratosthenes(list,len,i);
    }
    
    return list;
}
void print_list(int *list,int len) {
    for (int i = 0; i < len; i++)
    {
        if (list[i] != 0)
        {
            cout << list[i] << endl;
        }
    }
}


int main() {
    int over,less;
    cin >> over >> less;
    int *nums = generate_prime_list(over,less);
    print_list(nums,less - over + 1);
    return 0;
}
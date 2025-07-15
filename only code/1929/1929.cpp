#include <iostream>

using namespace std;

void sieveOfEratosthenes(bool *list,int len){
    for (int i = 2; i*i <= len; i++)
    {
        if (list[i] == false)
        {
            continue;
        }
        else
        {
            for (int j = i*2; j <= len; j += i)
            {
                list[j] = false;
            }
        }
    }
}

bool* generate_prime_list(int less) {
    bool* list = new bool[less + 1];
    fill(list + 2,list + less + 1,true);
    list[0] = false;
    list[1] = false;
    sieveOfEratosthenes(list,less);
    return list;
}
void print_list(bool *list,int over,int less) {
    for (int i = over; i <= less; i++)
    {
        if (list[i] == true)
        {
            cout << i << endl;
        }
    }
}


int main() {
    int over,less;
    cin >> over >> less;
    bool *nums = generate_prime_list(less);
    print_list(nums,over,less);
    return 0;
}
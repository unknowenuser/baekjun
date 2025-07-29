#include <iostream>
#include <vector>
using namespace std;

int main() {
    int f1_now,f1_bef,f1_aft,f2_now,f2_bef,f2_aft,t,nt;
    f1_bef = 1;
    f1_now = 0;
    f1_aft = 1;
    f2_bef = 0;
    f2_now = 1;
    f2_aft = 1;
    cin >> t >> nt;
    for (int i = 3; i < t; i++)
    {
        f1_bef = f1_now;
        f1_now = f1_aft;
        f1_aft = f1_bef + f1_now;
        f2_bef = f2_now;
        f2_now = f2_aft;
        f2_aft = f2_bef + f2_now;
    }
    int first  = 0,second,calc_value = 0;
    while (calc_value != nt)
    {
        first++;
        second = first;
        calc_value = f1_aft*first + f2_aft*second;
        for (; nt > calc_value; second++)
        {
            calc_value = f1_aft*first + f2_aft*second;
        }
    }
    cout << first << endl << second - 1;
    return 0;
}
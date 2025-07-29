#include <iostream>
#include <vector>
using namespace std;

int main() {
    int f1_now,f1_bef,f1_aft,f2_now,f2_bef,f2_aft,t,nt;
    f1_bef = 1;
    f1_now = 0;
    f1_aft = 1;
    f1_bef = 0;
    f1_now = 1;
    f1_aft = 1;
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
    int first  = 0,second = 0;
    while (nt != f1_aft*first + f2_aft*second)
    {
        first++;
        for (second = 0; nt != f1_aft*first + f2_aft*second; second++)
        {
            if (nt == f1_aft*first + f2_aft*second)
            {
                break;
            }
        }
    }
    cout << first << endl << second;
    return 0;
}
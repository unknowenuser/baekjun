#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,n;
    cin >> a >> b >> n;
    int c = a;
    for (int i = 0; i < n; i++)
    {
        c = (c % b) * 10;
    }
    cout << c / b;
    return 0;
}
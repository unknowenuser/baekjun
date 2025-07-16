#include <iostream>
#include <set>
using namespace std;

int main(){
    int len_a,len_b,temp;
    cin >> len_a >> len_b;
    set<int> A;
    for (int i = 0; i < len_a; i++)
    {
        cin >> temp;
        A.insert(temp);
    }
    for (int i = 0; i < len_b; i++)
    {
        cin >> temp;
        if (A.find(temp) != A.end())
        {
            A.erase(temp);
        }
        else
        {
            A.insert(temp);
        }
    }
    cout << A.size();
    return 0;
}
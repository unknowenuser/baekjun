#include <iostream>
#include <set>
using namespace std;

void get_data(set<int>& set,int times) {
    int temp;
    for (int i = 0; i < times; i++)
    {
        cin >> temp;
        set.insert(temp);
    }
}
void get_dif_set(set<int>& A,int times) {
    int temp;
    for (int i = 0; i < times; i++)
    {
        cin >> temp;
        set<int>::iterator check = A.find(temp);
        if (check == A.end()) {
			continue;
		}
		else {
			A.erase(check);
		}
    }
}

int main() {
    int A,B;
    cin >> A >> B;
    set<int> setA;
    get_data(setA,A);
    get_dif_set(setA,B);
    auto size = setA.size();
    cout << size << endl;
    for (auto i : setA)
    {
        cout << i << " ";
    }
    return 0;
}
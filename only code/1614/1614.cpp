#include <iostream>
using namespace std;

int main(){
    long finger_num,countable;
    cin >> finger_num >> countable;
    long count;
    if (finger_num != 1 && finger_num != 5){
        count = (countable / 2) * 8;
        if (countable %2 == 1){
            count = count + 9 -finger_num;
        }
        else{
            count = count + finger_num - 1;
        }
    }
    else{
        count = countable * 8 + finger_num - 1;
    }
    cout << count;
    return 0;
}
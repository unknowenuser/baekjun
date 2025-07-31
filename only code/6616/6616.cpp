#include <iostream>
#include <string>
using namespace std;


int main(){
    while (true)
    {
        int n;
        string plaintext;
        cin >> n;
        cin.ignore();
        if (n == 0)
        {
            break;
        }
        getline(cin,plaintext);
        while (plaintext.find(' ') != string::npos) //공백제거
        {
            plaintext.erase(plaintext.find(' '),1);
        }
        string temp = "";
        for (int i = 0; i < plaintext.length(); i++) //대문자로
        {
            temp += toupper(plaintext[i]);
        }
        int plaintext_length = temp.size();
        char ciphertext[plaintext_length];
        int i = 0,j = 0;
        while (plaintext_length != j) //평문의 마지막을 저장한뒤 j의 값
        {
            if (i >= plaintext_length) //저장할 위치가 전체길이보다 커질 경우를 대비 
            {
                i = (i % n) + 1;
            }
            ciphertext[i] = temp[j];
            j++;
            i += n;
        }
        for (auto i : ciphertext)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
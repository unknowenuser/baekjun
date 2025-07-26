#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include <iostream>
#include <string>
#include <algorithm>

class Bigint {
private:
    std::string num;  // 내부적으로 문자열로 저장 (가장 왼쪽이 가장 큰 자리수)

    // 내부용: 문자열 앞의 0 제거
    void trim_leading_zeros() {
        int i = 0;
        while (i < num.size() - 1 && num[i] == '0') i++;
        num = num.substr(i);
    }

public:
    // 기본 생성자 (0으로 초기화)
    Bigint() : num("0") {}

    // 문자열로 초기화
    Bigint(const std::string& s) : num(s) {
        trim_leading_zeros();
    }

    // getter
    std::string get_num() const {
        return num;
    }

    // 덧셈 연산자 오버로딩
    Bigint operator+(const Bigint& other) const {
        std::string a = num;
        std::string b = other.num;
        std::string result = "";

        // 길이 맞추기
        if (a.length() < b.length()) std::swap(a, b);
        int diff = a.length() - b.length();
        b = std::string(diff, '0') + b;

        int carry = 0;
        for (int i = a.length() - 1; i >= 0; i--) {
            int digit_sum = (a[i] - '0') + (b[i] - '0') + carry;
            carry = digit_sum / 10;
            result += (digit_sum % 10 + '0');
        }
        if (carry) result += (carry + '0');

        std::reverse(result.begin(), result.end());
        return Bigint(result);
    }

    // 비교 연산자 오버로딩
    bool operator==(const Bigint& other) const {
        return num == other.num;
    }

    bool operator<(const Bigint& other) const {
        if (num.length() != other.num.length())
            return num.length() < other.num.length();
        return num < other.num;
    }

    bool operator>(const Bigint& other) const {
        return other < *this;
    }

    bool operator<=(const Bigint& other) const {
        return !(*this > other);
    }

    bool operator>=(const Bigint& other) const {
        return !(*this < other);
    }


    friend std::ostream& operator<<(std::ostream& os, const Bigint& b) {
        os << b.num;
        return os;
    }
};


class fibo{
private:
    Bigint* fibonachi[481];
    int fibonachi_len;
    void update_fibo(){
        fibonachi_len++;
        Bigint temp = *fibonachi[fibonachi_len - 2] + *fibonachi[fibonachi_len - 1];
        fibonachi[fibonachi_len] = new Bigint(temp.get_num());
    }
public:
    fibo(){
        fibonachi[0] = new Bigint("0");
        fibonachi[1] = new Bigint("1");
        fibonachi[2] = new Bigint("2");
        fibonachi_len = 2;
    }
    Bigint get_fibo(int n){
        if(fibonachi_len < n) {
            for (int i = 0; i < n-fibonachi_len; i++)
            {
                update_fibo();
            }
        }
        return *fibonachi[n];
    }
    int find_bigger(Bigint n){
        int i = 1;
        while (true)
        {
            if (get_fibo(i) >= n)
            {
                break;
            }
            i++;
        }
        return i;
    }
    int find_smaller(Bigint n){
        int i = 1;
        while (true){
            if (get_fibo(i) > n){
                break;
            }
            i++;
        }
        return i - 1;
    }
};

int main(){
    fibo f;
    string a,b;
    cin  >> a >> b;
    while (b != "0")
    {
        cout << f.find_smaller(Bigint(b)) - f.find_bigger(Bigint(a)) + 1 << endl;
        cin >> a >> b;
    }
    return 0;
}
#include <iostream>
using namespace std;

int finder(long long l, long long r, int k) {
    int t = k * (k - 1) / 2;
    int max_d = (r - k) / t + 1;
    long result = 0;

    for (int i = 1; i < max_d; ++i) {
        int max_x = (r - i * t) / k;
        int min_x = (l - i * t + k - 1) / k;

        for (int j = max(min_x, 1); j < max_x; ++j) {
            long long s = i * t + j * k;
            if (s > r) break;
            if (s >= l && s <= r) {
                result++;
            }
        }
    }

    return result;
}

int main() {
    long long l, r;
    int k;
    cin >> l >> r >> k;
    cout << finder(l, r, k) << endl;
    return 0;
}

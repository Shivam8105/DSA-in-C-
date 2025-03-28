#include <iostream>
using namespace std;

long long floorSqrt(long long x) {
    long long low = 1, high = x, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid == x)
            return mid;
        else if (mid * mid < x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    long long n = 17;
    cout << floorSqrt(n);
    return 0;
}

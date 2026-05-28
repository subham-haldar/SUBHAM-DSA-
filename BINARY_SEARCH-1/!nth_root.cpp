#include <bits/stdc++.h>
using namespace std;
class solution {
    public :

// Function to compute mid^n and compare to m, avoiding overflow by early exit
int func(long long mid, int n, long long m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        if (ans > m / mid) return 2;  // Prevent overflow: check before multiplying
        ans *= mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

// Binary search to find the nth root of m
 int Nthroot(int n, long long m) {
     int low = 1, high = m;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        int midN = func(mid, n, m);
        if (midN == 1) return mid;
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
};

// int main() {
//     long long m;                         //  !!!  TC === LOG N (for binary search) * LOG N(if the power is found by binary) or * N (simple loop method to find the power)
//     int n;
//     cin >> m >> n;
//     //Example: For n=4, m=88, output should be 3 (since 3^4=81, 4^4=256>88)
//    cout << Nthroot(n, m) << endl;
//     return 0;
// }

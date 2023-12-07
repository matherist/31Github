#include <bits/stdc++.h>
using namespace std;
 
int countTrailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
 
int main() {
    int n;
    cin >> n;
 
    int result = countTrailingZeros(n);
    cout << result << endl;
 
    return 0;
}
 

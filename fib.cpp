#include <bits/stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
using namespace std;
void multiply(int F[2][2], int M[2][2]);
void power(int x[2][2], int n);
 
void multiply(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] +
            F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] +
            F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] +
            F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] +
            F[1][1] * M[1][1];
 
    F[0][0] = x%MOD;
    F[0][1] = y%MOD;
    F[1][0] = z%MOD;
    F[1][1] = w%MOD;
}
 
void power(int x[2][2], int n)
{
    if(n == 0 || n == 1)
       return;
    int m[2][2] = {{1, 1}, {1, 0}};
 
    power(x, n / 2);
    multiply(x, x);
 
    if (n % 2 != 0)
        multiply(x, m);
}
 
int fib(int n) {
    int x[2][2] = {{1, 1}, {1, 0}};
    if (n== 0) {
        return 0;
    }
    power(x, n-1);
    return x[0][0];
}
 
main() {
    int n;
    cin >> n;
    cout << fib(n)<< endl;
    return 0;
}

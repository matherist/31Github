#include <iostream>
#include <cmath>
 
#define PI 3.14159265358979323846
 
int main() {
    double n, a, r1, r2;
 
    std::cin >> n >> a;
 
    double x = PI / n;
 
    r1 = a / (2 * sin(x));
    r2 = a / (2 * tan(x));
 
    if (std::abs(r1 - r2) < 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
 
    return 0;
}

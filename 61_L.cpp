#include <iostream>
#include <clocale>

int C (int n, int k);
int gcd (int a, int b);
using namespace std;

int main(int argc, const char * argv[]) {
    
    int k = 0, n = 0;
    int l = 0, m = 0;
    std::cin >> k;
    std::cin >> n;
    std::cin >> l;
    std::cin >> m;
    
    int a = C (n, k);
    int b = C (m, l);
    std::cout << gcd(a, b) % 1000000007;
    return 0;
}

int gcd(int a, int b) {
    int nod = 1L;
    int tmp;
    if (a == 0L)
        return b;
    if (b == 0L)
        return a;
    if (a == b)
        return a;
    if (a == 1L || b == 1L)
        return 1L;
    while (a != 0 && b != 0) {
        if (((a & 1L) | (b & 1L)) == 0L) {
            nod <<= 1L;
            a >>= 1L;
            b >>= 1L;
            continue;
        }
        if (((a & 1L) == 0L) && (b & 1L)) {
            a >>= 1L;
            continue;
        }
        if ((a & 1L) && ((b & 1L) == 0L)) {
            b >>= 1L;
            continue;
        }
        if (a > b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        tmp = a;
        a = (b - a) >> 1L;
        b = tmp;
    }
    if (a == 0)
        return nod * b;
    else
        return nod * a;
}

int C (int n, int k) {
    double res = 1;
    for (int i=1; i<=k; ++i)
        res = res * (n-k+i) / i;
    return (int) (res + 0.01);
}

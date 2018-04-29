#include <iostream>

int phi(int p);
int C (int n, int k);

int main(int argc, const char * argv[]) {
    
    int k = 0, n = 0;
    std::cin >> k;
    std::cin >> n;
    int p = C (n, k);
    std::cout << phi(p) % 1000000007;
    return 0;
}

int phi (int p)
{
    int result = p;
    for (int i=2; i*i<=p; ++i)
        if (p % i == 0) {
            while (p % i == 0)
                p /= i;
            result -= result / i;
        }
    if (p > 1)
        result -= result / p;
    return result;
}

int C (int n, int k) {
    double res = 1;
    for (int i=1; i<=k; ++i)
        res = res * (n-k+i) / i;
    return (int) (res + 0.01);
}

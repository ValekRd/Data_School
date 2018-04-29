#include <iostream>
#include <clocale>

int C (int n, int k);
int calculate (int p);

int main(int argc, const char * argv[]) {
    
    int k = 0, n = 0;
    std::cin >> k;
    std::cin >> n;
    int p = C (n, k);
    std::cout << calculate(p) % 1000000007;
    return 0;
}

int calculate (int p)
{
    int a = p, ans = p == 1 ? 1 : 2;
    for(int i = 2; i * i <= a; i++)
    {
        if(p % i != 0) continue;
        int j = p / i;
        ans += 2 - !!(i == j);
    }
    return ans;
}

int C (int n, int k) {
    double res = 1;
    for (int i=1; i<=k; ++i)
        res = res * (n-k+i) / i;
    return (int) (res + 0.01);
}

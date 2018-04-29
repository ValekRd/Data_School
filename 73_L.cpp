#include <iostream>
#include <clocale>

int C (int n, int k);
int calculate (int p);
using namespace std;

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
    int sum = 0;
    sum += p;
    if (p != 1){
        sum +=1;
    }
    int a = p;
    for(int i = 2; i * i <= a; i++)
    {
        if(p % i != 0){
            continue;
        }
        int j = p / i;
        sum += j;
        sum += i;
    }
    return sum;
}

int C (int n, int k) {
    double res = 1;
    for (int i=1; i<=k; ++i)
        res = res * (n-k+i) / i;
    return (int) (res + 0.01);
}

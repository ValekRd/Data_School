#include <iostream>
#include <clocale>

long long int C (int n, int k);
long long int calculate (long long int p);

int main(int argc, const char * argv[]) {
    
    int k = 0, n = 0;
    std::cin >> k;
    std::cin >> n;
    long long int p = C (n, k);
    std::cout << calculate(p);
    return 0;
}

long long int calculate (long long int p){
    
    long long int result = 0;
    
    for (long long int i = 1; i <= p; i ++){
        if (p % i == 0){
            result ++;
        }
    }
    return result;
}

long long int C (int n, int k) {
    long long int ans = 0;
     long long int fac_n = 1;
     long long int fac_k = 1;
     long long int fac_nk = 1;
     
     if(n == 0){
     return 0;
     }
     if (k == 0){
     return 1;
     }
     
     for (int i = n; i > 1; i --){
     fac_n = fac_n * i ;
     }
     for (long long int i = k; i > 1; i --){
     fac_k = fac_k * i % 1000000007;
     }
     for (int i = n-k; i > 1; i --){
     fac_nk = fac_nk * i % 1000000007;
     }
     ans = fac_n/((fac_k * fac_nk) % 1000000007);
     return ans;
}

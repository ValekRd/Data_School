#include <iostream>
#include <map>
using namespace std;

int C (int n, int k);

int main(int argc, const char * argv[]) {
    
    unsigned int N = 0;
    std::cin >> N;
    map<int, int> array;
    array[0] = 0;
    
    for (int i = 1; i <= N; i ++){
        int num = 0;
        std::cin >> num;
        array[i] = num;
    }
    
    int result = 0;
    auto it = array.end();
    for (auto i = std::prev(it, 1); i != std::next(array.begin(), 1); i --){
        result += 2 * C(i->second, 2) + i->second;
        for (auto j = std::prev(i, 1); j != array.begin(); j --){
            result += (i->first - j->first) + (i->first - j->first + 1) * j->second + (i->first - j->first + 1) * i->second + j->second * i->second * (i->first - j->first + 2);
        }
    }
    std::cout << result % 1000000007;
    return 0;
}

int C (int n, int k) {
    double res = 1;
    for (int i=1; i<=k; ++i)
        res = res * (n-k+i) / i;
    return (int) (res + 0.01);
}

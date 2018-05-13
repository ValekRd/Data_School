#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    unsigned int N = 0;
    unsigned int K = 0;
    std::cin >> N;
    std::cin >> K;
    
    map<int, int> array;
    
    for (int i = 1; i <= N; i ++){
        int num = 0;
        std::cin >> num;
        array[i] = num;
    }
    
    unsigned long long int result = K;
    for (auto it = std::next(array.begin(), 1); it != array.end(); it ++){
        result = (result * (K - 1)) % 1000000007;
        if (it->second != 0){
            
            for (int i = it->second; i > 0; i--){
                result = (result * (K - 1)) % 1000000007;
            }
        }
    }
    //result = result % 1000000007;
    std::cout << result;
    return 0;
}

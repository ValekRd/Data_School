#include <iostream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    
    unsigned int N = 0;
    std::cin >> N;
    
    long long int result = 0;
    map<int, int> array;
    
    for (int i = 0; i < N; i ++){
        int num = 0;
        std::cin >> num;
        if (array.find(num) == array.end()){
            array[num] = 1;
            result += num;
        }
        else{
            array[num] = +1;
        }
    }
    std::cout << result;
    return 0;
}

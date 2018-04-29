#include <iostream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    
    unsigned int N = 0;
    std::cin >> N;
    
    map<int, int> array;
    
    for (int i = 0; i < N; i ++){
        int num = 0;
        std::cin >> num;
        if (array.find(num) == array.end()){
            array[num] = 1;
        }
        else{
            array[num] = +1;
        }
    }
    
    int max_num = 0;
    int result = 0;
    
    for (map<int, int>::iterator it = array.begin(); it != array.end(); it ++){
        if (it->second > max_num){
            max_num = it->second;
            result = it->first;
        }
        if (it->second == max_num && it->first > result){
            result = it->first;
        }
    }
    std::cout << result;
    return 0;
}

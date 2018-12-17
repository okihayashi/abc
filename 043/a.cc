#include <iostream>

int main(){
    int N;
    long sum;
    std::cin >> N;

    for(int i=1;i<=N;i++){
        sum += i; 
    }
    
    std::cout << sum << std::endl;
}

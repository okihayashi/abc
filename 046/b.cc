#include <iostream>

int main(){
    int n, k, output;
    std::cin >> n >> k;

    output = k;

    for(int i=0;i<n-1;i++){
        output = output * (k-1); 
    }

    std::cout << output << std::endl;
}

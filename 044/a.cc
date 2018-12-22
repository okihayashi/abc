#include <iostream>

int main(){
    int n, k, x, y;
    std::cin >> n >> k >> x >> y;

    if (n >= k) std::cout << k*x + (n-k)*y << std::endl;
    if (n < k) std::cout << n*x << std::endl; 

}

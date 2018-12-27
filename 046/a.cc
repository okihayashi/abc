#include <iostream>

int main(){
    int a, b, c;
    int count = 0;
    std::cin >> a >> b >> c;

    if(a == b && b == c) count = 1;
    else if(a == b && b != c) count = 2;
    else if(a != b && b == c) count = 2;
    else if(a == c && b != c) count = 2;
    else count = 3;
    
    std::cout << count << std::endl;
}

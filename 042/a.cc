#include <stdio.h>
#include <iostream>

int main(){
    int a, b, c;
    int count_five = 0;
    int count_seven = 0;
    std::cin >> a >> b >> c;

    if (a == 5) count_five++;
    if (a == 7) count_seven++;
    if (b == 5) count_five++;
    if (b == 7) count_seven++;
    if (c == 5) count_five++;
    if (c == 7) count_seven++;
    
    if(count_five == 2 && count_seven == 1){
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }

}

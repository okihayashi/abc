#include <stdio.h>
#include <iostream>
#include <string.h>
//#include <algorithm>

int main(){
    int N, L;
    std::cin >> N >> L;
    std::string str[100] = {};
    
    for(int i=0;i<N;i++){
        std::cin >> str[i]; 
    }   

    sort(str, str+N);

    for(int i=0;i<N;i++){
        std::cout << str[i];
    }

    std::cout << std::endl;
}

#include <iostream>
#include <string>
#include <map>

int main(){
    std::string s;
    std::map<char, int> count;
    int flag = 0;
    std::cin >> s; 

    for(int i=0;i<=s.length();i++){
        count[s[i]] += 1;
    }

    for(int i=0;i<=s.length();i++){
        if(s[i]){
            if(count[s[i]]%2 != 0) flag = 1;
        }
    }

    if(flag == 1) std::cout << "No" << std::endl;
    else std::cout << "Yes" << std::endl;
}

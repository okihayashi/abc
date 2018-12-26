#include <iostream>
#include <map>
#include <string>

int main(){
    std::map<char, std::string> s; 
    std::cin >> s['a'] >> s['b'] >> s['c'];

    char turn, next_turn;
    turn = 'a';

    while(!s[turn].empty()){
        next_turn = s[turn][0];
        s[turn].erase(s[turn].begin());
        
        turn = next_turn; 
    }

    std::cout << (char)(turn - 0x20) << std::endl;
}

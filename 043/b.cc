#include <iostream>
#include <cmath>

int main() {
	char ch;
        char c[232];
        char top; 

	while(std::cin>>ch) {
		if(ch=='B' && top) top--;
		if(ch!='B') c[top++]=ch;
	}

	for(int i=0;i<top;++i){
             std::cout << c[i] << std::endl;
        }
}

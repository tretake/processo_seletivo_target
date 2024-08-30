#include <iostream>
#include <string>

int main() {
    std::cout << "Digite uma string: ";
    std::string str;
    std::getline(std::cin, str); 
	
    int count = 0;

    
    for (char c : str) {
        if (c == 'a' || c == 'A') {
            ++count;
        }
    }

   
    if (count > 0) {
        std::cout << "A letra 'a' (maiúscula ou minúscula) ocorre " << count << " vez(es) na string." << std::endl;
    } else {
        std::cout << "A letra 'a' (maiúscula ou minúscula) não foi encontrada na string." << std::endl;
    }

    return 0;
}
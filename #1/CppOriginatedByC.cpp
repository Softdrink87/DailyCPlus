#include <iostream>

int main() {
    int lucky_number = 7;
    std::cout << "Guess What is My Lucky Number :3" << std::endl;
    
    int guess_number;

    while (1) {
        std::cout << "Input : " << std::endl;
        std::cin >> guess_number;
        if(lucky_number == guess_number)
        {
            std::cout << "Great Job! This is my Lucky Number ovo" << std::endl;
            break;
        }
        else {
            std::cout << "Guess Again omo" << std::endl;
        }
    }
    return 0;
}
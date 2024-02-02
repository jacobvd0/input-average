#include <iostream>

int main() {
    float totalNumbers = 0;
    float combinedNumbers = 0;
    
    while (true) {
        float currentNum;
        std::cout << "Add a new number or enter q to quit:\n";
        std::cin >> currentNum;
        std::cout << "\n";
        if (std::cin.fail()) {
            std::cin.clear();
            char inputChar = '.';
            std::cin >> inputChar;
            if (inputChar == 'Q' || inputChar == 'q') {
                std::cin.ignore(std::cin.rdbuf()->in_avail());
                break;
            } else {
                std::cin.ignore(std::cin.rdbuf()->in_avail());
                std::cout << "Invalid input."
            }
        } else {
            combinedNumbers = combinedNumbers + currentNum;
            totalNumbers++;
        }
    }
    if (totalNumbers == 0) {
        std::cout << "Unable to average numbers as no numbers were entered\n";
    } else {
        std::cout << "You entered " << totalNumbers << " numbers that averaged " << (combinedNumbers / totalNumbers) << "\n";
    }
    
    
    return 0;
}
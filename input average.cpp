#include <iostream>

int main() {
    float totalNumbers = 0;
    float combinedNumbers = 0;
    
    while (true) {
        float currentNum;
        std::cout << "Add a new number or press q to quit:\n";
        std::cin >> currentNum;
        std::cout << "\n";
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::cin.rdbuf()->in_avail());
            break;
        } else {
            combinedNumbers = combinedNumbers + currentNum;
            totalNumbers++;
        }
    }
    
    std::cout << "You entered " << totalNumbers << " numbers that averaged " << (combinedNumbers / totalNumbers) << "\n";
    
    return 0;
}
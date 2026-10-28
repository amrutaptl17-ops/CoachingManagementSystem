
#include "Repository.h"
#include <iostream>
#include <string>

int main() {
    Repository<int> numbers;
    numbers.add(10);
    numbers.add(20);

    Repository<std::string> names;
    names.add("Aarav");
    names.add("Diya");

    std::cout << "Number records: " << numbers.size() << '\n';
    std::cout << "Name records: " << names.size() << '\n';

    return 0;
}

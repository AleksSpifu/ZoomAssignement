
#include <iostream>
int age;
int adultThreshold = 20;
int teenThreshold = 13;

int main()
{
    std::cout << "How old are you?: \n";
    std::cin >> age;
    if (age >= adultThreshold && age < 120) {
        std::cout << "You are older than a teenager.\n";
    }
    else if (age < adultThreshold && age >= teenThreshold) {
        std::cout << "You are a teenager.\n";
    }
    else if (age < teenThreshold && age >= 0) {
        std::cout << "You are younger than a teenager.\n";
    }
    else {
        std::cout << "Something has gone wrong.\n";
    }
}
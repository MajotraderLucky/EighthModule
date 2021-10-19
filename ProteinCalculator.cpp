#include <iostream>

int main() {
    //The program calculates the total amount of proteins and carbohydrates in the product
    std::cout << "How many proteins are there per hundred grams of product?\n";
    std::cout << "---> ";
    float proteinsInHundredGrams = 0.0f;
    std::cin >> proteinsInHundredGrams;
    std::cout << "How many carbohydrates are there per hundred grams of product\n";
    std::cout << "---> ";
    float carbohydratesInHundredGrams = 0.0f;
    std::cin >> carbohydratesInHundredGrams;
    std::cout << "Enter the actual weight of the product\n";
    float actualWeight = 0.0f;
    std::cin >> actualWeight;
}

#include <iostream>

int main() {
    //This program displays the total cost of bulk goods
    std::cout << "Enter the cost of one hundred grams of the product\n";
    std::cout << "---> ";
    float cost = 0.0f;
    std::cin >> cost;
    //Determine how much one gram of goods costs
    float oneGramCosts = cost / 100;
    //User entering total purchase weight
    float totalWeight = 0.0f;
    std::cout << "Enter the total purchase weight\n";
    std::cout << "---> ";
    std::cin >> totalWeight;
    //We display the total cost of the goods
    float totalCost = oneGramCosts * totalWeight;
    std::cout << "Total cost of the goods = " << totalCost << " rubles\n";
    //Outputting the result with rounding
    float roundCost = int(totalCost * 100 + 0.5) / 100.0f;
    std::cout << "Rounding total cost of the goods = " << roundCost << " rubles\n";
    return 0;
}

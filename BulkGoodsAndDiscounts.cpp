#include <iostream>

int main() {
    /*This program calculates the actual cost of bulk goods and discounts
    for different customers*/
    std::cout << "Enter the cost of one hundred grams of the product\n";
    std::cout << "---> ";
       float costOneHundredGrams = 0.0f;
    std::cin >> costOneHundredGrams;
    std::cout << "Enter the total weight of the product\n";
    std::cout << "---> ";
       float totalWeight = 0.0f;
    std::cin >> totalWeight;
    std::cout << "Enter the discount for this customer\n";
    std::cout << "---> ";
       float discount = 0.0f;
    std::cin >> discount;
       float totalCost = (costOneHundredGrams / 100) * totalWeight;
       float totalCostAndDiscount = totalCost - ((totalCost / 100) * discount);
    std::cout << "The cost of goods, taking into account the discount, is " << totalCostAndDiscount << " rubles" << std::endl;
    std::cout << "Without a discount, the product would cost " << totalCost << " rubles" << std::endl;
    std::cout << "The discount on the product was " <<((totalCost / 100) * discount) << " rubles" << std::endl;
}

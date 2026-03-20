#include "receipt.h"

#include <string>

std::string formatReceipt(const std::string& drinkName, int price) {
    return "Drink: " + drinkName + "\nTotal: " + std::to_string(price) + " RUB";
}

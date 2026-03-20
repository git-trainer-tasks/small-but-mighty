#include "receipt.h"

#include <string>

std::string formatReceipt(const std::string& drinkName, int price) {
    return "Order: " + drinkName + ", total: " + std::to_string(price) + " RUB";
}

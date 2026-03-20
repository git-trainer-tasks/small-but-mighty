#include <iostream>
#include <string>

#include "menu.h"
#include "receipt.h"

int main(int argc, char* argv[]) {
    std::string drink_name = argv[1];
    int price = getPrice(drink_name);
    std::cout << formatReceipt(drink_name, price) << '\n';
    return 0;
}

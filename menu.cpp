#include "menu.h"

#include <map>
#include <string>

namespace {

const std::map<std::string, int> kMenu = {
    {"espresso", 150},
    {"latte", 220},
    {"tea", 110},
};

}  // namespace

int getPrice(const std::string& drinkName) {
    return kMenu.at(drinkName);
}

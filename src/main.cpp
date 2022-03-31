#include "./libs/colors/colors.hpp"
#include <iostream>

int main() {
  std::cout << colors::FRED << " FRED " << colors::RS << "\t\t"
            << colors::FGRN << " FGRN " << colors::RS << "\t\t"
            << colors::FYEL << " FYEL " << colors::RS << "\t\t"
            << colors::FBLE << " FBLE " << colors::RS << "\t\t"
            << colors::FMAG << " FMAG " << colors::RS << "\t\t"
            << colors::FCYN << " FCYN " << colors::RS << "\t\t"
            << colors::FWHT << " FWHT " << colors::RS << "\n"

            << colors::BRED << " BRED " << colors::RS << "\t\t"
            << colors::BGRN << " BGRN " << colors::RS << "\t\t"
            << colors::BYEL << " BYEL " << colors::RS << "\t\t"
            << colors::BBLE << " BBLE " << colors::RS << "\t\t"
            << colors::BMAG << " BMAG " << colors::RS << "\t\t"
            << colors::BCYN << " BCYN " << colors::RS << "\t\t"
            << colors::BWHT << " BWHT " << colors::RS << "\n";
}

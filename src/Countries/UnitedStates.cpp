#include "../../header/Brackets/2024/UnitedStates.hpp"
using namespace std;

// Table Used: https://www.nerdwallet.com/article/taxes/federal-income-tax-brackets#2024-tax-brackets-(taxes-due-april-2025)
UnitedStates::UnitedStates() {
  // Loads the bracket limit and tax percentage for United States 2024
  loaderHelper(11600, 10);
  loaderHelper(47150, 12);
  loaderHelper(100525, 22);
  loaderHelper(191950, 24);
  loaderHelper(243725, 32);
  loaderHelper(609350, 35);
  loaderHelper(4294967295, 37); // Unsigned int limit
};

void UnitedStates::loaderHelper(unsigned int limit, unsigned int taxRate) {
  // Helper Function to make constructor easier to read
  bracketBreaker.push_back(limit);
  taxRatePercentage.push_back(taxRate);
};

int UnitedStates::bracketVal(int val) const {
  int bracketNum = 0;
  for (int i = 0; i < bracketBreaker.size(); i++) {
    if (val < bracketBreaker.at(i)) {
      return i;
    };
  };

  return -1;
};
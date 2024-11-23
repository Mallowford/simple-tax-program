#pragma once
#include "../Bracket.hpp"

class UnitedStates : public Bracket {
  private:
    vector<unsigned int> bracketBreaker;
    vector<unsigned int> taxRatePercentage;
  public:
    UnitedStates();
    int bracketVal(int val) const override;
    void loaderHelper(unsigned int limit, unsigned int taxRate);
};
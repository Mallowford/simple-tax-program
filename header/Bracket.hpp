#pragma once
#include <vector>

using std::vector;

class Bracket {
  private:
    vector<unsigned int> bracketBreaker;
  public:
    Bracket();
    virtual int bracketVal(int val) const = 0;
};
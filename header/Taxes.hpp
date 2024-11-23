#pragma once
#include "Bracket.hpp"
#include "Currencies.hpp"
#include <string>

using std::string;

class Taxes {
  private:
    Bracket* bracket;
    Currencies myCurrency;
    double amount;
  public:
    Taxes();
    ~Taxes();
    Taxes(Taxes& orig) = delete;
    Taxes & operator=(Taxes& orig) = delete;

    void setCurrency(Currencies desired);
    string getCurrency() const;
    void newBracket(Bracket* newBracket);
    int getBracket();
    string getBracketText() const;
    void setAmount(double newAmount);
    double getAmount() const;
};
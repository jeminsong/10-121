// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 4/16/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong

// Lab 10-2

#ifndef BANK_H
#define BANK_H

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <memory>
#include <string>

#include "account.h"

class Bank {
 public:
  Bank(const std::string& bank_name);
  std::string GetBankName() const;
  const std::map<int, Account>& GetAccounts() const;
  int CreateAccount(const std::string& name, double balance);
  int TotalAccounts() const;
  void DisplayBalances() const;
  void DeactivateAccount(int account_id);

 private:
  std::string bank_name_;
  std::map<int, Account> accounts_;

  int GenerateAccountId() const;
};
#endif  // BANK_H
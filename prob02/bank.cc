// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 4/16/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "bank.h"

#include <iostream>
#include <random>

Bank::Bank(const std::string& bank_name) : bank_name_(bank_name) {}

std::string Bank::GetBankName() const {
  return bank_name_;
}

const std::map<int, Account>& Bank::GetAccounts() const {
  return accounts_;
}

int Bank::CreateAccount(const std::string& name, double balance) {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<int> dis(1000, 9999);

  int account_id = dis(gen);
  accounts_.emplace(account_id, Account(name, balance));
  return account_id;
}

int Bank::TotalAccounts() const {
  return accounts_.size();
}

void Bank::DisplayBalances() const {
  for (const auto& [id, account] : accounts_) {
    std::cout << account.GetAccountHolder() << ": $" << account.GetBalance()
              << std::endl;
  }
}

void Bank::DeactivateAccount(int account_id) {
  auto it = accounts_.find(account_id);
  if (it != accounts_.end()) {
    accounts_.erase(it);
  }
}

int Bank::GenerateAccountId() const {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<int> dis(1000, 9999);
  return dis(gen);
}
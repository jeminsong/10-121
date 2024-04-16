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

#include <iostream>
#include <map>
#include <vector>

#include "bank.h"

int main() {
  Bank bank("Insecure Bank");

  bank.CreateAccount("Tuffy", 121.00);
  bank.CreateAccount("Frank", 1234.56);
  bank.CreateAccount("Oreo", 140.12);

  bank.DisplayBalances();

  return 0;
}
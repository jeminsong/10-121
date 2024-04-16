// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 4/16/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 10-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <map>
#include <vector>

#include "plane.h"

int main() {
  std::vector<double> weights{3.2, 4.7, 2.1, 5.5, 9.8, 7.4, 1.6, 9.3};
  std::cout << "Printing out all the weights: " << std::endl;

  for (std::vector<double>::iterator it = weights.begin(); it != weights.end();
       it++) {
    std::cout << *it << " ";  // Corrected to dereference the iterator
  }
  std::cout << std::endl;
  std::map<std::string, std::string> abbrevs{{"AL", "Alabama"},
                                             {"CA", "California"},
                                             {"GA", "Georgia"},
                                             {"TX", "Texas"}};
  std::map<std::string, double> populations{
      {"CA", 39.2}, {"GA", 10.8}, {"AL", 5.1}, {"TX", 29.5}};
  std::cout << "\nPrinting out the state populations: " << std::endl;

  for (std::map<std::string, double>::iterator it = populations.begin();
       it != populations.end(); it++) {
    std::string state_abb = it->first;
    double state_population = it->second;
    std::string state_fullname = abbrevs.at(state_abb);
    std::cout << "Population of " << state_fullname << ": " << state_population
              << " million" << std::endl;
  }

  std::cout << std::endl;

  std::vector<Plane> fleet{};
  Plane p1{};
  fleet.push_back(p1);

  Plane p2{150, 75, "New York City"};
  fleet.push_back(p2);

  Plane p3(220, 220, "Atlanta");
  Plane p4(75, 75, "Guatemala City");
  Plane p5(125, 94, "Medellin");

  fleet.push_back(p3);
  fleet.push_back(p4);
  fleet.push_back(p5);

  for (std::vector<Plane>::iterator it = fleet.begin(); it != fleet.end();
       it++) {
    if (it->GetSeatCount() == it->GetPassengerCount()) {
      std::cout << it->GetPassengerCount() << " passengers flying to "
                << it->GetDestination() << std::endl;
    }
  }

  for (std::vector<double>::reverse_iterator it = weights.rbegin();
       it != weights.rend(); it++) {
    std::cout << *it << " ";
  }
}
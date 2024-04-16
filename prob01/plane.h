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

#ifndef PLANE_H
#define PLANE_H

#include <string>

class Plane {
 public:
  Plane();
  Plane(int seat_count, int passenger_count, const std::string &destination);

  int GetPassengerCount() const;
  void SetPassengerCount(int passengers);
  int GetSeatCount() const;
  void SetSeatCount(int seats);
  const std::string &GetDestination() const;
  void SetDestination(const std::string &dest);

 private:
  int seatcount_;
  int passengercount_;
  std::string destination_;
};

#endif  // PLANE_H
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

#include "plane.h"

Plane::Plane()
    : seatcount_(121), passengercount_(121), destination_("Fullerton") {}

Plane::Plane(int seat_count, int passenger_count,
             const std::string &destination)
    : seatcount_(seat_count),
      passengercount_(passenger_count),
      destination_(destination) {}

int Plane::GetPassengerCount() const {
  return passengercount_;
}

void Plane::SetPassengerCount(int passengers) {
  passengercount_ = passengers;
}

int Plane::GetSeatCount() const {
  return seatcount_;
}

void Plane::SetSeatCount(int seats) {
  seatcount_ = seats;
}

const std::string &Plane::GetDestination() const {
  return destination_;
}

void Plane::SetDestination(const std::string &dest) {
  destination_ = dest;
}
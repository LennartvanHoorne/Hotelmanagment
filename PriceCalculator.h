/*
 * In this class the price of each stay is being calculated.
 */


#ifndef HOTELMANAGEMENT_PRICECALCULATOR_H
#define HOTELMANAGEMENT_PRICECALCULATOR_H

#include <iostream>

class PriceCalculator {
private:
    const int Fancy = 60;           // Two different rooms in two different price classes
    const int Poor = 30;
    int AmountOfRooms;              // Private information about duration of stay, amount of rooms and the eventual price
    int AmountOfDays;
    int PriceOfStay;
public:
// Variables
    int AmountOfRooms_;             // Public information to change amount of rooms and amount of days
    int AmountOfDays_;
// Constructors
    int SetAmountOfDays();                 // Function to set the amount of days
    int SetAmountOfRooms();                // Function to set the amount of rooms
    int Price();                           // Function to calculate the price
    int GetPrice();                        // Function to show the price in the console
    void BookRoomFromPriceCalculator();
};

#endif //HOTELMANAGEMENT_PRICECALCULATOR_H

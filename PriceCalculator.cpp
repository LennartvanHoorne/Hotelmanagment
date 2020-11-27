//
// Created by LENNART-LAPTOP on 10-11-2020.
//

#include "PriceCalculator.h"

/**
 * In this function the amount of days are set for the calculation
 * @return int AmountOfDays
 */
int PriceCalculator::SetAmountOfDays() {
    std::cout << "How many nights are you planning to stay?" << std::endl;
    std::cin >> AmountOfDays_;
    if (AmountOfDays_ < 0)
        std::cerr << "Amount of days is less then zero!" << std::endl;
    else if (AmountOfDays_ > 100)
        std::cerr << "Maat ga niet meer dan 100 dagen op vakantie!" << std::endl;
    else
        AmountOfDays = AmountOfDays_;
    return AmountOfDays;
}

/**
 * In this function the amount of rooms are set for the calculation
 * @return int AmountOfRooms
 */
int PriceCalculator::SetAmountOfRooms() {
    std::cout << "How many rooms would you like to book?" << std::endl;
    std::cin >> AmountOfRooms_;
    if (AmountOfRooms_ < 0) {
        std::cerr << "Amount of rooms is less then zero!" << std::endl;
    }
    else if (AmountOfRooms_ > 10) {
        std::cerr << "Er zijn niet meer dan 10 kamers kerel" << std::endl;
    }
    else {
        AmountOfRooms = AmountOfRooms_;
    }

    return AmountOfRooms;
}

/**
 * In this function the price is calculated
 * @return int PriceOfStay
 */
int PriceCalculator::Price() {

    std::string Choice;

    std::cout << "Would you like an expensive or cheap room" << std::endl;
    std::cin >> Choice;

    if (Choice == "expensive") {
        PriceOfStay = AmountOfDays * AmountOfRooms * Fancy;
    } else if (Choice == "cheap") {
        PriceOfStay = AmountOfDays * AmountOfRooms * Poor;
    } else {
        std::cerr << "This is not an option" << std::endl;
    }

    return PriceOfStay;
}

/**
 * In this function the calculated price is called
 * @return int PriceOfStay
 */
int PriceCalculator::GetPrice() {
    std::cout << PriceOfStay << std::endl;
    return PriceOfStay;
}

/**
 * In this function you choose if you want to book the room for the duration
 * @return
 */
void PriceCalculator::BookRoomFromPriceCalculator() {
    char RoomBookChoice;
    std::cout << "Do you want to book a room for the entered values? (Y/N)" << std::endl;
    std::cin >> RoomBookChoice;
    // Go back to MainMenu
    if (RoomBookChoice == 'N') {
        return;
    }
        // Store information to book the room
    else if (RoomBookChoice == 'Y') {
        // Refer to function to book a room... BookRoom::BookRoomFromCalculator
        std::cout << "Your information has been stored" << std::endl;
    } else
        std::cout << "This is not an option, type Y or N" << std::endl;
}

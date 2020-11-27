//
// Created by LENNART-LAPTOP on 17-11-2020.
//

#include "PriceCalculator.h"
#include "MainMenu.h"
#include <iostream>
#include <string>
#include <sstream>

int MainMenu::MainMenuChoice() {
    std::stringstream ss;
    std::string ChoiceMainMenuString;

    std::cout
            << "-------------------------------------------------\n-------------------------------------------------\n";
    std::cout << "    Choose from the following options.\n";
    std::cout << "    1. Get information list of rooms and customers.\n";
    std::cout << "    2. Book a Room.\n";
    std::cout << "    3. Calculate the price for a single stay.\n";
    std::cout << "    10. Quit the program." << std::endl;
    // You can add more options the further along we get into the project.
    std::cin >> ChoiceMainMenuString;

    ss << ChoiceMainMenuString;

    ss >> ChoiceMainMenu_;

    if (ChoiceMainMenu_ < 0 || ChoiceMainMenu_ > 10) {
        std::cerr << "This is not one of the options" << std::endl;
    } else if (ss.good() || (ChoiceMainMenu_ == 0 && ChoiceMainMenuString[0] != '0')) {
        std::cerr << "This is not an integer" << std::endl;
    } else {
        ChoiceMainMenu = ChoiceMainMenu_;
    }
    return ChoiceMainMenu;
}

void MainMenu::MainMenuStart() {
    ChoiceMainMenu = MainMenuChoice();

    if (ChoiceMainMenu == 10) {
        std::cout << "Thank you for using the system" << std::endl;
        exit(-1);
    }

    if (ChoiceMainMenu == 3) {

        PriceCalculator CalculatedPrice;
        CalculatedPrice.SetAmountOfDays();
        CalculatedPrice.SetAmountOfRooms();
        CalculatedPrice.Price();
        CalculatedPrice.GetPrice();
        CalculatedPrice.BookRoomFromPriceCalculator();

    }
    MainMenuStart();

}


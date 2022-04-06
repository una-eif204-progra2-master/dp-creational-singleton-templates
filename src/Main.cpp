//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <ostream>
#include <stdexcept>
#include "ProductDatabase.h"
#include "UserDatabase.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Creation pattern - Singleton with Generics" << endl << endl;

    try {
        double price1 = ProductDatabase::getInstance().getPrice("PS5 Game: Call of Duty");
        cout << "First Request [DB Products - New Instance] [PS5 Game: Call of Duty] Price: " << price1 << endl;

        int age1 = UserDatabase::getInstance().getAge("Mike");
        cout << "First Request [DB Users - New Instance] [Mike] Age: " << age1 << endl << endl;

        double price2 = ProductDatabase::getInstance().getPrice("PS5 Game: Fifa");
        cout << "Second Request [DB Products - Same Instance] [PS5 Game: Fifa] Price: " << price2 << endl;

        int age2 = UserDatabase::getInstance().getAge("Caro");
        cout << "First Request [DB Users - New Instance] [Caro] Age : " << age2 << endl << endl;

        double price3 = ProductDatabase::getInstance().getPrice("PS4 Game: Uncharted");
        cout << "Third Request [DB Products - Same Instance] [PS4 Game: Uncharted]     Price : " << price3 << endl;

        int age3 = UserDatabase::getInstance().getAge("Emma");
        cout << "First Request [DB Users - New Instance] [Emma] Age : " << age3 << endl << endl;
    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}
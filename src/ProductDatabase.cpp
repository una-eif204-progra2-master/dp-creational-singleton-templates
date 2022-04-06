//
// Created by Maikol Guzman Alan on 4/5/22.
//

#include "ProductDatabase.h"

ProductDatabase::ProductDatabase() {
    clog << "constructed" << endl;

    // Create a text string, which is used to output the text file
    string productName;
    string sPrice;
    string FILENAME="../../db_products.txt";

    // Read from the text file
    ifstream myReadFile(FILENAME);

    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + FILENAME + "]");
    }

    // Use a while loop together with the getline() function to readByLine the file line by line
    while (getline (myReadFile, productName)) {
        getline(myReadFile, sPrice);
        products[productName] = stod(sPrice); // Convert double from string
    }

    // Close the file
    myReadFile.close();
}

ProductDatabase::~ProductDatabase() {
    clog << "destructed" << endl;
}

double ProductDatabase::getPrice(const string &name) {
    clog << "in use" << endl;
    return products[name];
}

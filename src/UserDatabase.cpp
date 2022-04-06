//
// Created by Maikol Guzman Alan on 4/6/22.
//

#include "UserDatabase.h"

UserDatabase::UserDatabase() {
    clog << "constructed" << endl;

    // Create a text string, which is used to output the text file
    string sUserName;
    string sAge;
    string FILENAME="../../db_users.txt";

    // Read from the text file
    ifstream myReadFile(FILENAME);

    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + FILENAME + "]");
    }

    // Use a while loop together with the getline() function to readByLine the file line by line
    while (getline (myReadFile, sUserName)) {
        getline(myReadFile, sAge);
        users[sUserName] = stoi(sAge); // Convert int from string
    }

    // Close the file
    myReadFile.close();
}

UserDatabase::~UserDatabase() {
    clog << "destructed" << endl;
}

int UserDatabase::getAge(const string &name) {
    clog << "in use" << endl;
    return users[name];
}

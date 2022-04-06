//
// Created by Maikol Guzman Alan on 4/5/22.
//
#include <cstdlib>
#include <ostream>
#include <sstream>
#include <map>
#include <string>
#include <iostream>
#include <fstream>

#ifndef DP_CREATIONAL_SINGLETON_TEMPLATES_SINGLETONDATABASE_H
#define DP_CREATIONAL_SINGLETON_TEMPLATES_SINGLETONDATABASE_H

using namespace std;

template <typename T>
class SingletonDatabase {
protected:
    SingletonDatabase() {};

public:
    SingletonDatabase(SingletonDatabase const &) = delete;
    SingletonDatabase &operator = (SingletonDatabase const &) = delete;

    static T& getInstance(){
        static T singletonDatabase;
        return singletonDatabase;
    }
};

#endif //DP_CREATIONAL_SINGLETON_TEMPLATES_SINGLETONDATABASE_H

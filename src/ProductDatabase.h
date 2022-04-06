//
// Created by Maikol Guzman Alan on 4/5/22.
//

#ifndef DP_CREATIONAL_SINGLETON_TEMPLATES_PRODUCTDATABASE_H
#define DP_CREATIONAL_SINGLETON_TEMPLATES_PRODUCTDATABASE_H

#include "SingletonDatabase.h"

class ProductDatabase final : public SingletonDatabase<ProductDatabase> {
private:
    map<string, double> products;
public:
    ProductDatabase();
    virtual ~ProductDatabase();

    double getPrice(const string &name);
};


#endif //DP_CREATIONAL_SINGLETON_TEMPLATES_PRODUCTDATABASE_H

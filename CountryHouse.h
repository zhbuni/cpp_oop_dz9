//
// Created by user on 29.04.22.
//

#ifndef DZ9_COUNTRYHOUSE_H
#define DZ9_COUNTRYHOUSE_H

#include "Property.h"


class CountryHouse: public Property{
public:
    using Property::Property;
public:
    float calculate_fine() override;
};


#endif //DZ9_COUNTRYHOUSE_H

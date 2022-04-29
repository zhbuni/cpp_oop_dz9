//
// Created by user on 29.04.22.
//

#ifndef DZ9_APARTMENT_H
#define DZ9_APARTMENT_H

#include "Property.h"


class Apartment: public Property{
    using Property::Property;
public:
    float calculate_fine() override;
};


#endif //DZ9_APARTMENT_H

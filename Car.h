//
// Created by user on 29.04.22.
//

#ifndef DZ9_CAR_H
#define DZ9_CAR_H

#include "Property.h"

class Car: public Property{
    using Property::Property;
public:
    float calculate_fine() override;
};


#endif //DZ9_CAR_H

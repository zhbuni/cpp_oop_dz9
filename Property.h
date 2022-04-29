//
// Created by user on 29.04.22.
//

#ifndef DZ9_PROPERTY_H
#define DZ9_PROPERTY_H


class Property {
public:
    float worth;

    explicit Property(float worth){
        this->worth = worth;
    }

    virtual float calculate_fine();
};


#endif //DZ9_PROPERTY_H

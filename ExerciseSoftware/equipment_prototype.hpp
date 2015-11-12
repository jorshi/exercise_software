//
//  equipment_prototype.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef equipment_prototype_hpp
#define equipment_prototype_hpp

#include <stdio.h>
#include <string>


class EquipmentPrototype
{
public:
    virtual EquipmentPrototype* clone() const = 0;
    void setType(std::string);
    std::string getType();
    
protected:
    std::string type;
    std::string desciption;

};

#endif /* equipment_prototype_hpp */

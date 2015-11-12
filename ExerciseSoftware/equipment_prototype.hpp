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
    virtual void setType(std::string);
    virtual std::string getType() const;
    
protected:
    std::string _type;
    std::string _desciption;

};

#endif /* equipment_prototype_hpp */

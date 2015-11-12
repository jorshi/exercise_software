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

#endif /* equipment_prototype_hpp */


class EquipmentPrototype
{
public:
    virtual EquipmentPrototype* clone() const = 0;
    
protected:
    virtual int getId();
    
private:
    int id;
    
};

//
//  treadmill_prototype.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef treadmill_prototype_hpp
#define treadmill_prototype_hpp

#include <stdio.h>
#include "equipment_prototype.hpp"



class TreadmillPrototype: public EquipmentPrototype
{
public:
    TreadmillPrototype();
    TreadmillPrototype(const TreadmillPrototype&);
    EquipmentPrototype* clone() const;
    
};

#endif /* treadmill_prototype_hpp */
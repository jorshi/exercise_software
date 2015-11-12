//
//  bike_prototype.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef bike_prototype_hpp
#define bike_prototype_hpp

#include <stdio.h>
#include "equipment_prototype.hpp"

class BikePrototype: public EquipmentPrototype
{
public:
    BikePrototype();
    BikePrototype(const BikePrototype&);
    
    EquipmentPrototype* clone() const;
};

#endif /* bike_prototype_hpp */

//
//  equipment_proto_factory.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef equipment_proto_factory_hpp
#define equipment_proto_factory_hpp

#include <stdio.h>
#include "treadmill_prototype.hpp"
#include "bike_prototype.hpp"
#include "equipment_prototype.hpp"


class EquipmentProtoFactory
{

public:
    EquipmentProtoFactory();
    EquipmentPrototype* getBike();

    
private:
    BikePrototype* _bike;
    TreadmillPrototype* _treadmill;
};

#endif /* equipment_proto_factory_hpp */

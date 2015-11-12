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
#include <string>
#include <map>
#include "treadmill_prototype.hpp"
#include "bike_prototype.hpp"
#include "equipment_prototype.hpp"

enum EquipmentType
{
    bike, treadmill
};

class EquipmentProtoFactory
{

public:
    EquipmentProtoFactory();
    EquipmentPrototype* getEquipment(enum EquipmentType);
    EquipmentType getEquipmentType(std::string);
    std::string getTypes();
    
private:
    static std::map<std::string, EquipmentType> _type;
    BikePrototype* _bike;
    TreadmillPrototype* _treadmill;
    int _equipmentId;
};

#endif /* equipment_proto_factory_hpp */

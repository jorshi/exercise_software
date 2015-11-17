//
//  equipment_proto_factory.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include <map>
#include "equipment_proto_factory.hpp"

std::map<std::string, EquipmentType> EquipmentProtoFactory::_type;

// Constructor
EquipmentProtoFactory::EquipmentProtoFactory()
{
    _bike = new BikePrototype;
    _treadmill = new TreadmillPrototype;
    
    _type["bike"] = bike;
    _type["treadmill"] = treadmill;
    _equipmentId = 1;
}

// Destructor
EquipmentProtoFactory::~EquipmentProtoFactory()
{
    delete _bike;
    delete _treadmill;
}

// Get new equipment object. Clone prototype
EquipmentPrototype* EquipmentProtoFactory::getEquipment(EquipmentType type)
{
    EquipmentPrototype* newEquipment;
    
    switch (type) {
        case bike:
            newEquipment = _bike->clone();
            break;
        case treadmill:
            newEquipment = _treadmill->clone();
            break;
    }
    
    newEquipment->setId(_equipmentId);
    _equipmentId++;
    
    return newEquipment;
}


// Get the EquipmentType enum from string, throw an error if can't find it
EquipmentType EquipmentProtoFactory::getEquipmentType(std::string type)
{
    if (_type.find(type) == _type.end()){
        throw 1;
    } else {
        return _type[type];
    }
    
}

// Get a list of type TODO -- make this dynamic
std::string EquipmentProtoFactory::getTypes()
{
    return "bike, treadmill";
}

void EquipmentProtoFactory::setId(int currentId)
{
    _equipmentId = currentId;
}

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

//! enum of equipment types
enum EquipmentType
{
    bike, treadmill
};

//! EquipmentProtoFactory Class
/*!
 Factory class for getting new equipment prototype objects
 of a particular type
*/
class EquipmentProtoFactory
{

public:
    
    //! Constructor
    EquipmentProtoFactory();
    
    //! Destructor
    ~EquipmentProtoFactory();
    
    //! Returns a new EquipmentPrototype object of the type requested
    EquipmentPrototype* getEquipment(enum EquipmentType);
    
    //! Maps a string of an equipment type to the enum: EquipmentType
    EquipmentType getEquipmentType(std::string);
    
    //! Get a list of types of equipment available for selection
    std::string getTypes();
    
    //! Set the current ID value (used for adding to an existing protocol buffer
    void setId(int currentId);
    
private:
    
    //! Map of string names for equipment types to EquipmentType enum
    static std::map<std::string, EquipmentType> _type;
    
    //! Pointer to a BikePrototype object for cloning
    BikePrototype* _bike;
    
    //! Pointer to a TreadmillPrototype object for cloning
    TreadmillPrototype* _treadmill;
    
    //! Current unique ID value for equipment
    /*!
     Incremented every time a new piece of equipment is created
    */
    int _equipmentId;
};

#endif /* equipment_proto_factory_hpp */

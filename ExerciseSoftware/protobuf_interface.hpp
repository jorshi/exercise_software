//
//  protobuf_interface.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-16.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef protobuf_interface_hpp
#define protobuf_interface_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include "exercise_equipment.pb.h"
#include "equipment_prototype.hpp"

//! ProtobufInterface Class
/*!
 Class for interacting with google protocol buffers for serializing
 the equipment object for the gym
*/
class ProtobufInterface
{
    
public:
    
    //! Constuctor
    ProtobufInterface(std::string gymFile);
    
    //! Destructor
    ~ProtobufInterface();
    
    //! Add a new piece of equipment to the gym message
    void addEquipment(EquipmentPrototype* e);
    
    //! Write the current gym message
    void writeBuffer();
    
    //! Returns the last equipment ID value stored
    int getLastIdValue();
    
private:
    
    //! Gym message
    exercise_protobuf::Gym _gym;
    std::string _bufferLocation;
    
};

#endif /* protobuf_interface_hpp */

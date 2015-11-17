
//
//  protobuf_interface.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-16.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "protobuf_interface.hpp"


using namespace::std;


// Constructor
ProtobufInterface::ProtobufInterface(std::string gymFile)
{
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    _gym = *new exercise_protobuf::Gym;
    _bufferLocation = gymFile;
    
    fstream input(_bufferLocation, ios::in | ios::binary);
    if (!input) {
        cout << "Creating new Gym Message file: " << _bufferLocation << endl << endl;
    } else if (!_gym.ParseFromIstream(&input)) {
        cerr << "Failed to read current Gym Message file";
        throw 1;
    } else {
        cout << "Successfully loaded current gym" << endl;
        cout << "Current gym size " << _gym.equipment_size() << endl << endl;
    }
}


// Destructor
ProtobufInterface::~ProtobufInterface()
{
    google::protobuf::ShutdownProtobufLibrary();
}


// Add new equipment field to gym from equipment prototype object
void ProtobufInterface::addEquipment(EquipmentPrototype *e)
{
    exercise_protobuf::Equipment* newEquipment = _gym.add_equipment();
    
    // Set fields from equipment prototype object
    newEquipment->set_id(e->getId());
    newEquipment->set_type(e->getType());
}


// Write the current gym including new equipment additions
void ProtobufInterface::writeBuffer()
{
    fstream output(_bufferLocation, ios::out | ios::trunc | ios::binary);
    _gym.SerializeToOstream(&output);
}

int ProtobufInterface::getLastIdValue()
{
    if (_gym.equipment_size() > 0) {
        exercise_protobuf::Equipment lastEquipment = _gym.equipment(_gym.equipment_size() - 1);
        return lastEquipment.id();
    } else {
        return 0;
    }
}





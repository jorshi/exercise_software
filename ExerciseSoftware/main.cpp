//
//  main.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include <iostream>
#include <string>
#include "equipment_proto_factory.hpp"
#include "equipment_prototype.hpp"
#include "protobuf_interface.hpp"


int main(int argc, const char * argv[]) {
    
    if (argc != 2)
    {
        std::cout << "Must pass in the curret Gym_Buffer file";
        return 1;
    }
    
    // Initialize variable needed for the main function
    int num;
    int i = 0;
    std::string typeStr;
    EquipmentType type;
    EquipmentProtoFactory equipmentFactory;
    ProtobufInterface protobufInterface(argv[1]);
    
    // Set the current ID from last inserted equipment
    equipmentFactory.setId(protobufInterface.getLastIdValue() + 1);

    std::cout << "How many new pieces of equipment would you like to create?" << std::endl;
    std::cin >> num;
    
    while (i < num)
    {
        std::cout << "Enter type for new equipment " << i+1 << std::endl;
        std::cout << "Options: " << equipmentFactory.getTypes() << std::endl;
        std::cin >> typeStr;
        
        // Try to get the enum for equipment types from the entered string
        try {
            type = equipmentFactory.getEquipmentType(typeStr);
        } catch (int e) {
            if (e == 1) {
                std::cout << "Invalid type, try again" << std::endl;
                continue;
            } else {
                throw e;
            }
        }

        // Create a new equipment object of that type and store
        EquipmentPrototype* newEquipment = equipmentFactory.getEquipment(type);
        protobufInterface.addEquipment(newEquipment);
        i++;
    }

    // Write the new additions into the gym message
    protobufInterface.writeBuffer();
    return 0;
}

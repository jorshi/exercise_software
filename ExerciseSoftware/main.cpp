//
//  main.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include "equipment_proto_factory.hpp"
//#include "equipment_prototype.hpp"
#include "exercise_equipment.pb.h"


int main(int argc, const char * argv[]) {
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    int num;
    int i = 0;
    std::string typeStr;
    EquipmentType type;
    EquipmentProtoFactory equipmentFactory;
    
    std::cout << "How many new pieces of equipment would you like to create?" << std::endl;
    std::cin >> num;
    
    //exercise_protobuf::Gym gym;
    
    // Arrary of EquipmentPrototype objects for holding the new equipment
    EquipmentPrototype* equipment[num];
    
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
        equipment[i] = equipmentFactory.getEquipment(type);
        i++;
    }
    
    return 0;
}

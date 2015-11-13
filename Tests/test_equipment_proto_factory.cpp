//
//  test_equipment_proto_factory.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-12.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "test_equipment_proto_factory.hpp"


TEST(EquipmentProtoFactoryTest, GetEquipment)
{
    
    EquipmentProtoFactory factory;
    
    // Test ability to get a new exercise bike
    EquipmentPrototype* newBike = factory.getEquipment(bike);
    ASSERT_TRUE(newBike->getType() == "Bike");
    
    // Test ability to get a new treadmill
    EquipmentPrototype* newTreadmill = factory.getEquipment(treadmill);
    ASSERT_TRUE(newTreadmill->getType() == "Treadmill");
}

TEST(EquipmentProtoFactoryTest, GetEquipmentType)
{
    
    EquipmentProtoFactory factory;
    
    // Confirm that "bike" maps to bike
    ASSERT_TRUE(factory.getEquipmentType("bike") == bike);
    
    // Confirm that "treadmill" maps to treadmill
    ASSERT_TRUE(factory.getEquipmentType("treadmill") == treadmill);
    
    // Confirm that an error thrown otherwise
    ASSERT_THROW(factory.getEquipmentType("bikes"), int);
    ASSERT_THROW(factory.getEquipmentType("TreadMillss"), int);
    ASSERT_THROW(factory.getEquipmentType("Aslkfejfe"), int);
    
}
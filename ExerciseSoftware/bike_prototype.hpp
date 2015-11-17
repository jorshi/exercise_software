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

//! BikePrototype Class
/*!
 Used to hold information regarding an exercise bike.
*/
class BikePrototype: public EquipmentPrototype
{
public:
    
    //! Constructor
    BikePrototype();
    
    //! Copy Constructor
    BikePrototype(const BikePrototype&);
    
    //! Clone
    /*!
     Returns a new object that is identical to this one
    */
    EquipmentPrototype* clone() const;
};

#endif /* bike_prototype_hpp */

//
//  treadmill_prototype.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef treadmill_prototype_hpp
#define treadmill_prototype_hpp

#include <stdio.h>
#include <string>
#include "equipment_prototype.hpp"

//! TreadmillPrototype Class
/*!
 Used for holding information regarding a treadmill
*/
class TreadmillPrototype: public EquipmentPrototype
{
public:
    
    //! Constructor
    TreadmillPrototype();
    
    //! Copy Constructor
    TreadmillPrototype(const TreadmillPrototype&);

    //! Clone
    /*!
     Returns a pointer to a new TreadmillPrototype object that is
     identical to this one.
    */
    EquipmentPrototype* clone() const;

};

#endif /* treadmill_prototype_hpp */
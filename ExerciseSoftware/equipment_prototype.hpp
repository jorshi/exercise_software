//
//  equipment_prototype.hpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#ifndef equipment_prototype_hpp
#define equipment_prototype_hpp

#include <stdio.h>
#include <string>

//! EquipmentPrototype Class
/*!
 Abstract Base Class for all Equipment Classes
*/
class EquipmentPrototype
{
public:
    
    //! Clone
    /*!
     Must be overriden in child class
    */
    virtual EquipmentPrototype* clone() const = 0;
    
    //! Set the type of this equipment
    virtual void setType(std::string);
    
    //! Get the type of this equipment
    virtual std::string getType() const;
    
    //! Set the id of this equipment
    virtual void setId(int);
    
    //! Get the id value for this equipment
    virtual int getId() const;
    
protected:
    
    //! Unique ID value of equipment
    int _id;
    
    //! Type of equipment being represented
    std::string _type;

};

#endif /* equipment_prototype_hpp */

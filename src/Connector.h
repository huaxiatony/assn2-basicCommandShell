//
////  Connector.h
////  Assignment2
////
////  Created by Macbook on 11/21/18.
////  Copyright © 2018 Xia Hua. All rights reserved.
////
//
#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <stdio.h>
#include "Base.h"
#include <string>

using namespace std;

class Connector: public Base {
protected:
	Base* leftNode;
	Base* rightNode;
private:
    string textString;
    bool status;
public:
    Connector(){};
    ~Connector(){};
    bool statusTest(){};
    virtual int execute() = 0;
};

#endif /* Connector_h */


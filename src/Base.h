////  Base.h
////  Assignment2
////
////  Created by Macbook on 11/21/18.
////  Copyright © 2018 Xia Hua. All rights reserved.
////
#ifndef BASE_H
#define BASE_H

class Base {
	protected:
    		bool textMsg;
        public:
       		Base(){};
		~Base(){};
       		virtual int execute() = 0;
                virtual bool getTextMsg(){return testMsg;}
                virtual void setTextMsg(bool input){
                	textMsg = input;
                 }
};   
#endif /* Base_h */                                                   

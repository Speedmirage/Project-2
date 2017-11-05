//
//  StringNode.h
//  StringLinkedList
//
//  Created by Addiel Almonte on 11/04/17.
//  Copyright © 2017 Addiel Almonte. All rights reserved.
//

#ifndef StringNode_h
#define StringNode_h
#include <iostream>
using namespace std;

class StringNode
{
private:
    string elem;
    StringNode* next;
    
    friend class StringLinkedList;
};


#endif /* StringNode_h */

 

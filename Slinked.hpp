//
//  StringLinkedList.hpp
//  StringLinkedList
//
//  Created by Addiel Almonte on 9/14/17.
//  Copyright © 2017 Addiel Almonte. All rights reserved.
//

#ifndef StringLinkedList_hpp
#define StringLinkedList_hpp

#include <stdio.h>
#include "GameEntry.hpp"
#include "StringNode.h"

class StringLinkedList {            // a linked list of strings
public:
    StringLinkedList();                // empty list constructor
    ~StringLinkedList();            // destructor
    bool empty() const;                // is list empty?
    const string& front() const;        // get front element
    void addFront(const string& e);        // add to front of list
    void removeFront();                // remove front item list
private:
    StringNode* head;                // pointer to the head of list
};


#endif /* StringLinkedList_hpp */


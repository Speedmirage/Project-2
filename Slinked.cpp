
//  StringLinkedList.cpp
//  StringLinkedList
//
//  Created by Addiel Almonte on 9/14/17.
//  Copyright © 2017 Addiel Almonte. All rights reserved.
//

#include "Slinked.hpp"
#include "StringNode.h"

StringLinkedList::StringLinkedList()            // constructor
: head(NULL) { }

StringLinkedList::~StringLinkedList()            // destructor
{ while (!empty()) removeFront(); }

bool StringLinkedList::empty() const            // is list empty?
{ return head == NULL; }

const string& StringLinkedList::front() const        // get front element
{ return head->elem; }

void StringLinkedList::addFront(const string& e) {    // add to front of list
    StringNode* v = new StringNode;            // create new node
    v->elem = e;                    // store data
    v->next = head;                    // head now follows v
    head = v;                        // v is now the head
}


void StringLinkedList::removeFront() {        // remove front item
    StringNode* old = head;                // save current head
    head = old->next;                    // skip over old head
    delete old;                        // delete the old head
}


//
//  GameEntry.cpp
//  Assigment 2
//
//  Created by Addiel Almonte on 10/29/17.
//  Copyright © 2017 Addiel Almonte. All rights reserved.
//

#include "GameEntry.hpp"
GameEntry::GameEntry(const string& n , int s): Name(n), Score(s){}//constructor

string GameEntry::getName()const { return Name;}
int GameEntry::getScore() const { return Score;}

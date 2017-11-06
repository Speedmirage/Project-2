//
//  GameEntry.hpp
//  Assigment 2
//
//  Created by Addiel Almonte on 10/29/17.
//  Copyright © 2017 Addiel Almonte. All rights reserved.
//

#ifndef GameEntry_hpp
#define GameEntry_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class GameEntry{
    
public:
    GameEntry(const string& n="", int s=0);
    std::string getName() const;
    int getScore() const ;
private:
    std::string Name;
    int Score;
    
};

class GameEntryExept : public GameEntry //RuntimeExpt
{

private:
    string errMSG;
public:
    GameEntryExept(const string& err):errMSG(err){}
    std::string getError(){return errMSG;}
    void setError(string);
    
};

#endif /* GameEntry_hpp */

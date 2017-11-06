//
//  main.cpp
//  Assigment 2
//
//  Created by Addiel Almonte on 10/29/17.
//  Copyright © 2017 Addiel Almonte. All rights reserved.
//

#include <iostream>
#include "Slinked.hpp"
#include "GameEntry.hpp"
int main(int argc, const char * argv[]) {
    
    StringLinkedList s;
    string GameList;
    int intList;
    double doubleList;
    int count;
    string addGL;
    
    string Error = "Unable to enter this score.. List is full";
    
    cout<<"Please input the size of the GameEntry list"<<endl;
    cin>>count;
    
    
    for (int i = 1; i<(count+50); i++) { //Count+50 to be able to utilize the exception handling
        
        cout<<"Please input the score";
        cin>>addGL;
        s.addFront(addGL);
        GameList = s.front();
        //Exception handling below
        try {
            if ( i > count) //i-1 to make it run the exact number of times
                throw GameEntryExept(Error);
        } catch (GameEntryExept& me){
            
            cout<<"Unable to enter this score.. List is full"<<endl; //Exception is working
        }
        
        
        
        
    }
    
    

    
    
    
    return 0;
}

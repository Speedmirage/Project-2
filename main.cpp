
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include "Slinked.hpp"
#include "GameEntry.hpp"

using namespace std;

void display(list<int> g) {
    
    list <int> :: iterator it;
    
    for(it = g.begin(); it != g.end(); ++it)
        
        cout << " " << *it;
    
    cout << '\n';
    
}

int main() {
    
    StringLinkedList s;
    string GameList;
    int intList;
    double doubleList;
    int min = 100;
    
    list <int> gqlist1, gqlist2;
    
    int ch,value;
    
    while(true){
        
        cout<< "Choose your option // 1. Add 2. Display 3. Minimum \n";
        
        std::cin >> ch;
        
        switch(ch) {
                
            case 1:
                
                cout<<"Please enter value to add:";
                
                cin>>value;
                if (value<min)
                    min = value;
                //Exception handleing
                try{
                    
                    if(gqlist1.size()==10) {
                        
                        throw value;//rasising exception if list is full
                        
                    } else {
                        
                        gqlist1.push_front(value);
                        
                    }
                    
                } catch(int x) {
                    
                    cout<<"Exception Has Been Caught...List is full \n";
                    
                    //getting minimum element from the list for replacement
                    
                list <int> :: iterator it=std::min_element(gqlist1.begin(),gqlist1.end()) ;
                    
                if(*it<value){
                        
                    *it=value;
                    std::cout<<"Please be adviced. The last node may have been replaced by a bigger one "<<std::endl;
                        
                    }
                }
                break;
                
                
            case 2:
                
                cout<<"Score board:";
                
                display(gqlist1);
                break;
            case 3:
                std::string choice;
                int rep;
                std::cout<<"Would you like to print the minimum value and replace it? "<<std::endl;
                std::cin>>choice;
                
                if (choice == "Yes" or choice=="yes"){
                    std::cout<<min<<std::endl;
                    std::cout<<"Input the value you would like to replace minimum with "<<std::endl;
                    std::cin>>rep;
                    std::replace(gqlist1.begin(),gqlist1.end(), min,rep);
                }
        }
        
    }
    
    return 0;
    
}


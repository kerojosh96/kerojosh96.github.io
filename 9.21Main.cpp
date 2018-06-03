#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
#include <string>
#include <vector>
//Josh Cook
 using namespace std;
class IntegerSet {
public:
    IntegerSet(vector <bool> Vector1, vector <bool> Vector2)
        : VecOne{Vector1}, VecTwo{Vector2}
    {
    }
    

    
   vector<bool> unionOfSets() { // Checks the values of two vectors and compares them together making. If one has a value, then it is added into a third
       
        vector <bool> VecThree;
        
        for ( int i{0}; i < VecOne.size(); i++) 
        {
            
           if(VecOne[i] == 1 || VecTwo[i] == 1)
           {  
                VecThree.push_back(i);
               VecThree[i] = 1; 
           } else { 
            
                VecThree.push_back(i);
                  VecThree[i] = 0;
            }  
            
     
        }
        return VecThree;
        
     
    }
    string GetOut (vector <bool> x){ // prints a bool vector to the screen and has 1 para
        string a{"["};
        
        for (auto i = x.begin(); i != x.end(); ++i){
          
            a += to_string(x[*i]);
        }
        a += "]";
        return a;
    }
        
    vector<bool> intersectionOfSets() { //Checks to see if a value is in both of the sets
        vector <bool> VecThree;
        for (int i{0}; i < VecOne.size(); i++) {
            if (VecOne[i] == 1 && VecTwo[i] == 1) {
                VecThree.push_back(i);
                VecThree[i] = 1;
            } 
            else {
                VecThree.push_back(i);
                VecThree[i] = 0;
            }
            
        }
        return VecThree;
   }
    
    void insertElement(int num) { //takes a peram and if that num is not in the vector, adds it in to VecOne
        if(num > 0 && num < 100) {
            VecOne[num] = 1;
        } else {
            VecOne[num] = 0;
        }
    }
    
    void deleteElement(int num) { //takes a peram and if that number is in the vector, deletes it from VecOne
        if (num > 0 && num < 100) {
            VecOne[num] = 1;
        } else {
            VecOne[num] = 0;
        }
    }
    
    string isEqual() { //Checking to see if the vectors have the same values
        if ( VecOne == VecTwo) {
            return "\nIS EQUAL";
        }
        else return "\nNOT EQUAL";
    }
        
private:
    vector <bool> VecOne{};
    vector <bool> VecTwo{};
   
};


int main() {
    cout <<"VectorOne{ 0,1,1,1,0,1} VectorTwo{ 0,1,0,1,0,1}\n";
     
    cout <<"We union two objects to get";
    vector <bool> VectorOne{ 0,1,1,1,0,1};
    vector <bool> VectorTwo{ 0,1,0,1,0,1};
    vector <bool> test;
    IntegerSet SetOne{VectorOne, VectorTwo};
    SetOne.insertElement(5);
    SetOne.deleteElement(1);
  SetOne.intersectionOfSets();
    test = SetOne.unionOfSets(); // gives an error for some reason why??
    cout<<SetOne.GetOut(test);
     cout << SetOne.isEqual();
}

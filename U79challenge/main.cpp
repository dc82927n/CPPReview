

#include <iostream>
using namespace std;

void can_you_drive(int, bool); // need because the pointing doesnt reach to the header 

int main (){
    can_you_drive(17, true);
}

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    //age = 0;
    // cout << "enter age" << endl; 
    // cin >> age; 
    
    
    int n =  16 - age;
    
    if (has_car){
    if (age >= 16){
            cout << "Yes - you can drive!" << endl; 
    }else if ( age <= 16){
            cout << "Sorry, come back in " << n << " years you can drive!";
    }else {
    cout << "sorry, you need to buy a car before you can drive";
    }
    }
     
}
    

#include <iostream>
using namespace std; 

int main()
{
    
    const int dollar_value {100};
    const int quarter_value {25}; 
    const int dime_value {10};
    const int nickle_value {5};
    const int penny_value {1}; 
    
    
    int amount {0};
    
    cout << "enter amount" << endl; 
    cin >> amount ; 
    
    int balance {}, dollar {}, quarter {}, dime {}, nickle {}, penny {};  // empty variable to store values
    
    dollar = amount / dollar_value;
    balance = amount % dollar_value;
    
    cout << dollar << endl; 
    
    
    
    
    
    
    
    
    
    
    
    
}

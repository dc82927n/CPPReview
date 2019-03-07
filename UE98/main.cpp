#include <iostream>
#include <iomanip>
#include <string> // important!

using namespace std; // 

int main()
{
    string s0; 
    string s1 {"Apple"};
    string s2 {"Banna"};
    string s3 {"Kiwi"}; 
    string s4 {"apple"}; 
    string s5 {s1}; // Apple 
    string s6 {s1, 0, 3,}; // App
    string s7 (10, 'X'); // XXXXXX
    
    
    cout << s0 << endl; // NO groubae 
    cout << s0.length() << endl;  // empty String
    
    
     cout << "s1 is initiialized to: " << s1 << endl;  
     cout << "s2 is iniitaliezed to: " << s2 << endl ; 
     cout << "s3 is initiialized to: " << s3 << endl;  
     cout << "s4 is iniitaliezed to: " << s4 << endl ; 
    cout << "s5 is initiialized to: " << s5 << endl;  
     cout << "s6 is iniitaliezed to: " << s6 << endl ; 
    cout << "s7 is initiialized to: " << s7 << endl;  
     
    s1[0] = 'b'; // need to be the single ' ' to work becauase it's a char charcter
    cout << "s1 :" << s1 << endl;
    
    // s1.erase(0,5) 
    // string_t // used for a string literal type. 
    
    
}

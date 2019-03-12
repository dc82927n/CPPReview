#include <iostream>
using namespace std;


//    bool allAreEqual(int a, int b, int c);
bool allAreEqual(int a, int b, int c) {
    if  ((a == b) && (b == c) && (a == c)){
        return true; 
    } else {
        return false;
    }
}

//    bool twoAreEqual(int a, int b, int c);
bool twoAreEqual(int a, int b, int c){
    if ((a == b && b != c) || (b == c && c != a) || (a == c && b != a)){
        return true;
    } else 
        return false;
}


//    bool noneAreEqual(int a, int b, int c);
    
    bool noneAreEqual(int a, int b, int c){
        if ((a != b) && (b != c) && ( c != a)){
            return true;
        } else 
            return false;
    }
//    bool areDescending(int a, int b, int c); // true if a >= b >= c
      bool areAscending(int a, int b, int c){
          if((a <= b) && (b <= c)){
              return true;
          } else {
              return false;
          }
      }
      
      
//    bool areDescending(int a, int b, int c); // true if a >= b >= c

    bool areDescending(int a, int b, int c){
          if((a >= b) && (b >= c)){
              return true;
          } else {
              return false;
          }
      }
//    bool strictlyAscending(int a, int b, int c); // true if a < b < c
      
    bool strictlyAscending(int a, int b, int c){
        if((a < b) && (b < c)){
              return true;
          } else {
              return false;
          }
      }
//    bool strictlyDescending(int a, int b, int c); // true if a > b > c

    bool strictlyDescending(int a, int b, int c){
            if((a > b) && (b > c)){
                return true;
            } else {
                return false;
            }
        }

int main()
{
    int first {}; 
    int second {};
    int third {}; 
    
   // int a {};
   // int b {};
   // int c {}; 
    
    cout << "first number? ";
    cin >> first; 
    cout << "second number? ";
    cin >> second; 
    cout << "third number? ";
    cin >> third; 
    
    cout << boolalpha;
    cout << "allAreEqual: " << allAreEqual(first,  second,  third) << endl; 
    cout << "twoAreEqual: " << twoAreEqual(first, second, third) << endl; 
    cout << "noneAreEqual: " << noneAreEqual(first, second, third) << endl; 
    cout << "areAscending: " << areAscending(first, second, third) << endl; 
    cout << "areDescending: " << areDescending(first, second, third) << endl; 
    cout << "strictlyAscending: " << strictlyAscending(first, second, third) << endl; 
    cout << "strictlyDescending: " << strictlyDescending(first, second, third); 
    
}
    /*
    cout << allAreEqual(0, 1, 1) << endl;
    
    
    if (1) {
        cout << "We ran!" << endl;
    }
    
    if (0) {
        cout << "This will not run." << endl;
    }
    
     
        first number? 1
        second number? 2
        third number? 3
        allAreEqual: false
        twoAreEqual: false
        noneAreEqual: true
        areAscending: true
        areDescending: false
        strictlyAscending: true
        strictlyDescending: false
	*/
  
    


 

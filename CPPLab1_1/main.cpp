#include <iostream>
using namespace std;

bool allAreEqual(int a, int b, int c) {
    return a == b == c;
}

bool twoAreEqual(int a, int b, int c){
    if (a == b && b == c){
        return 2
    }
    
}

int main()
{
    cout << allAreEqual(0, 1, 1) << endl;
    
    
    if (1) {
        cout << "We ran!" << endl;
    }
    
    if (0) {
        cout << "This will not run." << endl;
    }
    
	/*
    bool allAreEqual(int a, int b, int c);
    bool twoAreEqual(int a, int b, int c); // false if all three are equal
    bool noneAreEqual(int a, int b, int c);
    bool areAscending(int a, int b, int c); // true if a <= b <= c
    bool areDescending(int a, int b, int c); // true if a >= b >= c
    bool strictlyAscending(int a, int b, int c); // true if a < b < c
    bool strictlyDescending(int a, int b, int c); // true if a > b > c
     
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
  
    
}

 

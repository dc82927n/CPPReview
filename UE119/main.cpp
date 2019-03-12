#include <iostream>
using namespace std; 


int main()
{
	double high_temp{100.7}; 
    
    double *temp_ptr; 
        
    //temp_ptr = nullptr; 
    
   temp_ptr = &high_temp; 
    
    cout << temp_ptr << endl; 
    
}

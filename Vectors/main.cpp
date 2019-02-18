#include <iostream>
#include <vector>

using namespace std; 


int main()
{

    //vector <int> vector1;
  // vector <int> vector2;
    
   // vector1.push_back (10);
   // vector2.push_back (20); 
    
   // cout << vector1.at(0) << endl;
    //cout << vector2.at(1) << endl; 
    
       // vector <int> test1 = {{1,20},{30,40},
             //                   {50,60}, {70,80}};
         
 
   vector<vector<int>> vector_2d {{1,20},{30,40},
                            {50,60}, {70,80}};
                            
 //vector<vector<int>> vector_2d {{1,20},{30,40},
                           // {50,60}, {70,80}};
 
 vector_2d [0][0] = 6;
 vector_2d.at(0).at(1) = 7; // similar to setters 

    // vector <int> vector1;
    //vector <int> vector2;
    //vector_2d.push_back(vector1); 
   // vector_2d.push_back(vector2); 
cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl; 
cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
cout << vector_2d.at(2).at(0) << " " << vector_2d.at(2).at(1) << endl;
    
//    int num1 = 1;
//    int num2 = 2; 
//    int num3 = 3;
//
//    num1 = num2 = num3; 
                                
    //cout << test1(0,0) << " " << test1(0,1) << endl; 
    
}

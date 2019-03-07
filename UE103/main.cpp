#include <iostream>
using namespace std; 



//const double pi {3.14159};


const double pi {3.14159};
double radius{}; 
/*
// doing the radius caculation. 
double volume_cylinder(double radius, int height){
    // this line of code works better becaues we repeating the partically the area of the cirlce
    
        return calc_area_circle(radius) * height; 
    
//    return pi * radius * radius * height; 
}
*/

double calc_area_circle(double radius){
    
  return pi * radius * radius; 
//    
//}

}

double volume_cylinder(double radius, int height){
    // this line of code works better becaues we repeating the partically the area of the cirlce
    
        return calc_area_circle(radius) * height; 
    
//    return pi * radius * radius * height; 
}

// void becaues it's only taking in and printing out data
void area_circle(){
   // double radius{}; 
    cout << "\nEnter the radius of the circle" << endl;
    cin >> radius; 
    cout << "the area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder(){
   // double radius{}
    int height{}; 
    cout << "\nEnter the radius of the cylinder" << endl;
    cin >> radius >> height;  
    cout << "the area of a v with radius " << radius << " height is "  << height << " is " << volume_cylinder(radius, height) << endl;
}

int main()
{
    // calling circle 
    volume_cylinder(); 
    area_circle();
   // volume_cylinder(); 
	return 0;
}

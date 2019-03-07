#include <iostream>
#include <cstring> 
#include <cctype> 


using namespace std;

int main()
{
	char first_name[2] {};
    char last_name[21] {}; 
    char full_name [50] {}; 
    //char temp[50] {}; 
    
    cout << "plese enter your first name " << endl; 
    cin >> first_name; 
    cout << "plese enter your last name " << endl; 
    cin >> last_name; 
                                                    // strlen return the length of the function 
    cout << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << last_name << " your last name has " << strlen(last_name) << " characters" << endl; 
    
    strcpy(full_name, first_name); // copy first_name to full_name 
    strcat(full_name, " "); // concatenate full_name and a space
    strcat (full_name, last_name); // concatenate last_name to full_name
    
    cout << "print out your full name is: " << full_name << endl; 
    
}
    //getline function take in the whole line and ignore whitespace 
    // cout << "Enter your full name: "; 
    // example in use cin.getline(full_name, 50); 50 is the line 
    // count << 'Your Full name is " << full_name << endl; 
    
    //str comp function 
    // example: 
    /*
    (strcomp(temp, fullname) == 0);
    
        for(size_t i(0); i < strlen(full_name); ++i)
    if(isalpha(full_name[i]))
        full_name[i] = to upper(full_name[i])
    
}

*/





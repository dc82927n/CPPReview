#include <iostream>

using namespace std;

int main()
{
	cout << "frank cleaning services" << endl;
    int large {0};
    int small {0};
    
    cout << "how many large rooms"<< endl;
    cin >> large;
    cout << "how many small rooms" << endl; 
    cin >> small; 
    
    const int s_room {25};
    const int l_room {35};
    //const double tax {.8 * cost}; 
    
    int cost {((s_room * small) + (l_room * large)) };
    const double tax {.06 * cost};
  //  int cost {l_room * small};
    cout << "$" << cost << endl;
    cout << tax << endl; 
    double total {cost + tax};
    cout << "$" << total << endl; 
    cout << "est valid for 30 days" << endl; 
    
}

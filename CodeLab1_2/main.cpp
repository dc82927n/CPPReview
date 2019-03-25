#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream sc("/Users/David/Desktop/EditorFiles/CPP/CPPworkSpace/CPPWorkspace/CodeLab1_2/numbers.txt");
    if(!sc) {
        cout << "file not there" << endl;
    }
    double n = 0;
    double temp = 0;
    vector<double> vec;
    double sum = 0;
    double average = 0;
    int num_lines = 0;
    string str = "";
    while(getline(sc, str)) {
        istringstream iss (str);
        iss >> n;
        while(iss >> temp) {
            sum += temp;
            vec.push_back(temp);
        }
        average = sum / n;
        cout << fixed << setprecision(0) << "The average of the " << n << " integers ";
        for(size_t i = 0; i < vec.size(); i++) {
            cout << vec.at(i) << " ";
        }
        cout << "is " << fixed << setprecision(1) << average << endl;
        num_lines++;
        vec.clear();
        sum = 0;
    }
    cout << num_lines << " sets of numbers processed";
    sc.close();
    return 0;
}
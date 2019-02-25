#include <iostream>
#include <map>

#define MIN_PID 300
#define MAX_PID 5000

using namespace std;

int allocate_map();
int allocate_pid();
void release_pid(int);

map<int, int> *pid_map_ptr {};

int main() {
    allocate_map();
    int id = allocate_pid();
    cout << id << endl;
    release_pid(id);
    return 0;
}

int allocate_map() {
    try {
        pid_map_ptr = new map<int, int>;
        for(int i {MIN_PID}; i <= MAX_PID; i++) {
            pid_map_ptr->insert(pair<int, int>(i, 0));
        }
        return 1;
    } catch (bad_alloc& e) {
        return -1;
    }
}

int allocate_pid() {
    for(int i {MIN_PID}; i <= MAX_PID; i++) {
        if(pid_map_ptr->at(i) == 0) {
            pid_map_ptr->at(i) = 1;
            return i;
        }
    }
    return -1;
}
 
void release_pid(int int_pid) {
    pid_map_ptr->at(int_pid) = 0;
}
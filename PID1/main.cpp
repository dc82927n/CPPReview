//david chan
//Cisc 3320
// added 1

#include <iostream>

#define MIN_PID 300
#define MAX_PID 5000

using namespace std;

int allocate_map();
int allocate_pid();
void release_pid(int);

int *pid_map_ptr {nullptr};  //a global pointer to hold the PID data structure(an int array in my case)

int main() {
    //calls allocate_map() to create the PID data structure
    int create_success {allocate_map()};
    cout << ((create_success == 1) ? "PID structure has been created" : "Fail to create PID structure") << endl;
    
    cout << "--------------------------------------------------------------------------" << endl;
    
    //create an array of processes, each process tries to get an identifier by calling allocate_pid
    int processes[10] {};
    for(int i {}; i < 10; i++) {
        processes[i] = allocate_pid();
        if(processes[i] != -1) cout << "Process " << i << " gets PID: " << processes[i] <<endl;
        else cout << "Process " << i << " failed to obtain PID" << endl;
    }
    
    cout << "--------------------------------------------------------------------------" << endl;
    
    //processes 5 and 7 finish and release the identifier
    release_pid(processes[5]);
    processes[5] = -1;
    release_pid(processes[7]);
    processes[7] = -1;
    
    //prints the situation of the processes
    cout << "Situation of the processes after processes 5 and 7 have finished" << endl;
    for(int i {}; i < 10; i++) {
        if(processes[i] != -1) cout << "Process " << i << " gets PID: " << processes[i] <<endl;
        else cout << "Process " << i << " has finished and released the PID" << endl;
    }
    
    cout << "--------------------------------------------------------------------------" << endl;
    
    //create another array of processes, each process tries to get an identifier by calling allocate_pid
    //the first 2 processes should get the PIDs released by the previous finished processes 5 and 7
    int processes2[10] {};
    for(int i {}; i < 10; i++) {
        processes2[i] = allocate_pid();
        if(processes2[i] != -1) cout << "Process " << i + 10 << " gets PID: " << processes2[i] <<endl;
        else cout << "Process " << i + 10 << " failed to obtain PID" << endl;
    }
    
    cout << "--------------------------------------------------------------------------" << endl;
    
    //create an array of processes big enough to take all rest of identifiers from the PID data structure
    //prints the situation of last 10 processes in the array
    int processes3[4682] {};
    for(int i {}; i < 4682; i++) processes3[i] = allocate_pid();
    for(int i {4670}; i < 4682; i++) {
        if(processes3[i] != -1) cout << "Process " << i + 20 << " gets PID: " << processes3[i] <<endl;
        else cout << "Process " << i + 20 << " failed to obtain PID" << endl;
    }
    
    cout << "--------------------------------------------------------------------------" << endl;
    
    //create another array of processes, each process tries to get an identifier by calling allocate_pid
    //none of the new process should be able to get an identifier
    int processes4[10] {};
    for(int i {}; i < 10; i++) {
        processes4[i] = allocate_pid();
        if(processes4[i] != -1) cout << "Process " << i + 4702 << " gets PID: " << processes4[i] <<endl;
        else cout << "Process " << i + 4702 << " failed to obtain PID" << endl;
    }
}

//creates and initializes a data structure for PID; returns -1 if unsuccessful and 1 if successful
int allocate_map() {
    try {
        pid_map_ptr = new int[5000] {};
        return 1;
    } catch (bad_alloc& e) {
        return -1;
    }
}

//allocates and returns a PID; returns -1 if unable to allocate a pid(all pids are in use)
int allocate_pid() {
    if(pid_map_ptr == nullptr) {
        cout << "The pid data structure doesn't exist" << endl;
        return -1;
    }
    for(int i {MIN_PID}; i <= MAX_PID; i++) {
        if(pid_map_ptr[i] == 0) {
            pid_map_ptr[i] = 1;
            return i;
        }
    }
    return -1;
}

//release a pid
void release_pid(int pid) {
    if(pid_map_ptr == nullptr) {
        cout << "The pid structure doesn't exist" << endl;
        return;
    }
    pid_map_ptr[pid] = 0;
}
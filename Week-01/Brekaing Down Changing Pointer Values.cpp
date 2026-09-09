#include <iostream>
#include <string>
using namespace std;

int global_var = 77;

void changePointer(int**p)
{
    //(represents the orginal point)
    *p = &global_var;
}

int main(){
    int local_var = 15;
    cout << "*local_var = " << &local_var << endl;
    
    int* p_to_var = &local_var;
    cout << "--- Before function call ---"<< endl;
    cout << "local_var = " << local_var << endl;
    cout << "p_to_var = " << *p_to_var << endl;
    cout << "*p_to_var = " << p_to_var << endl;
    cout << "*local_var = " << &local_var << endl;
    
    //pass the address of the pointer
    changePointer(&p_to_var);

    cout << "--- After function call ---"<< endl;
    cout << "local_var = " << local_var << endl;
    cout << "p_to_var = " << *p_to_var << endl;
    cout << "*p_to_var = " << p_to_var << endl;
    cout << "*local_var = " << &local_var << endl;
    
}
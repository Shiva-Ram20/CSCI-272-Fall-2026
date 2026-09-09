#include <iostream>

using namespace std;

int main(){
    int size;
    
    cout << "How many numbers? ";
    cin >> size;
    
    int* numbers = new int[size];
    
    for (int i = 0; i < size; i++){
        numbers[i] = (i+1)*10;
    }
    
    for (int i = 0; i < size; i++){
        cout << "After intial loop: " << numbers[i] << endl;
    }
    //outputs 10, 20, 30, 40, 50, etc.
    
    cout << endl;
    
    delete[] numbers;
    
    for (int i = 0; i < size; i++){
        cout << "After delete: " << numbers[i] << endl;
    }
    //memory leak for numbers array!
    
    numbers = nullptr;
    
    for (int i = 0; i < size; i++){
        cout << "After nullptr: " << numbers[i] << endl;
    }
    //doesn't output anything as the numbers pointer is deleted
    
}
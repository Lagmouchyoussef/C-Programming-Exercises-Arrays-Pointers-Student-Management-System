#include <iostream>
using namespace std;

void display_array(int t[], int size) {
    for(int i = 0; i < size; i++) {
        cout << i << ": " << t[i] << endl;
    }
}

float average(int t[], int size) {
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += t[i];
    }
    return sum / size;
}

int search_value(int t[], int size, int x) {
    for(int i = 0; i < size; i++) {
        if(t[i] == x) return i;
    }
    return -1;
}

int max_array(int t[], int size) {
    int max = t[0];
    for(int i = 1; i < size; i++) {
        if(t[i] > max) max = t[i];
    }
    return max;
}

int count_occurrences(int t[], int size, int x) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(t[i] == x) count++;
    }
    return count;
}

int main() {
    int t[10] = {12, 7, 12, 0, -3, 7, 19, 7, 4, 10};
    
    cout << "Array:" << endl;
    display_array(t, 10);
    
    cout << "Average: " << average(t, 10) << endl;
    cout << "Search for 7: " << search_value(t, 10, 7) << endl;
    cout << "Max: " << max_array(t, 10) << endl;
    cout << "Occurrences of 7: " << count_occurrences(t, 10, 7) << endl;
    
    int size;
    cout << "Enter dynamic array size: ";
    cin >> size;
    
    int* dynamic_array = new int[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> dynamic_array[i];
    }
    
    cout << "Dynamic array:" << endl;
    display_array(dynamic_array, size);
    
    delete[] dynamic_array;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Note {
    string module;
    int coef;
    float note;
};

struct Student {
    string name;
    int age;
    Note* notes;
    int size;
    int nbNote;
};

Student init_student(string name, int age, int nb_notes) {
    Student e;
    e.name = name;
    e.age = age;
    e.notes = new Note[nb_notes];
    e.size = nb_notes;
    e.nbNote = 0;
    return e;
}

void display_student(Student e) {
    cout << "Name: " << e.name << endl;
    cout << "Age: " << e.age << endl;
    cout << "Notes: " << endl;
    for(int i = 0; i < e.nbNote; i++) {
        cout << "  " << e.notes[i].module << " (coef " << e.notes[i].coef << "): " << e.notes[i].note << endl;
    }
}

bool add_note(Student& e, string module, int coef, float note) {
    for(int i = 0; i < e.nbNote; i++) {
        if(e.notes[i].module == module) {
            cout << "Error: Module already exists" << endl;
            return false;
        }
    }
    
    if(e.nbNote >= e.size) {
        cout << "Error: No space available" << endl;
        return false;
    }
    
    e.notes[e.nbNote].module = module;
    e.notes[e.nbNote].coef = coef;
    e.notes[e.nbNote].note = note;
    e.nbNote++;
    return true;
}

bool modify_note(Student& e, string module, float new_note) {
    for(int i = 0; i < e.nbNote; i++) {
        if(e.notes[i].module == module) {
            e.notes[i].note = new_note;
            return true;
        }
    }
    return false;
}

bool delete_note(Student& e, string module) {
    for(int i = 0; i < e.nbNote; i++) {
        if(e.notes[i].module == module) {
            for(int j = i; j < e.nbNote - 1; j++) {
                e.notes[j] = e.notes[j + 1];
            }
            e.nbNote--;
            return true;
        }
    }
    return false;
}

float calculate_average(Student e) {
    if(e.nbNote == 0) return 0;
    
    float sum = 0;
    int total_coef = 0;
    
    for(int i = 0; i < e.nbNote; i++) {
        sum += e.notes[i].note * e.notes[i].coef;
        total_coef += e.notes[i].coef;
    }
    
    return sum / total_coef;
}

float max_note(Student e) {
    if(e.nbNote == 0) return 0;
    
    float max = e.notes[0].note;
    for(int i = 1; i < e.nbNote; i++) {
        if(e.notes[i].note > max) {
            max = e.notes[i].note;
        }
    }
    return max;
}

int main() {
    Student s1 = init_student("John", 20, 5);
    
    add_note(s1, "Math", 3, 15.5);
    add_note(s1, "Physics", 2, 14.0);
    add_note(s1, "Programming", 4, 16.5);
    
    cout << "Student information:" << endl;
    display_student(s1);
    
    cout << "Average: " << calculate_average(s1) << endl;
    cout << "Max note: " << max_note(s1) << endl;
    
    modify_note(s1, "Math", 18.0);
    cout << "\nAfter modifying Math note:" << endl;
    display_student(s1);
    
    delete_note(s1, "Physics");
    cout << "After deleting Physics:" << endl;
    display_student(s1);
    
    delete[] s1.notes;
    return 0;
}
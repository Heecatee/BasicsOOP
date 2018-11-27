#include "Student.h"
using namespace std;

int Student::studentId = 0;

Student::Student(){
}

Student::Student(string name, string surname){
    name_ = name;
    surname_ = surname;
    id_ = ++(studentId);
}

void Student::Print(){
    cout << "Student " << id_ << " " << name_ << ", " << surname_ << endl;
}
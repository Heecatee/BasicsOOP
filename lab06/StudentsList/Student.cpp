#include "Student.h"

int Student::studentId = 0;

Student::Student(){}

Student::Student(const char *name, const char *surname){
    //name
    int count = 0;
    while (name[count] != '\0'){
        count++;
    }

    name_ = new char[count+1];
    for (int i=0; i < count + 1; ++i){
        name_[i] = name[i];
    }

    //surname
    count = 0;
    while (surname[count] != '\0'){
        count++;
    }

    surname_ = new char[count+1];
    for (int i=0; i < count + 1; ++i){
        surname_[i] = surname[i]; 
    }

    id_ = ++(studentId);
}

void Student::Print(){
    cout << "Student " << id_ << " " << name_ << ", " << surname_ << endl;
}

void Student::setParentList(StudentsList *studentsList){
    parentList_ = studentsList;
}

StudentsList* Student::ParentList(){ return parentList_; }

char* Student::getName(){ return name_; }

char* Student::getSurname(){ return surname_; }

int Student::getId(){ return id_; }

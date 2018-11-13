#include "StudentsList.h"

StudentsList::StudentsList(){}

StudentsList::StudentsList(const char* listName){
    int count = 0;
    while (listName[count] != '\0'){
        count++;
    }

    listName_ = new char[count+1];
    for (int i = 0; i < count + 1; i++){
        listName_[i] = listName[i];
    }

    studentsList_ = NULL;
}

void StudentsList::AddStudent(Student* student){
    Student** oldList = studentsList_;
    studentsList_ = new Student*[counter_+1];

    for (int i = 0; i < counter_; i++){
        studentsList_[i] = oldList[i];
    }

    if (counter_){
        delete[] oldList;
    }

    studentsList_[counter_] = student;

    student->setParentList(this);
    counter_++;
}

void StudentsList::AddStudent(const char* name, const char* surname){
    Student* student = new Student (name, surname);
    AddStudent(student);
}

void StudentsList::PrintInfo(){
    cout << "Students list: " << listName_ <<" (adress: <" << this << ">)" << endl;
}

void StudentsList::PrintAll(){
    cout << listName_ << endl;
    for (int i = 0; i < counter_; i++){
        cout << "Student " << studentsList_[i]->getId() << ": " << studentsList_[i]->getName() << ", " << studentsList_[i]->getSurname() << endl;
    }
}

StudentsList::~StudentsList(){
    for (int i = 0; i < counter_; i++) {
        delete[] studentsList_[i]->getName();
        delete[] studentsList_[i]->getSurname();
        delete[] studentsList_[i];
    }
    delete[] studentsList_;
    delete[] listName_;
}

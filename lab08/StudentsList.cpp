#include "StudentsList.h"
using namespace std;

StudentsList::StudentsList(string listName){
    listName_ = listName;
    studentsList_ = NULL;
}

StudentsList::StudentsList(const StudentsList& copy){
    counter_ = copy.counter_;
    listName_ = copy.listName_;

    studentsList_ = new Student*[counter_];
    for (int i = 0; i < counter_; i++)
        studentsList_[i] = copy.studentsList_[i];
}

void StudentsList::AddStudent(Student* student){
    Student** oldList = studentsList_;
    studentsList_ = new Student*[counter_+1];

    for (int i = 0; i < counter_; i++)
        studentsList_[i] = oldList[i];

    delete[] oldList;

    studentsList_[counter_] = student;

    counter_++;
}

void StudentsList::PrintInfo(){
    cout << "Students list: " << listName_ << endl;
}

void StudentsList::PrintAll(){
    if(!counter_)
        cout << endl << "Empty list.";
    
    cout << listName_ << endl;
    for (int i = 0; i < counter_; i++)
        studentsList_[i]->Print();
}

void StudentsList::Clear(){
    for (int i = 0; i < counter_; i++)
        studentsList_[i] = nullptr;

    listName_.clear();
    counter_ = 0;
}

StudentsList::~StudentsList(){
    for (int i = 0; i < counter_; i++)
        delete studentsList_[i];
    delete[] studentsList_;
}
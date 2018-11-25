#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(){
		size_ = 0;
}

void GradeBook::insert(const Grade* grade){
    const Grade** tmp = gradeList_;
    gradeList_ = new const Grade*[size_ + 1];
     
    for (int i = 0; i < size_; i++)
        gradeList_[i] = tmp[i];
    
    gradeList_[size_] = grade;

    if(size_)
        delete[] tmp;
  
    ++size_;
}

void GradeBook::addGrade(float grade){
    Grade* newGrade = new Grade(grade);
    insert(newGrade);
}

void GradeBook::print() const{
    cout << "Grades in the book:" << endl;
    for (int i = 0; i < size_; i++) 
        gradeList_[i]->print();
}

GradeBook::~GradeBook(){
    for (int i = 0; i < size_; i++) 
        delete[] gradeList_[i];
    delete[] gradeList;
}

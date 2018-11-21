#include "GradeBook.h"
using namespace std;

int GradeBook::size_ = 0;

GradeBook::GradeBook(){}

void GradeBook::insert(const Grade* grade){
  if (grade->getId() == 1) {
    gradeList_ = new const Grade*[1];
    gradeList_[0] = grade;
  }
  else {
    const Grade** tmp = gradeList_;
    gradeList_ = new const Grade*[grade->getId()];
    
    for (int i = 0; i <= size_; i++)
      gradeList_[i] = tmp[i];
    
    gradeList_[size_] = grade;

    if(size_ > 0){
      delete[] tmp;
    }
  }
  ++size_;
}

void GradeBook::addGrade(float grade){
  Grade* newGrade = new Grade(grade);
  insert(newGrade);
}

void GradeBook::print() const{
  cout << "Grades in the book:" << endl;
  for (int i = 0; i < size_; i++){ 
    gradeList_[i]->print();
  }
}

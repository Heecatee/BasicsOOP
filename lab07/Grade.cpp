#include "Grade.h"
using namespace std;

int Grade::id_ = 0;

Grade::Grade(float grade){
    grade_ = grade;
    id_++;
}

void Grade::print() const{
    cout << "Grade ID=" << id_ << " value=" << grade_ << endl;
}
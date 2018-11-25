#include <iostream>
#include "Grade.h"
#include "GradeBook.h"

using std::cout;

int main()
{
	Grade* firstGrade = new Grade(4.5);
	firstGrade->print();

	cout << "\n";
	GradeBook goodStudents;
	goodStudents.insert(firstGrade);
	goodStudents.print();

	goodStudents.insert(new Grade(4));

	goodStudents.addGrade(3.5);

	goodStudents.print();

	const Grade* secondGrade = new const Grade(5);
	goodStudents.insert(secondGrade);
	goodStudents.print();
	
	return 0;
}
/** Wynik dzialania programu:
Grade ID=1 value=4.5
Grades in the book:
Grade ID=1 value=4.5
Grades in the book:
Grade ID=1 value=4.5
Grade ID=2 value=4
Grade ID=3 value=3.5
Grades in the book:
Grade ID=1 value=4.5
Grade ID=2 value=4
Grade ID=3 value=3.5
Grade ID=4 value=5
*/

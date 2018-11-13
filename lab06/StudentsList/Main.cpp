#include<iostream>
#include "Main.h"

int main ()
{
  StudentsList computerScienceList ("Computer science");
  computerScienceList.PrintInfo();

  computerScienceList.AddStudent(new Student("Rick", "Sanchez"));

  Student* archer = new Student ("Sterling", "Archer");
  archer->Print();
  computerScienceList.AddStudent(archer);
  archer->ParentList()->PrintInfo();

  Student* spiegel = new Student ("Spike", "Spiegel");
  spiegel->Print();
  computerScienceList.AddStudent(spiegel);

  computerScienceList.AddStudent("Duck", "Dodgers");

  std::cout<<"Whole list\n";

  computerScienceList.PrintAll();

  return 0;
}
/* wynik dzialania programu:
Students list: Computer science (address: <adres_listy_studentow>)
Student 2: Sterling, Archer
Students list: Computer science (address: <adres_listy_studentow>)
Student 3: Spike, Spiegel
Whole list
Computer science
Student 1: Rick, Sanchez
Student 2: Sterling, Archer
Student 3: Spike, Spiegel
Student 4: Duck, Dodgers
 */

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile (lub CMakeLists.txt) i Main.cpp)
// nalezy wgrac do UPEL

// imie i nazwisko
//imie i nazwisko

#include <iostream>
#include "Main.h"

int main ()
{
  StudentsList computerScienceList ("Computer science");
  std::cout<<"\n*** List details ***\n";
  computerScienceList.PrintInfo();

  computerScienceList.AddStudent(new Student("Rick", "Sanchez"));

  Student* archer = new Student ("Sterling", "Archer");
  std::cout<<"\n*** Particular student details ***\n";
  archer->Print();
  computerScienceList.AddStudent(archer);

  StudentsList computerScienceListBkp = computerScienceList;
  std::cout<<"\n*** Bkp List details ***\n";
  computerScienceListBkp.PrintInfo();

  std::cout<<"\n*** Everything ***";
  computerScienceList.PrintAll();
  computerScienceList.Clear();
  computerScienceList.PrintAll();

  std::cout<<"\n*** Backup ***";
  computerScienceListBkp.PrintAll();

  return 0;
}
/* wynik dzialania programu:
*** List details ***
Students list: Computer science

*** Particular student details ***
Student 2: Sterling, Archer

*** Bkp List details ***
Students list: Computer science

*** Everything ***
Computer science
Student 1: Rick, Sanchez
Student 2: Sterling, Archer

Empty list.

*** Backup ***
Computer science
Student 1: Rick, Sanchez
Student 2: Sterling, Archer*/
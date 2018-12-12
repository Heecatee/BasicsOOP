// Nazwa pliku wykonywalnego: Complex

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na koñcu tego
// pliku.

// Prosze napisac klasy Rational, Complex reprezentujace
// odpowiednio liczby wymierne (licznik/mianownik) oraz zespolone (Re, Im).
// Dodatkowo, proszê zaimplementowaæ podstawowe operacje na liczbach typu Complex.
// Algebra:
// Jesli dane s¹ dwie liczby zespolone, w postaci kanonicznej:
// a+ib oraz c+id, to odpowiednie dzialania:
// + dodawanie liczb zespolonych: (a + c) + i(b + d)
// * mnozenie liczb zespolonych: (a*c - b*d) + i(a*d + b*c)
// Modulo(...) modul liczby zespolonej: sqrt(a*a + b*b)

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Liczby. Program nalezy kompilowac z flagami -Wall -g.

// Makefile (lub CMakeLists.txt) powinien zawierac rowniez cel "clean", ktory
// usuwa pliki obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy wgrac
// do UPEL

#include <iostream>
#include "Complex.h"

int main() {

  Rational r(1,2);
  r.Print();

  Complex a(1,5);
  a.Print();

  //double aRe = a; // Jesli odkomentowane ma generowac error: cannot convert Complex to double in initialization
  double aRe = double(a); // przypisanie czesci rzeczywistej
  std::cout << "Re(a) = " << aRe <<std::endl;
  std::cout << "Im(a) = " << a.Im() <<std::endl;
  std::cout << "  |a| = " << Complex::Modulo(a) <<std::endl;

  Complex b(4);
  b.Print();

  Complex c = a + b;
  c.Print();

  Complex d((a + 6.)*r);
  d.Print();

  return 0;
}
/** Wynik dzialania programu:
1/2
1+i5
Re(a) = 1
Im(a) = 5
  |a| = 5.09902
4
5+i5
3.5+i2.5
*/
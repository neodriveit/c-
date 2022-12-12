#include <iostream> 
#include <string.h> 
#include <conio.h> 
#define MAXLEN 40 
using namespace std; 
class Osoba { 
 private: 
 char imie[MAXLEN]; // Imie 
 char nazwisko[MAXLEN]; // Nazwisko 
 int pesel; // Pesel 
 public: 
 Osoba(const char* im, const char * nazw, int pes); 
 Osoba(); 
 wczytaj(); 
 wyswietl(); 
 int daj_pesel(); 
 char *daj_nazwisko(); 
 char *daj_imie(); 
}; 
int main() { // Program testowy 
 int pesel; 
 int wybor; 
 Osoba osoba; 
 Osoba osoba2("Jan","Braun",1); 
 osoba2.wyswietl(); 
 osoba.wczytaj(); 
 osoba.wyswietl(); 
 cout <<"Nazwisko: " << osoba.daj_nazwisko(); 
 cout << " pesel: "<< osoba.daj_pesel() << endl; 
}

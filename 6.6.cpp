#include <iostream> 
#include <string.h> 
#include <conio.h> 
#define MAXLEN 40 
using namespace std; 
const int MAX=50; 
class Osoba { 
 private: 
 char imie[MAXLEN]; 
 char nazwisko[MAXLEN]; 
 int pesel; 
 public: 
 Osoba(const char* im, const char * nazw, int pes); 
 Osoba(); 
 wczytaj(); 
 wyswietl(); 
 int daj_pesel() { return pesel; } 
 char * daj_imie() { return imie; }; 
 char * daj_nazwisko() { return nazwisko; } 
}; 
class Baza { 
 int lelem; // aktualna liczba elementow tablicy 
 int koniec; // Indeks ostatniego elementu 
 // Tablica zawierajaca struktury typu Osoba 
 Osoba tab[MAX]; 
 public: 
 Baza() { koniec=0;lelem=0; }; // Konstruktor 
 dodaj(Osoba *os); 
 int szukaj(int pesel, Osoba *os); 
 void wyswietl_liste(); 
 int usun(int pesel); 
}; 

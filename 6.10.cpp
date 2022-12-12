// Demonstracja dziedziczenia ----- 
#include <iostream> 
#include <string> 
using namespace std; 
class Zwierze { 
 public: 
 string rodzaj; 
 Zwierze() { rodzaj = "?"; }; 
 void jedz( ) 
 { cout << "Jem - "; 
 for (int i = 0; i < 3; ++i) 
 cout << "Om Nom Nom Nom "; 
 cout << endl; 
 } 
 
 void pij( ) { 
 cout << "Pije - "; 
 for (int i = 0; i < 3; ++i) 
 cout << "Chlip, chlip "; 
 cout << endl; 
 } 
 
 void spij( ) { 
 cout << "Spi - "; 
 cout << "Chrr...\n"; 
 } 
 }; 
 
 class Pies : public Zwierze { 
 public: 
 string imie; 
 Pies() { rodzaj = "Pies "; } 
 Pies(string im) { rodzaj = "Pies "; imie = im; }; 
 
 void pij( ) { 
 cout << rodzaj << imie << " "; 
 Zwierze::pij(); 
 } 
 
 void spij( ) { 
 cout << rodzaj << imie << " "; 
 Zwierze::spij(); 
 } 
 
 void jedz(); 
 
 void szczekaj() { 
 cout << rodzaj << imie << " Szczeka "; 
 cout << "Hau! hau!...\n"; 
 } 
  void warcz() { 
 cout << rodzaj << imie << " Warczy "; 
 cout << "Wrrrrrr...\n"; 
 } 
 }; 
 
void Pies::jedz() { 
 cout << rodzaj << imie << " "; 
 Zwierze::jedz(); 
} 
 
class Kot:public Zwierze { 
 public: 
 string rodzaj; 
 string imie; 
 Kot() { rodzaj = "Kot "; } 
 Kot(string im) { rodzaj = "Kot "; imie = im; };
 void spij( ); 
 void miaucz(); 
 void pij(); 
 void jedz(); 
 }; 
void Kot::spij( ) {
 cout << rodzaj << imie << " "; 
 Zwierze::spij(); 
 } 
 
void Kot::miaucz() {
 cout << rodzaj << imie << " Miauczy "; 
 cout << "Miauuu!...\n"; 
}
void Kot::pij() { 
 cout << rodzaj << imie << " "; 
 Zwierze::pij(); 
} 
void Kot::jedz() { 
 cout << rodzaj << imie << " "; 
 Zwierze::jedz(); 
} 
int main() { 
 Pies burek("Burek"); 
 Kot Gerwazy("Gerwazy"); 
 // Pies ---- 
 burek.jedz(); 
 burek.pij(); 
 burek.warcz(); 
 burek.szczekaj(); 
 burek.spij(); 
 // Kot ------- 
 Gerwazy.jedz(); 
 Gerwazy.pij(); 
 Gerwazy.spij(); 
 Gerwazy.miaucz(); 
 return 0;
}

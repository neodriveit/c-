#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
srand(time(NULL ));
int x = rand() % 10000;
int y, i;
cout << "Zgadnij liczbe od 0-10000\n\n";
while(x!=y) {i++;
if(x>=0 && x<=10000) {
	cin >> y;
	if(x==y) cout<<endl<<"BRAWO, zgadles za " << i <<" razem. Szukana liczba to: " << x;
	else {if(y<x) cout << "szukana liczba jest wieksza\n";
			else cout << "szukana liczba jest mniejsza\n";
	}
}else cout << "error error error";
}
return(0);
	
	
}

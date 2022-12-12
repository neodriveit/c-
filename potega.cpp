#include <iostream>
using namespace std;

int main() {
	int a, b, wynik;
	cout<<"Podaj podstawe potegi ";
	cin>>a;
	cout<<"Podaj wykladnik potegi ";
	cin>>b;
	if(b==1) wynik=a;
	if(b>1) {
		int i;
		wynik=a;
		for(i=b-1; i>0 ; i--){
		wynik=wynik*a;
		}
		cout<<wynik;
	}
	
	return 0;
}

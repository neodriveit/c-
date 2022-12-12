#include <iostream>
#include <cstdlib>
using namespace std;

int liczba[100];
int maks;

int main(){
for(int i=0;i<100;i++) {
	liczba[i]=rand();
	liczba[i]=liczba[i]%100;
	if(liczba[i]>maks) maks=liczba[i];
	cout<<liczba[i]<<endl;
}
cout<<"maks="<<maks;
return 0;
}

#include <iostream>
using namespace std;

int main(){
	int n;
	int reverseOfn=0;
cout <<"Ingresar numero: ";
cin >> n;
while (n > 0) {
reverseOfn = reverseOfn * 10 +n % 10;
n=n/ 10;
}
cout << "El inverso de n es: "<< reverseOfn;
}

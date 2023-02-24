#include <iostream>

using namespace std;

int main(){
	
	float n1,n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	
	cout << "Digite outro numero: ";
	cin >> n2;
	
	(n1>n2);
	
	if ( n1> n2){
		cout << "FOI UM NUMERO MENOR que o anterior: " << n2 << " CERTOU NEGAAA";
	}else {
		cout << "FOI UM NUMERO MAIOR que o anterior : ";
	}
}

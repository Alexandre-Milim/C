#include <iostream>
using namespace std;

main(){
	
	int mes;
		do {
		cout << "Informe o digito do mes: ";
		cin >> mes;
		
		switch(mes){
			case 0: cout << "Saindo do programa";
			break;
			case 1: cout << "Janeiro" <<endl;
			break;
			case 2: cout << "Feveiro" <<endl;
			break;
			case 3: cout << "marco" <<endl;
			break;
			case 4: cout << "Abril" <<endl;
			break;
			case 5: cout << "maio" <<endl;
			break;
			case 6: cout << "junho" <<endl;
			break;
			case 7: cout << "julho" <<endl;
			break;
			case 8: cout << "agosto" <<endl;
			break;
			case 9: cout << "setembro" <<endl;
			break;
			case 10: cout << "outubro" <<endl;
			break;
			case 11: cout << "novembro" <<endl;
			break;
			case 12: cout << "dezembro" <<endl;
			break;
			default: cout << "informe um mes valido" <<endl;
		}
	}while(mes != 0);
	
} 


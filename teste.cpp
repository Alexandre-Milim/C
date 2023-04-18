#include <iostream>

using namespace std;

int main(){
	
	string primo;
	
	cout << "digite um numero ate 20: ",
	cin >> primo;
	
	if ( primo=="2" or primo=="3" or primo=="5" or primo=="7"){
		
		cout << "e primo";
	}else {
		cout << "nao e primo";
	}
}

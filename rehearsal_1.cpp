#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	double gpa;
	cout << "What is your name?: ";
	cin >> name;
	cout << "What is your GPA?: ";
	cin >> gpa;
	
	if(gpa >= 3.5){
		cout << name << " InW Jrim Jrim!!!" << endl;
	}else{
		cout << "Try harder, " << name << "!!!" << endl;
	}
	
	return 0;
}

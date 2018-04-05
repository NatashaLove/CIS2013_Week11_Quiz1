#include <iostream>

using namespace std;

int main () {
	
	int rows;
	int* comps;
	int** multi_array;
	//int grade;
	//int x;
	cout << "Enter number of rows in the class : " << endl;
	cin >> rows;
	cout << endl;
	
	cols = new int [rows];
	
	for (int i=0; i <rows; i++) {
		int tmp;
		cout << "Enter number of computers in row " << i << " : ";
		cin >> tmp;
		cols [i] = tmp;
		multi_array [i] = new int* [tmp];
		
	}
	
	for (int x=0; x <rows; x++) {
		cout<< "Row " << x;
		
		for (int y=0; y < comps; y++) {
			
			cout<< " " << "---";
		}
		
		cout <<endl;
	}
	return 0;
}	
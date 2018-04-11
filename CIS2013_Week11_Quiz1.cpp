#include <iostream>

using namespace std;
typedef unsigned char* ByteArray;
//void print (ByteArray[rows]);

void print(unsigned char** board, int x, int y);


int main () {
	
	int rows;
	int comps;
	int grade;
	int x;
	
	cout << "Enter number of rows in the class : " << endl;
	cin >> rows;
	
	ByteArray *room = new ByteArray[rows];
	
	//int* room = new int [rows];
    //for (int i=0; i<rows; i++)	{
	//	room[i] = new unsigned char [x];
		//room [i] =x;
		cout << "Enter number of computers in a row " <<endl;
		cin >> x;
		cout << "Number of computers in a row : " << x << endl;
					
		
	//}
	
	print (room, rows, x);
	
	/*
	for (int a = 0; a < rows; a++)
		
	{
		cout << "Row " << a;
		for (int b = 0;b < x; b++)
		{
			cout<< " " << "---";
		}
		cout << endl;
	}
	*/
	
	cout << " Pick a row/computer to set a grade on: " << endl;
	cin >> rows;
	cin >> x;
	cout << "You picked row " << rows << " and computer " << x<< endl; 
	cout << " The grade is: " ;
	cin >> grade;
	
	/*
	for (int a = 0; a < rows; a++)
		
	{
		cout << "Row " << a;
		for (int b = 0;b < x; b++)
		{
			cout<< " " << grade;
		}
		cout << endl;
	}
	*/
	
	return 0;
}

void print(unsigned char** board, int x, int y)
{

	for (int i = 0; i < y; i++)
	{
		cout << "Row " <<i << y;
		
		for (int j = 0; j < x;j++)
		{
			cout << board[i][j]= '-' << ' ';
		}
		cout << '\n';
	}
	cout<< endl;
}
 

/*
void print (ByteArray[rows]) {
	
for(int x=0; x<a; x++) {
	cout << "Row " <<x << a;
	for(int y=0; y<b; y++) {
		cout << " " << rows [x][y] << "---";
		
	}
	cout << endl;
}
}*/
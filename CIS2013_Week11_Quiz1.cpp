#include <iostream>

using namespace std;
typedef unsigned char* ByteArray;
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
	
	//print (room, rows, x);
	
	for (int a = 0; a < rows; a++)
		
	{
		cout << "Row " << a;
		for (int b = 0;b < x; b++)
		{
			cout<< " " << "---";
		}
		cout << endl;
	}
	
	//cout << 
	
	return 0;
}


void print(unsigned char** board, int x, int y)
{

	cout << '\t';
	for (int i = 0; i < x;i++)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = 0; i < y; i++)
	{
		cout << i << '\t';
		for (int j = 0; j < x;j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << '\n';
	}
	cout<< endl;
}
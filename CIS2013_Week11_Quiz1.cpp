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
		
			//Надо инициализировать каждую row массива
			
	for (int i = 0; i < rows; i++)
	{
		unsigned char* t = new unsigned char[x];
		room[i] = t;
		for (int j = 0;j < x; j++, t++)
		{
			*t = '-';
		}
		//предыдущее равносильно следующему
		/*for (int j = 0; j < x; j++)
		{
			room[i][j] = '-';
		}*/
	}
		
		cout << "Number of computers in a row : " << x << endl;
					
		
	//}
	
	print (room, rows, x);
	
	
	/*for (int a = 0; a < rows; a++)
		
	{
		cout << "Row " << a;
		for (int b = 0;b < x; b++)
		{
			cout<< " " << "---";
		}
		cout << endl;
	}
	*/
	
		//Мы не можем менять x и rows - они постоянны - это размеры комнаты! 
	/*cin >> rows;
	cin >> x;*/
	
	int row;
	int column;
	char end;
	while (1)
	{
	
	cout << " Pick a row/computer to set a grade on: " << endl;
	cin >> row;
	cin >> column;
	cout << "You picked row " << row << " and computer " << column << endl; 
	cout << " The grade is: " ;
	cin >> grade;
	
	
	room[row][column] = grade;
		print(room, rows, x);

		cout << " Thats all? (Y/N)";
		cin >> end;
		if (end == 'Y')
			break;
	}
	

	/*for (int i=0; i<=rows;i++){
		cout << "Row " << i << ": ";
		for(int j=0;j<=room[i];j++){
			if((i==rows)&&(j==x)){
			cout << grade;}
			else cout << "--- ";
			
		}

	}
	*/
	
	
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

void print(unsigned char** board, int rows, int columns)
{

		cout << '\t';
	for (int i = 0;i < columns;i++)
	{
		cout << i<<' ';
	}
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "Row " << i<<'\t';

		for (int j = 0; j < columns;j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << endl;
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
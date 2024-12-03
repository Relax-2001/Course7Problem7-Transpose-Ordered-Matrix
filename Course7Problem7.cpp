#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillMatrixWithOrderdNumbers(short Arr[3][3] , short Rows , short Cols)
{
	short Counter = 0;
	for (short i = 0 ; i < Rows ; i ++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			Arr[i][j] = ++Counter;
		}
	}


}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			cout << setw(3) << Arr[i][j] << "\t";
		}
		cout << "\n";
	}
}

void TransposeMatrix(short Arr[3][3] , short TransposedArr[3][3] , short Rows , short Cols)
{

	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			TransposedArr[j][i] = Arr[i][j];
		}
	}


}

int main()
{
	srand((unsigned)time(NULL));
	
	short Arr[3][3] , ArrTransposed[3][3];

	FillMatrixWithOrderdNumbers(Arr , 3 , 3 );
	
	cout << "\n Orderd 3x3 matrix elements :\n";
	PrintMatrix(Arr , 3 , 3);


	TransposeMatrix(Arr , ArrTransposed , 3 , 3);
	cout << "\n Transposed 3x3 matrix elements :\n";
	PrintMatrix(ArrTransposed, 3, 3);

	

}


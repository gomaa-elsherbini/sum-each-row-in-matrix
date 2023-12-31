#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 100);
		}
	}
}
void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	cout << "The Following is a 3x3 random matrix\n";
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout<< setw(3)<<arr[i][x]<<"	";
		}
		cout << endl;
	}
	cout << endl << endl;
}

int sumArrElements(int arr[3], int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void sumEachRowInMatrix(int arr[3][3], int Rows, int Colos)
{
	cout << "The Following is summtion each row in a 3x3 random matrix\n";
	for (int i = 0; i < Rows; i++)
	{
		cout << "Sum " << i + 1 << " = ";
		cout << sumArrElements(arr[i], Colos) << endl;
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];

	fill3X3MatrixWithRandomNumbers(arr, 3, 3);
	printMatrix3X3(arr, 3, 3);
	sumEachRowInMatrix(arr, 3, 3);


	system("pause>0");

	return 0;
}
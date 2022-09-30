#include<Windows.h>
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n--------------------------------------------------\n"

const int ROWS = 5;
const int COLS = 3;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(float arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);

void ReversePrint(int arr[], const int n);
void ReversePrint(double arr[], const int n);
void ReversePrint(char arr[], const int n);
void ReversePrint(float arr[], const int n);
void ReversePrint(int arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(double arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(char arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(float arr[ROWS][COLS], const int ROWS, const int COLS);


int  Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
float Sum(float arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);


double Avg(int arr[], const int n);
char Avg(char arr[], const int n);
float Avg(float arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);


int  minValueIn(int arr[], const int n);
double  minValueIn(double arr[], const int n);
char  minValueIn(char arr[], const int n);
float  minValueIn(float arr[], const int n);
int  minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double  minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char  minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
float  minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);

int  maxValueIn(int arr[], const int n);
double  maxValueIn(double arr[], const int n);
char  maxValueIn(char arr[], const int n);
float  maxValueIn(float arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(float arr[], const int n, int number_of_shifts);


void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
void shiftRight(float arr[], const int n, int number_of_shifts);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(float arr[], const int n);




void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Array created" << endl;
	Print(arr, n);
	ReversePrint(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts = 3;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	cout << delimiter << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	ReversePrint(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sum(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Avg(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	minValueIn(arr, n);
	Print(arr, n);
	minValueIn(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	maxValueIn(arr, n);
	Print(arr, n);
	maxValueIn(i_arr_2, ROWS,COLS);
	Print(i_arr_2, ROWS, COLS);
	



	




}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}

}
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

void ReversePrint(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void ReversePrint(double arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

	void ReversePrint(char arr[], const int n)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			cout << arr[i] << tab;
		}
	cout << endl;

	}
		
	void ReversePrint(float arr[], const int n)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			cout << arr[i] << tab;
		}
		cout << endl;

	}
	void ReversePrint(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = ROWS-1; i >=0; i--)
		{
			for (int j = COLS-1; j >= 0; j--)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
		cout << endl;
	}
	void ReversePrint(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
		cout << endl;
	}
	void ReversePrint(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
		cout << endl;
	}
	void ReversePrint(float arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
		cout << endl;
	}


int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; i < COLS; i++)
		{
			sum += arr[i][j];
		}
		return sum;
	}

}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; i < COLS; i++)
		{
			sum += arr[i][j];
		}
		return sum;
	}

}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; i < COLS; i++)
		{
		sum += arr[i][j];
		}
		return sum;
	}

}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; i < COLS; i++)
		{
			sum += arr[i][j];
		}
		return sum;
	}

}

double Avg(int arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}

char Avg(char arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}

float Avg(float arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int i_arr_2[5][3];
	int n = ROWS * COLS;
	return Sum(i_arr_2, ROWS, COLS) / (double)n;
}

char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int i_arr_2[5][3];
	int n = ROWS * COLS;
	return Sum(i_arr_2, ROWS, COLS) / (double)n;
}

float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int i_arr_2[5][3];
	int n = ROWS * COLS;
	return Sum(i_arr_2, ROWS, COLS) / (double)n;
}


int  minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double  minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

char  minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
float  minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int  minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
		if (arr[i][j] < min)min = arr[i][j];
		}
			
	}
	return min;
}
double  minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
double min = arr[0][0];
for (int i = 1; i < ROWS; i++)
{
	for (int j = 1; j < COLS; j++)
	{
		if (arr[i][j] < min)min = arr[i][j];
	}

}
return min;
}

char  minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}

	}
	return min;
}

float  minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}

	}
	return min;
}

int  maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

double  maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

char  maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

float  maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}

char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}

float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}


void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		
	
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;


	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;


	}
}

void shiftLeft(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;


	}
}


void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts % n);
}

void shiftRight(double arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts % n);
}

void shiftRight(char arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts % n);
}

void shiftRight(float arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts % n);
}



void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
				
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
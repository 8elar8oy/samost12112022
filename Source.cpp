#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	//Вариант1
	//1
	/*int A[10];
	long long pr = 1;
	for (int i = 0; i < 10; i++)
	{
		A[i] = rand() % 21;
		pr *= A[i];
		cout << A[i] << " ";
	}
	cout << endl;
	cout << pr << endl;*/
	//2
	/*int arr[8];
	int sum=0;
	for (int i = 0; i < 8; i++)
	{
		arr[i] = rand() % 21 - 10;
		if (arr[i] > 0) {
			sum += arr[i];
		}
		cout << arr[i] << " ";
	}
	
	cout << endl;
	cout << sum << endl;*/
	
	//3
	/*int arr[16];
	int k = 0;
	for (int i = 0; i < 16; i++)
	{
		arr[i] = rand() % 21;
		if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
			k++;
		}
		cout << arr[i] << " ";
	}
	
	cout << endl;
	cout << k << endl;
	*/
	//4
	/*int arr[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		arr[i] = rand() % 21-10;
		if (arr[i] % 2 == 0 ) {
			sum+=arr[i];
		}
		cout << arr[i] << " ";
	}
	
		

	cout << endl;
	cout << sum << endl;*/
	
}
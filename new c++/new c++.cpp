
#include <iostream>

using namespace std;
//Algorithm  to find number of desired element in array
void compare(int* arr2,int value) {
	int b = 0,a=0;
	for (int j = 0; j < 10; j++)
	{
		cout << arr2[j] << ",";
		if (arr2[j] == arr2[a])
		{
			if (arr2[j] == value)
			{
				b++;
			}
		}
		a++;
	}
	cout << "\n";
	cout <<" Quantity of " << value << " = " << b;
}
int main()
{
	int*arr = new int[10];
	int value = 0;
	cout << "Please enter a values ​= "<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i +1 << ".value = ";
		cin >> arr[i];
	}
	
	cout << "\n";
	cout << "*-*-*-*-*-*-*-*-*-*";
	cout << "\n";
	
	cout << "Enter the value you are curious about the amount in the array = ";
	cin >> value;
	compare(arr,value);

	cout << "\n";
	cout << "*-*-*-*-*-*-*-*-*-*";
	cout << "\n";
	
	delete arr;
	return 0;
}
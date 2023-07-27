#include <iostream>

using namespace std;

void loopstatement()
{
	// for statement
	string str = "hello";

	for (int i = 0; i < 10; i++)
	{
		cout << "hello" << endl;
	}

	// while statement

	// while
	while (false)
	{
		cout << "hello_" << endl;
	}
	int i = 0;
	while (i < 5)
	{
		cout << "hello_" << endl;
		i++;
	}

	// for
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	int j = 0;
	while (j < 10)
	{
		j++;
	}

	for (int i = 0; false; i++)
	{
		cout << "reza";
	}

	// do while
	i = 0;
	do
	{
		cout << "hello" << endl;
		i++;
	} while (i < 10);
}

// این تابع برای مجموع اعداد از 1 تا ورودی تابع است
int sum(unsigned int number)
{
	if (number <= 0)
	{
		return 0;
	}
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		sum = sum + i;
	}
	return sum;
}

// تابعی که ورودی یک آرایه گرفته و خروجی بزرگترین مقدار آن آرایه را بر می گرداند.
int max(int numbers[], int n)
{
	int len;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
	}
	return max;
}

// main
int main()
{

	cout << "-----------jalase5: while statement ----------" << endl;

	// while
	int counter = 4;
	while (counter < 10 && counter > 0)
	{
		cout << "while is running" << endl;
		counter++;
		counter -= 2;
	}

	//
	int zel = 4;
	while (zel > 0)
	{
		int c = zel;
		while (c > 0)
		{
			if (c % 2 == 0)
			{

				cout << "+";
			}
			else
			{
				cout << "*";
			}
			while (false)
			{
			}
			c--;
		}
		zel--;
		cout << endl;
	}

	int numbers[] = {23, 4, 21, 8, 4};

	cout << "max of numbers: " << max(numbers, 5) << endl;
	char c;
	bool b;
	cout << sizeof(c);
	cout << sizeof(b);
	cout << sizeof(numbers);
	cout << sizeof(numbers[0]);
	cout << sizeof(numbers) / sizeof(numbers[0]);
}
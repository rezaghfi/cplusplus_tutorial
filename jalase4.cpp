// برا استفاده توابع ریاضیاتی
#include <iostream>
#include <cmath>

using namespace std;
void coin(int money)
{
	int ten = money / 10;
	int temp = money % 10;
	int two = temp / 2;
	temp = temp % 2;
	int one = temp;
	cout << "number of ten is:" << ten << endl;
	cout << "number of two is:" << two << endl;
	cout << "number of one is:" << one << endl;
	//	// return array
	//	int arr[3];
	//	arr[0] = ten;
	//	arr[1] = two;
	//	arr[2] = one;
	//	return arr;
}

int *returnArray()
{
	int arr[2];
	arr[0] = 1;
	arr[1] = 2;
	return arr;
}

string mosalas(int n1, int n2, int n3)
{ // آرگومان های وردی تابع
	if (n1 == n2 && n2 == n3)
		return "motesavi ol azla";
	else if (n1 == n2 || n2 == n3 || n1 == n3)
		return "motesavi ol sagheyn";
	else if (n1 != n2 && n1 != n3 && n2 != n3)
		return "mokhtalefol ol azla";
	// else
}

void numberKind(int number)
{

	if (number % 2 == 0)
		cout << "zoje" << endl;
	else
		cout << "fard" << endl;
}

void ifstatement()
{
	// if statement
	if (true)
	{
		cout << "hello" << endl;
	}

	// if else

	int a = 5;

	if (a > 5)
	{
		cout << "a is bigger than 5" << endl;
	}
	else
	{
		cout << "a equal or smaller than 5" << endl;
	}

	// if else if else

	if (a > 5)
	{
		cout << "bigger" << endl;
	}
	else if (a == 5)
	{
		cout << "equal" << endl;
	}

	// if
	if (a > 5)
	{
		cout << "bigger" << endl;
	}

	if (a == 5)
		cout << "equal" << endl;

	a = 4;

	// if else if
	if (a < 5)
	{
		cout << "smaller" << endl;
	}
	else if (a <= 5)
	{
		cout << "equal or smaller" << endl;
	}

	if (a < 5)
	{
		cout << "smaller" << endl;
	}

	if (a <= 5)
		cout << "equal or smaller" << endl;

	// if else if else

	int day = 0;
	// if o to 6 is correct else wrong
	if (day == 0)
		cout << "sat" << endl;
	else if (day == 1)
		cout << "sun" << endl;
	else if (day == 2)
		cout << "mon" << endl;
	else if (day == 3)
		cout << "tue" << endl;
	else if (day == 4)
		cout << "wend" << endl;
	else if (day == 5)
		cout << "thurs" << endl;
	else if (day == 6)
		cout << "fri" << endl;
	else
		cout << "wrong" << endl;

	int input;
	cout << "enter day number";
	cin >> input;

	// if else if else
	if (input == 1)
	{
		cout << "saterday" << endl;
	}
	else if (input == 2)
		cout << "sunday" << endl;
	else if (input == 3)
		cout << "monday" << endl;
	else if (input == 4)
		cout << "tuesday" << endl;
	else if (input == 5)
		cout << "wendsday" << endl;
	else if (input == 6)
		cout << "thursday" << endl;
	else if (input == 7)
		cout << "Friday" << endl;
	else
		cout << "wrong number" << endl;

	// switch عبارت شرطی
	int daynumber = 1;
	switch (daynumber)
	{
	case 1:
		cout << "saterday" << endl;

	case 2:
		cout << "sunday" << endl;
		break;
	case 3:
		cout << "monday" << endl;
		break;
	case 4:
		cout << "teusday" << endl;
		break;
	default:
		cout << "another" << endl;
	}
	// switch
	switch (day)
	{
	case 0:
		cout << "sat" << endl;
		break;
	case 1:
		cout << "sun" << endl;
		break;
	case 2:
		cout << "mon" << endl;
		break;
	case 3:
		cout << "tue" << endl;
		break;
	case 4:
		cout << "wend" << endl;
		break;
	case 5:
		cout << "thurs" << endl;
		break;
	case 6:
		cout << "fri" << endl;
		break;
	default:
		cout << "wrong" << endl;
		break;
	}

	// if

	int height;
	cin >> height;
	if (height > 175)
		cout << "tall" << endl;
	else if (height >= 150)
		cout << "avg" << endl;
	else if (height > 0)
		cout << "small" << endl;
	else
		"wrong";

	int h;
	cout << "1 is for 175 to up, 2 is 150 to 175 , 3 is 1 to 150" << endl;
	cin >> h;
	switch (h)
	{
	case 1:
		cout << "tall" << endl;
		break;
	case 2:
		cout << "avg" << endl;
		break;
	case 3:
		cout << "small" << endl;
		break;
	default:
		cout << "wrong" << endl;
		// break;
	}
}

int main()
{

	cout << "-----------jalase4: if statement ----------" << endl;

	// math();
	ifstatement();
	// loopstatement();
	//  numberKind(10);
	//  متغییر های محلی
	// int num1 = 3, num2 = 3, num3 = 3;
	//	string out = mosalas(num1, num2, num3);
	//
	//	if(out == "motesavi ol azla")
	//		cout << "good mosalase";
	// cout << time(2,1,1);
}
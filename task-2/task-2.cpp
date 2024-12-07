#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//1.

	int firstNumber, secondNumber;
	cout << "Entet integer 1: " << endl;
	cin >> firstNumber;
	cout << "Entet integer 2: " << endl;
	cin >> secondNumber;

	firstNumber = firstNumber + secondNumber;
	secondNumber = firstNumber - secondNumber;
	firstNumber = firstNumber - secondNumber;

	cout << "Integer 1: " << firstNumber << endl;
	cout << "Integer 2: " << secondNumber << endl;

	cout << endl;

	//2.

	double doubleNumber1 = 25.47582943;
	cout << "Double: " << doubleNumber1 << endl;
	cout << "Double as int: " << (int)doubleNumber1 << endl;
	cout << "Double as string, width 20, right alingment: " << std::setw(20) << right << setfill('$') << doubleNumber1 << endl;
	cout << endl;


	//3.

	double doubleNumber2 = 33.123213456;
	cout << "Double with precision 2: " << fixed << setprecision(2) << doubleNumber2 << endl;
	cout << "Double with precision 5: " << fixed << setprecision(5) << doubleNumber2 << endl;
	cout << "Double with precision 10: " << fixed << setprecision(10) << doubleNumber2 << endl;
	cout << "Double in standard notification: " << defaultfloat << doubleNumber2 << endl;
	cout << "Double in e - notation notification: " << scientific << doubleNumber2 << endl;

	cout << endl;

	//4.
	enum WeekDay
	{
		Monday = 1,
		Tuesday = 2,
		Wednesday = 3,
		Thursday = 4,
		Friday = 5,
		Saturday = 6,
		Sunday = 7
	};

	cout << "Monday: " << static_cast<int>(WeekDay::Monday) << endl;
	cout << "Tuesday: " << static_cast<int>(WeekDay::Tuesday) << endl;
	cout << "Wednesday: " << static_cast<int>(WeekDay::Wednesday) << endl;
	cout << "Thursday: " << static_cast<int>(WeekDay::Thursday) << endl;
	cout << "Friday: " << static_cast<int>(WeekDay::Friday) << endl;
	cout << "Saturday: " << static_cast<int>(WeekDay::Saturday) << endl;
	cout << "Sunday: " << static_cast<int>(WeekDay::Sunday) << endl;

	cout << endl;

	//5.
	int number;
	cout << "Enter number: " << endl;
	cin >> number;
	bool boolNumber = number;
	cout << "Bool number: " << boolalpha << boolNumber << endl;
}
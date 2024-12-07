#include <iostream>

using namespace std;

int main()
{
	//1.
	cout << "Task 1: \n";
	int seconds;
	
	cout << "Enter seconds: ";
	cin >> seconds;

	cout << seconds / 3600 << " hours, " << (seconds % 3600) / 60 << " minutes, " << (seconds % 3600) % 60 << " seconds" << endl;
	

	//2.
	cout << "Task 2: \n";
	int a, b, c;
	cout << "Enter three numbers: \n";
	cin >> a >> b >> c;
	
	double sum = a + b + c;
	double product = a * b * c;
	double average = static_cast<double>(sum) / 3;

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "Average: " << average << endl;


	//3.
	cout << "Task 3: \n";
	int num1, num2;
	bool lessThan, equal, moreThan, lessOrEqual;

	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;
	
	lessThan = num1 < num2;
	equal = num1 == num2;
	moreThan = num1 > num2;
	lessOrEqual = num1 <= num2;

	cout << "num1 less than num2: " << boolalpha << lessThan << endl;
	cout << "num1 equal to num2: " << boolalpha << equal << endl;
	cout << "num1 more than num2: " << boolalpha << moreThan << endl;
	cout << "num1 less or equal to num2: " << boolalpha << lessOrEqual << endl;


	//4.
	cout << "Task 4: \n";
	double width, height;
	 
	cout << "Enter width and height of rectangle: \n";
	cin >> width >> height;

	double rectangleArea = width * height;
	double rectanglePerimetet = 2 * (width + height);

	cout << "Area: " << rectangleArea << endl;
	cout << "Perimeter: " << rectanglePerimetet << endl;

	//5.
	cout << "Task 5: \n";
	double radius;

	const double PI = 3.14159;

	cout << "Enter radius of circle: \n";
	cin >> radius;

	double area = PI * radius * radius;
	double circuit = 2 * PI * radius;

	cout << "Area: " << area << endl;
	cout << "Circuit: " << circuit << endl;

}
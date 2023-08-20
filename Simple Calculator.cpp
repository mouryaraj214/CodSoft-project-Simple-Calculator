#include <iostream>
using namespace std;


int main()
{
	char op;
	float num1, num2;
	cout<<"Enter the first value: "<<endl;
	cin >> num1;
	cout<<"Enter the second value: "<<endl;
	cin>>num2;
	cout<<"Please Enter the Operation Which you want to Perform : "<<endl;
	cin >> op;


	switch (op)
	{

		case '+':
			cout << "Sum = " <<num1 + num2;
			break;


		case '-':
			cout << "Subtraction = "<<num1 - num2;
			break;


		case '*':
			cout << "Multiplication = "<<num1 * num2;
			break;


		case '/':
			cout <<"Divison = "<< num1 / num2;
			break;


		default:
			cout << "Error! operator is not correct";

	}


	return 0;
}


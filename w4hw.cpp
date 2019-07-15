//โปรแกรมคำนวณเกรด
#include<iostream>
using namespace std;
int main()
{
	int S;
	cout << "Enter your score (0-100) : ";
	cin >> S;
	cout << "Your get grade : ";
	if (( S >= 0 ) && ( S <= 100)){
			if (( S >= 90) && ( S <= 100 )){
				cout << "A" << endl;
				}
			else if (( S >= 80) && ( S <= 89)){
				cout << "B" << endl;
				}
			else if (( S >= 70) && ( S <= 79)){
				cout << "C" << endl;
				}
			else if (( S >= 60) && ( S <= 69)){
				cout << "D" << endl;
				}
			else ( S <= 59),cout << "F" << endl;
		}
	else {cout << "Error!" << endl;
		 cout << "You over score" << endl;
		}
	return(0);
	
}
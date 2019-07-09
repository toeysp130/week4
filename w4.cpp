#include<iostream>
using namespace std;
int main()
{
	/*int n;
	cout << "Enter integer number : " ;
	cin >> n;
	cout << endl;
	cout << "n = " << n << endl;
	cout << "n >> 1 = " << (n >> 1) << endl;
	cout << "n << 1 = " << (n << 1) << endl;
	cout << "n & 8 = " << (n & 8) << endl;
	cout << "n | 15 = " << (n | 15) << endl;
	cout << "n ^ 10 = " << (n ^ 10) << endl;
	return(0);*/

	/*int Number1,Number2,Number3;
	cout << "Enter first number : ";
	cin >> Number1;
	cout << "Enter second number : ";
	cin >> Number2;
	cout << "Enter third number : ";
	cin >> Number3;
	float Average;
	Average = static_cast<float>(Number1+Number2+Number3)/3; //ใส่ cast เพื่อเก็บค่าเป็นทศนิยม
	cout << "\nAverage of 3 number = " << Average << endl;
	return(0);*/

	/*int q1,q2,q3,qt,mt,fn,tl,a,qta,at;
	cout << "=============QUIZZES==============\n";
	cout << "Enter first quizz (10) : " ;
	cin >> q1;
	cout << "Enter second quizz (10) : " ;
	cin >> q2;
	cout << "Enter third quizz (10) : " ;
	cin >> q3;
	cout << "==============MID-TERM============\n";
	cout << "Enter mid-term (40) : ";
	cin >> mt;
	cout << "==============FINAL==============\n";
	cout << "Enter final (50) : ";
	cin >> fn;
	qt = (q1+q2+q3);
	qta = static_cast<float>(qt/3);
	cout << "Quizz Total : " << qta << endl;
	cout << "Mid term : " << mt << endl;
	cout << "Final : " << fn << endl;
	tl = (mt+fn)/2;
	a = (qt+tl);
	at = qta+mt+fn;
	cout << "Total : " << at << endl;
	cout << "Your score is " << ((a >= 60) ? "PASS":"FAIL") << endl;
	return(0);*/

//โปรแกรมแปลงอุณหภูมิการบ้านครั้งที่แล้วแต่ประยุกต์ใช้ if else
	/*float T=0,TF;
	cout << "Enter Celsius temperature : " ;
	cin >> T;
	TF = T*1.8+32;
	cout << "Fahrenheit = " << TF << endl;
	/cout << "Now weather in Thailand is " << ((TF < 70) ==0? "Hot":"Cool") << endl;/
	if(TF >= 70)
		cout << "Hot" << endl;
	else	
		cout << "Cool" << endl;
	return(0); */

//โปรแกรมดัชนีมวลกาย
	float W,T,BMI,TM,BMIX;
	cout << "Enter weight : " ;
	cin >> W;
	cout << "Enter height : " ;
	cin >> T;
	TM = T/100;
	BMI = W/TM*TM;
	BMIX = BMI/(1.55*1.55);
	cout << "BMI of you is " << BMI << endl;
	cout << "BMI of you is " << BMIX << endl;
	cout << "Your shape is " ;
	if(BMIX <= 18.50)
		cout << "Low Weight" << endl;
	else if((BMIX > 18.50 )&&(BMIX <= 22.90))
		cout << "Good Healt" << endl;
	else if((BMIX > 22.90 )&&(BMIX <= 24.90))
		cout << "Start Fat" << endl;
	else if((BMIX > 24.90 )&&(BMIX <= 29.90))
		cout << "Fat" << endl;
	else cout << "Very Fat" << endl;
	return(0); 

}
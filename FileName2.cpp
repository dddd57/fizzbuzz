#include <iostream>
#include<string>
using namespace std;
bool check(string n, string m)
{
	if (n == m) return true;
	else return false;
}
void func(int a, string b)
{
	if (a % 3 == 0 && a % 5) b = "FizzBuzz";
	else if (a % 5 == 0 && a % 3) b = "Buzz";
	else if (a % 5 && a % 3 == 0) b = "Fizz";
	else b = to_string(a);
}
bool test01()
{
	int a = 4;
	string b;
	func(a, b);
	string expected = "4";
	return check(b, expected);
}
bool test02()
{
	int a = 6;
	string b;
	func(a, b);
	string expected = "Fizz";
	return check(b, expected);
}

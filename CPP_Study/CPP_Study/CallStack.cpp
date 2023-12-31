#include <iostream>
using namespace std;

// 중요!
// 오늘의 주제 : 호출 스택

// 함수 선언
// 함수의 시그니쳐, 모양만 알려주면 됨
void Func1();
// 매개변수 이름 생략 가능
void Func2(int a, int b);
void Func3(float a);

int main()
{
	cout << "main" << endl;
	Func1();

	return 0;
}

void Func1()
{
	cout << "Func1" << endl;

	// push 2
	// push 1
	// call Func2
	Func2(1, 2);

	Func3(10.0f);
}

void Func2(int a, int b)
{
	cout << "Func2" << endl;

	Func3(10);
}

void Func3(float a)
{
	cout << "Func3" << endl;
}
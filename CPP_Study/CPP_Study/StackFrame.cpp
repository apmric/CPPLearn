#include <iostream>
using namespace std;

// ������ ����:����������

// ������ �Է�(�Լ�) �޾Ƽ�, �ֿܼ� ����ϴ� �Լ��� ������
// input : int // output : ����
void PrintNumber(int number)
{
	cout << "�Ѱ��ֽ� ���ڴ� " << number << " �Դϴ�." << endl;
}

// �� ���ڸ� ���ؼ� ������� �޴� �Լ��� ������
// input : int, int // output : int

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}

// F5
// F10 -> �Լ� ����
// F11 -> �� �� ����
int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(a, b);

	PrintNumber(result);

	return 0;

}
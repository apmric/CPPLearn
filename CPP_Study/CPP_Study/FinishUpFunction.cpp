#include <iostream>
using namespace std;

// ������ ���� : �Լ� ������

// �����ε� (�ߺ� ���� : �Լ� �̸��� ����)
// - �Ű����� ������ ��ų�
// - �Ű����� Ÿ���� �ٸ��ų� (������ �ٸ��� ����)
// - ��ȯ �������θ� ���еǴ� �Լ��� �����ε� �Ұ���
int Add(int a, int b)
{
	int result = a + b;
	return result;
}

int Add(int a)
{
	int result = a + 1;
	return result;
}

// �Ұ���
//int Add(int a, int b = 0)
//{
//	int result = a + b;
//	return result;
//}

float Add(float a, float b)
{
	float result = a + b;
	return result;
}

// �⺻ ���ڰ�
void SetPlayerInfo(int hp, int mp, int attack, int gulidid = 0, int castleid = 0)
{

}

// ���� �����÷ο�
int Factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * Factorial(n - 1);
}

int main()
{
	//float result = Add(1.5f, 2.1f);
	//cout << result << endl;

	//SetPlayerInfo(100, 40, 10);

	//int result = Factorial(1000000); -> ���� �����÷ο�
	int result = Factorial(5);
	cout << result << endl;

	// ���丮��
	// 5! = 5 * 4!
	// 4! = 4 * 3 * 2 * 1
	// n! = n * (n-1)!;

	// 1! = 1

	return 0;
}
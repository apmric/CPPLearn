#include <iostream>
using namespace std;

int main()
{
	// �����)
	// �������� � ������ �Է��ϸ�
	// N*N���� ���� ������� ���ھ��!

	/*int input;

	cout << "����: ";
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// �����2)
	// ��.. �׳� N*N���� ���� �����ϱ� �ʹ� �ɽ��ϴ�.
	// 1������ �����ؼ� ���������� �ٸ��� �����ϰ� �������ּ���;

	//int input;

	//cout << "����: ";
	//cin >> input;

	//for (int i = 0; i < input; i++)
	//{
	//	for (int j = 0; j < i + 1; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	// �����3)
	// ����� ���� �����Ǳ� �ߴµ�
	// N������ �����ؼ� �ٸ��� 1���� �پ��� ���·�!

	//int input;

	//cout << "����: ";
	//cin >> input;

	//for (int i = 0; i < input; i++)
	//{
	//	for (int j = 0; j < (input - i); j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	// ������)
	// 2*1=2
	// 2�� ~ 9�ܱ��� �������� ������ּ���
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}

	return 0;
}
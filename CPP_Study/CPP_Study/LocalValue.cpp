#include <iostream>
using namespace std;

// ������ ���� : ���� ������ �� ����

// ���� ����
// ����) �ʱ�ȭ ����, const �� rodata, data, bss
// ������ �Ǽ��� ���� �� �ֱ� ����
int globalValue = 0;

void Test()
{
	cout << "���������� ���� : " << globalValue << endl;
	globalValue++;
}

void IncreaseHP(int hp)
{
	int finalHP = hp + 1;
	//hp = hp + 1;
}

// [�Ű�����][RET][��������(hp=1)] / [�Ű�����(hp=2)][RET][��������(finalHP=2)] / [�Ű�����][RET][��������]
int main()
{
	//cout << "���������� ���� : " << globalValue << endl;
	//globalValue++;

	//Test();

	//// ���� ����
	//int localValue = 1;

	//localValue++;

	int hp = 1;

	cout << "IncreaseHP ȣ�� �� : " << hp << endl;
	IncreaseHP(hp);
	cout << "IncreaseHP ȣ�� �� : " << hp << endl;

	return 0;
}
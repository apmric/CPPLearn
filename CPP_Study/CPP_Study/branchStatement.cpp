#include <iostream>
using namespace std;

// ������ ���� : �б⹮
// �����͸� �޸𸮿� �Ҵ��ϰ� �����ϰ� ����� ���� �˾ƺ�
// ������ �����͸� �̿��ؼ� �����ΰ��� �ϰ� �ʹٸ�?


int main()
{
	//int hp = 100; // ����HP
	//int damage = 120; // �÷��̾� ������

	//hp -= damage; // �ǰ� ����

	//bool isDead = (hp <= 0); // óġ ����

	//// ���Ͱ� �׾����� ����ġ �߰�
	//// ��������� CMP JMP

	///*if(����)
	//	��ɹ�*/

	//// if-else if-else

	//if (isDead)
	//	cout << "���͸� óġ�߽��ϴ�." << endl;
	//else if(hp <= 20)
	//	cout << "���Ͱ� �������� �ֽ��ϴ�." << endl;
	//else
	//	cout << "���Ͱ� �ݰ��߽��ϴ�." << endl;

	const int ROCK = 0;
	const int PAPER = 1;
	const int SCISSORS = 2;

	int input = ROCK;

	// switch-case-break

	// ���� �迭�� ���� �� �ִ�.
	switch (input)
	{
	case ROCK:
		cout << "������ �½��ϴ�." << endl;
		break;
	case PAPER:
		cout << "���� �½��ϴ�." << endl;
		break;
	case SCISSORS:
		cout << "������ �½��ϴ�." << endl;
		break;
	default:
		cout << "�Է� ����!" << endl;
		break;
	}
}
#include <iostream>
using namespace std;

// ������ ���� : �ݺ���

int main()
{
	// while - ���ȿ�
	// if-else ������ �����ϴ�
	// ������ �� ���� �����ϴ°� �ƴ϶�, Ư�� ���Ǳ��� ��� �ݺ��ؾ� �ϴ� ��Ȳ
	// ex) ������ �� ������ ��� ������ �����ض�
	// ex) �������� ������ ������ - ��� �̵��϶�

	/*while (���ǽ�)
	{
		���ɹ�
	}*/

	//int count = 0;

	//while (count < 5)
	//{
	//	cout << "Hello World!" << endl;
	//	count++;
	//}

	/*do
	{
		���ɹ�
	} while(���ǽ�)*/
	
	// ��� �� �� ����
	/*do
	{
		cout << "Hello World!" << endl;
		count++;
	} while (count < 5);*/

	/*for (�ʱ��; ���ǽ�; �����)
	{
		���ɹ�
	}*/

	// break, continue;

	//for (int count = 0; count < 5; count++)
	//{
	//	cout << "Hello World!" << endl;

	//	//
	//	
	//	//
	//	
	//	//
	//}

	// �������� �帧 ���� break, continue

	//int round = 1;
	//int hp = 100;
	//int damage = 27;

	//// ���� ���� : ���� ����
	//while (true)
	//{
	//	hp -= damage;
	//	if (hp < 0)
	//		hp = 0; // ���� ü���� 0���� ����

	//	cout << "Round " << round << "���� ü�� " << hp << endl;
	//	
	//	if (hp == 0)
	//	{
	//		cout << "���� óġ" << endl;
	//		break;
	//	}

	//	if (round == 5)
	//	{
	//		cout << "���� ���� ����" << endl;
	//		break;
	//	}

	//	round++;
	//}

	// 1-10 ������ Ȧ���� ����ϱ�

	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count % 2) == 0);

		if (isEven)
			continue;

		cout << count << endl;
	}
}
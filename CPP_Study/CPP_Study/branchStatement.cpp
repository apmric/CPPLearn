#include <iostream>
using namespace std;

// ������ ���� : �б⹮
// �����͸� �޸𸮿� �Ҵ��ϰ� �����ϰ� ����� ���� �˾ƺ�
// ������ �����͸� �̿��ؼ� �����ΰ��� �ϰ� �ʹٸ�?


int main()
{
	int hp = 100; // ����HP
	int damage = 100; // �÷��̾� ������

	hp -= damage; // �ǰ� ����

	bool isDead = (hp <= 0); // óġ ����

	// ���Ͱ� �׾����� ����ġ �߰�
	// ��������� CMP JMP

	/*if(����)
		��ɹ�*/

	if (isDead)
		cout << "���͸� óġ�߽��ϴ�." << endl;

}
#include <iostream>
using namespace std;

unsigned char flag; // ��ȣ�� ���־� >> �� �ϴ��� ��ȣ��Ʈ�� �������� ����

// �� �� �������� ���� �ٲ��� ���� ����
// constant�� ������ const�� ����(������ ���ȭ �Ѵٰ� ��)
// const�� �ٿ����� �ʱⰪ�� �ݵ�� �����ؾ� ��

// �׷��� const�� �ٲ��� �ʴ� �б� ����
// .rodata?
// ��� C++ ǥ�ؿ��� �� �׷��� �϶�� ���� ����
// �׳� �����Ϸ� (VS) �����̶�� ��
const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;

// ���� ����

// [������ ����]
// .data (�ʱⰪ �ִ� ���)
int a = 2;
// .bss (�ʱⰪ ���� ���)
int b;
// .rodata (�б� ���� ������)
const char* msg = "Hello World";

//int a;
//int b;

int main()
{
	// [���� ����]
	int c = 3;

#pragma region ��Ʈ ����
	// �ǽ�
	// 0b0000 [����][����][����][���ߺξ�]

	// ���� ���·� �����
	flag = (1 << INVINCIBLE);

	// ���� ���¸� �߰��Ѵ� (���� + ����)
	flag |= (1 << POLYMORPH);

	// �������� Ȯ���ϰ� �ʹ�? (�ٸ� ���´� ���� ����)
	// bitmask
	bool invincible = ((flag & (1 << INVINCIBLE)) != 0);

	// �����ΰų� ���� �������� Ȯ���ϰ� �ʹٸ�?
	//bool mask = (1 << 3) || (1 << 1);
	//bool stunOrInvincible = ((flag & mask) != 0);
	bool stunOrInvincible = ((flag & 0b1010) != 0);

#pragma endregion
}
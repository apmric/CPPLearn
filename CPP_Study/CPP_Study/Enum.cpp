#include <iostream>
using namespace std;

// ����ΰ� �˰ڴµ� �ʹ� ���ε��� ��� ����?
// �ϳ��� ��Ʈ�� ����

// ���ڸ� ���� ���ϸ� ù ���� 0���� ����
// �� ���� ������ ���� �� + 1
// 0������ ���
enum ENUM_SRP
{
	ENUM_SCISSORS = 1,
	ENUM_ROCK,
	ENUM_PAPER
};

// #�� ������ -> ��ó�� ���ù�
// #include <iostream> �̶�� ������ ã�Ƽ� �ش� ������ �׳� ����
// 1) ��ġ��(�غ�) 2) ������(���) 3) ��ũ
// �� ��������� ����
#define DEFINE_SCISSORS 1;
#define DEFINE_TEST cout << "Hello World" << endl;

int main()
{
	DEFINE_TEST;
}
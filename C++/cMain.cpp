#include <iostream>

using namespace	std;

//�Լ� �����ε� overloading
void A() { cout << "A()" << endl; }
void A(int b) { cout << "A(int b)" << endl; }
void A(int* p) { cout << "A(int* p)" << endl; }
void A(int a, int b) { cout << "A(int a, int b)" << endl; }

int main()
{
	A();
	A(1);
	A(new int);
	A(1, 2);

}







#pragma region Ŭ�� ����
//#include "Player.h"
//
//int main()
//{
//	Player player;
//
//	while (true)
//	{
//		system("cls");
//		player.Progress();
//		player.Render();
//		Sleep(50);
//	}
//
//}
#pragma endregion









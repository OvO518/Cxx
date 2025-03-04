//#include <iostream>

#pragma region 생산자 소멸자
//using namespace	std;
//
//class Pet
//{
//public:
//	Pet() { cout << "생성" << endl; }
//	~Pet() { cout << "소멸" << endl; }
//};
//
//class Player
//{
//public:
//	Pet* pet = nullptr;
//
//public:
//	~Player()
//	{
//		if (pet != nullptr)
//		{
//			delete pet;
//			pet = nullptr;
//		}
//	}
//
//};
//
//
//int main()
//{
//	{
//		Player player;
//
//		player.pet = new Pet;
//	}
//
//}
#pragma endregion

#pragma region 함수오버로딩
// using namespace	std;
// 
// void A() { cout << "A()" << endl; }
// void A(int b) { cout << "A(int b)" << endl; }
// void A(int* p) { cout << "A(int* p)" << endl; }
// void A(int a, int b) { cout << "A(int a, int b)" << endl; }
// 
// int main()
// {
// 	A();
// 	A(1);
// 	A(new int);
// 	A(1, 2);
// 
// }
#pragma endregion

#pragma region 클라스 예시
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









//#include "Player.h"
//void Player::SetPosition(int x, int y)
//{
//	COORD pos;
//	pos.X = x * 2;
//	pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//
//void Player::Progress()
//{
//	if (GetAsyncKeyState(VK_LEFT))
//	{
//		x--;
//	}
//
//	if (GetAsyncKeyState(VK_RIGHT))
//	{
//		x++;
//	}
//
//
//	if (GetAsyncKeyState(VK_UP))
//	{
//		y--;
//	}
//
//
//	if (GetAsyncKeyState(VK_DOWN))
//	{
//		y++;
//	}
//}
//
//void Player::Render()
//{
//	SetPosition(x, y);
//	std::cout << shape;
//}
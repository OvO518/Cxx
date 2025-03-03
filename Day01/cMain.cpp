#include <iostream>


#pragma region 리뷰
//class Obj	   //클라스
//{
//public:
//	Obj() { std::cout << "생성" << std::endl; }
//	~Obj() { std::cout << "소멸" << std::endl; }
//};
//
//
//
//int main()
//{
//	Obj* p; // 포인터는 stack영역
//	//주소를 담아 났다가 내가 원할때 해제
//
//	std::cout << "=============" << std::endl;
//	p = new Obj; //new Obj : Heap 영역에 할당
//
//	std::cout << "=============" << std::endl;
//
//	delete p;
//
//	return 0; //p 는 사라짐
//}
#pragma endregion

#pragma region 생성자 & 소멸자
//class Obj
//{
//public:
//	//생성자 Constructor
//	Obj() { std::cout << "생성" << std::endl; }
//	//소멸자 Deconstructor
//	~Obj() { std::cout << "소멸" << std::endl; }
//
//};
//
//
//int main()
//{
//	//malloc(sizeof(Obj)); // == malloc(1);
//
//	Obj* p = new Obj; //생성자
//
//	std::cout << "============" << std::endl;
//
//	//free(p);
//
//	//해당 주소 찾아가서 힙에 할당된 new Obj 삭제
//	delete p;		   //소멸자
//	p = nullptr;
//	std::cout << "============" << std::endl;
//
//	return 0;
//}
#pragma endregion

#pragma region 클라스란?
////구조를 만들어서
//
//class Player
//{
//public:
//	const char* name;
//	int lv;
//	float hp;
//	float mp;
//
//public:
//	void Attack() {}
//	void Defence() {}
//	void Walk() {}
//};
//
//int main()
//{
//	Player player;
//	Player player2;
//
//
//	Player players[10];
//
//	players[0].Attack();
//	players[5].Defence();
//
//
//	return 0;
//}
#pragma endregion

#pragma region struct vs class 차이
////private : 외부에서 접근 불가. 내부에서 사용가능
////public : 외부에서 접근 가능. 내부에서도 사용가능
//
//struct MyStruct
//{
//private: //사적인, 공개되지 않는	: 외부에서 접근 불가능
//	//public: 아무것도 안 사용하면
//	int num;
//
//public:
//	void Test()
//	{
//		num = 12;
//	}
//};
//
//class MyClass
//{
//public: //공개된 : 외부에서 접근 가능
//	//private: 아무것도 안 사용하면
//	int num;
//};
//
//
//int main()
//{
//	MyStruct a;
//	MyClass b;
//	b.num = 12;
//
//
//
//	return 0;
//}
#pragma endregion

#pragma region 객체란?
//struct Human
//{
//	//데이터
//	const char* name;
//	int age;
//	float weight;
//	float height;
//
//	//+ 기능
//	void Eat()
//	{
//		std::cout << name << "이가 밥을 먹고" << std::endl;
//	}
//
//	void Poo()
//	{
//		std::cout << name << "이가 화장실을 가고" << std::endl;
//	}
//
//	void Sleep()
//	{
//		std::cout << name << "이가 잠을 잡니다" << std::endl;
//	}
//
//};
//
//
//int main()
//{
//	Human a;
//	a.name = "A";
//	a.age = 12;
//	a.height = 1;
//	a.weight = 2;
//
//	Human b = a;
//
//	//
//	a.age++; //<-- 13
//
//	//b.age? // 다른 사람.
//
//
//
//	return 0;
//}
#pragma endregion

#pragma region Hello world & 구조체에 함수 추가
//struct Obj
//{
//	int	a;
//	int b;
//
//	//+
//	void HelloWorld()
//	{
//		std::cout << "Hello world" << std::endl;
//	}
//
//};
//
//
//int main()
//{
//	Obj a;
//	a.a = 12;
//	a.b = 12;
//	a.HelloWorld();
//
//	return 0;
//}
#pragma endregion
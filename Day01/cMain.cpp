#include <iostream>


#pragma region ����
//class Obj	   //Ŭ��
//{
//public:
//	Obj() { std::cout << "����" << std::endl; }
//	~Obj() { std::cout << "�Ҹ�" << std::endl; }
//};
//
//
//
//int main()
//{
//	Obj* p; // �����ʹ� stack����
//	//�ּҸ� ��� ���ٰ� ���� ���Ҷ� ����
//
//	std::cout << "=============" << std::endl;
//	p = new Obj; //new Obj : Heap ������ �Ҵ�
//
//	std::cout << "=============" << std::endl;
//
//	delete p;
//
//	return 0; //p �� �����
//}
#pragma endregion

#pragma region ������ & �Ҹ���
//class Obj
//{
//public:
//	//������ Constructor
//	Obj() { std::cout << "����" << std::endl; }
//	//�Ҹ��� Deconstructor
//	~Obj() { std::cout << "�Ҹ�" << std::endl; }
//
//};
//
//
//int main()
//{
//	//malloc(sizeof(Obj)); // == malloc(1);
//
//	Obj* p = new Obj; //������
//
//	std::cout << "============" << std::endl;
//
//	//free(p);
//
//	//�ش� �ּ� ã�ư��� ���� �Ҵ�� new Obj ����
//	delete p;		   //�Ҹ���
//	p = nullptr;
//	std::cout << "============" << std::endl;
//
//	return 0;
//}
#pragma endregion

#pragma region Ŭ�󽺶�?
////������ ����
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

#pragma region struct vs class ����
////private : �ܺο��� ���� �Ұ�. ���ο��� ��밡��
////public : �ܺο��� ���� ����. ���ο����� ��밡��
//
//struct MyStruct
//{
//private: //������, �������� �ʴ�	: �ܺο��� ���� �Ұ���
//	//public: �ƹ��͵� �� ����ϸ�
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
//public: //������ : �ܺο��� ���� ����
//	//private: �ƹ��͵� �� ����ϸ�
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

#pragma region ��ü��?
//struct Human
//{
//	//������
//	const char* name;
//	int age;
//	float weight;
//	float height;
//
//	//+ ���
//	void Eat()
//	{
//		std::cout << name << "�̰� ���� �԰�" << std::endl;
//	}
//
//	void Poo()
//	{
//		std::cout << name << "�̰� ȭ����� ����" << std::endl;
//	}
//
//	void Sleep()
//	{
//		std::cout << name << "�̰� ���� ��ϴ�" << std::endl;
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
//	//b.age? // �ٸ� ���.
//
//
//
//	return 0;
//}
#pragma endregion

#pragma region Hello world & ����ü�� �Լ� �߰�
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
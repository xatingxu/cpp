//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class person{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-全票" << endl;
//	}
//};
//
//class student:public person{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-半票" << endl;
//	}
//};
//
//void func(person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	person ps;
//	student st;
//
//	func(ps);
//	func(st);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class A{};
//class B :public A{};
//class person
//{
//public:
//	virtual A* f()
//	{
//		return new A;
//	}
//};
//
//class student :public person
//{
//public:
//	virtual B* f()
//	{
//		return new B;
//	}
//};

//class person{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-全票" << endl;
//	}
//};
//
//class student:public person{
//public:
//	void BuyTicket()
//	{
//		cout << "买票-半票" << endl;
//	}
//};

//class person{
//public:
//	virtual ~person()
//	{
//		cout << "~person()" << endl;
//	}
//};
//
//class student :public person{
//public:
//	virtual ~student()
//	{
//		cout << "~student()" << endl;
//	}
//};
//
////只有派生类student的析构函数重写了person的析构函数，
////下面的delete对象调用析构函数，才能构成多态，才能保证p1和p2指向的对象正确的调用析构函数。
//int main()
//{
//	person* p1 = new person;
//	person* p2 = new student;
//
//	delete p1;//~person()
//	delete p2;//~student()  ~person()
//
//	system("pause");
//	return 0;
//}

//class car
//{
//public:
//	virtual void Drive() = 0;
//};
//
//class BZ :public car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BZ" << endl;
//	}
//};
//
//class BM :public car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BM" << endl;
//	}
//};
//
//void Test()
//{
//	car* pBZ = new BZ;
//	pBZ->Drive();
//
//	car* pBM = new BM;
//	pBM->Drive();
//
//	
//}
//
////final修饰基类的虚函数不能被派生类重写
//class car
//{
//public:
//	virtual void Drive() final{}
//};
//
//class BZ :public car
//{
//public:
//	virtual void Drive() override
//	{
//		cout << "BZ" << endl;
//	}
//};
//
//
//
//class car
//{
//public:
//	virtual void Drive() = 0;
//};
////override修饰派生类虚函数强制完成重写
//class BZ :public car
//{
//public:
//	virtual void Drive() override
//	{
//		cout << "BZ" << endl;
//	}
//};

//class Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func()" << endl;
//	}
//
//private:
//	int _a = 10;
//};
//
//int main()
//{
//	cout << sizeof(Base) << endl;
//	Base b;
//	system("pause");
//	return 0;
//}

//class Base
//{
//public:
//	virtual void func1()
//	{
//		cout << "Base::func1()" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "Base::func2()" << endl;
//	}
//	void func3()
//	{
//		cout << "Base::func3()" << endl;
//	}
//
//private:
//	int _b = 2;
//};
//
//class Deriv :public Base
//{
//public:
//
//	virtual void func1()
//	{
//		cout << "Deriv::func1()" << endl;
//	}
//private:
//	int _c = 8;
//};
//
//int main()
//{
//	Base b;
//	Deriv d;
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <cstdlib>
using namespace std;

//class person{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-全票" << endl;
//	}
//};
//
//class student:public person{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-半票" << endl;
//	}
//};
//
//void func(person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	person ps;
//	func(ps);
//	student st;
//    func(st);
//	
//	system("pause");
//	return 0;
//}

//class Base
//{
//public:
//	virtual void func1()
//	{
//		cout << "Base::func1()" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "Base::func2()" << endl;
//	}
//	
//private:
//	int _b ;
//};
//
//class Deriv :public Base
//{
//public:
//
//	virtual void func1()
//	{
//		cout << "Deriv::func1()" << endl;
//	}
//	virtual void func3()
//	{
//		cout << "Deriv::func3()" << endl;
//	}
//	virtual void func4()
//	{
//		cout << "Deriv::func4()" << endl;
//	}
//private:
//	int _c ;
//};
//
//typedef void(*VFPTR) ();
//void printVtable(VFPTR vTable[])
//{
//	cout << "虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; i++)
//	{
//		printf("第%d个虚函数地址:0x%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Base b;
//	Deriv d;
//	VFPTR* vTableb = (VFPTR*)(*(int*)&b);    
//	printVtable(vTableb);
//
//	VFPTR* vTabled = (VFPTR*)(*(int*)&d);    
//	printVtable(vTabled);
//
//	system("pause");
//	return 0;
//}
//
//

class Base1
{
public:
	virtual void func1()
	{
		cout << "Base::func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base::func2()" << endl;
	}
	
private:
	int _b1 ;
};

class Base2
{
public:
	virtual void func1()
	{
		cout << "Base::func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base::func2()" << endl;
	}

private:
	int _b2;
};

class Deriv :public Base1,public Base2
{
public:

	virtual void func1()
	{
		cout << "Deriv::func1()" << endl;
	}
	virtual void func3()
	{
		cout << "Deriv::func3()" << endl;
	}
	
private:
	int _d1 ;
};
typedef void(*VFPTR) ();
void printVtable(VFPTR vTable[])
{
	cout << "虚表地址>" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; i++)
	{
		printf("第%d个虚函数地址:0x%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}

int main()
{
	Deriv d;
	VFPTR* vTableb1 = (VFPTR*)(*(int*)&d);    
	printVtable(vTableb1);

	VFPTR* vTableb2 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));
	printVtable(vTableb2);

	system("pause");
	return 0;
}

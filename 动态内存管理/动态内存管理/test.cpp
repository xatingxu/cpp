//#include <iostream>
//using namespace std;
//
//
//void TestFunc()
//{
//	int *p1 = (int*)malloc(sizeof(int));
//	delete p1;
//
//	int *p2 = (int*)malloc(sizeof(int));
//	delete[] p2;
//
//	int *p3 = new int;
//	free(p3);
//
//	int* p4 = new int;
//	delete[] p4;
//
//	int *p5 = new int[10];
//	free(p5);
//
//	int *p6 = new int[10];
//	delete p6;
//}
//int main()
//{
//	TestFunc();
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Test{
//public:
//	Test()
//	{
//		_ptr = new int;
//	}
//	~Test()
//	{
//		delete _ptr;
//		_ptr = nullptr;
//	}
//private:
//	int *_ptr;
//};
//
//void TestFunc()
//{
//	//�������
//	    Test *p1 = (Test*)malloc(sizeof(Test));
//		delete p1;
//
//		//�������
//		Test *p2 = (Test*)malloc(sizeof(Test));
//		delete[] p2;
//
//		//�ڴ�й©
//		Test *p3 = new Test;
//		free(p3);
//		_CrtDumpMemoryLeaks();
//
//		//�������
//		Test *p4 = new Test;
//		delete[] p4;
//
//		//�������+�ڴ�й©
//		Test *p5 = new Test[10];
//		free(p5);
//
//		//�������+�ڴ�й©
//		Test *p6 = new Test[10];
//		delete p6;
//	
//}
//
//int main()
//{
//	TestFunc();
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <cstdlib>
using namespace std;

class Test{
public:
	Test()
	{
		_ptr = new int;
	}
	~Test()
	{
		delete _ptr;
		_ptr = nullptr;
	}
private:
	int _ptr;
};

void TestFunc()
{
	//������
	Test *p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	//�������
	Test *p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	//������
	Test *p3 = new Test;
	free(p3);
	_CrtDumpMemoryLeaks();

	//�������
	Test *p4 = new Test;
	delete[] p4;

	//�������+�ڴ�й©
	Test *p5 = new Test[10];
	free(p5);

	//�������+�ڴ�й©
	Test *p6 = new Test[10];
	delete p6;

}

int main()
{
	TestFunc();
	system("pause");
	return 0;
}
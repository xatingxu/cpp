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
//	//代码崩溃
//	    Test *p1 = (Test*)malloc(sizeof(Test));
//		delete p1;
//
//		//代码崩溃
//		Test *p2 = (Test*)malloc(sizeof(Test));
//		delete[] p2;
//
//		//内存泄漏
//		Test *p3 = new Test;
//		free(p3);
//		_CrtDumpMemoryLeaks();
//
//		//代码崩溃
//		Test *p4 = new Test;
//		delete[] p4;
//
//		//代码崩溃+内存泄漏
//		Test *p5 = new Test[10];
//		free(p5);
//
//		//代码崩溃+内存泄漏
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
//	int _ptr;
//};
//
//void TestFunc()
//{
//	//无问题
//	Test *p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//代码崩溃
//	Test *p2 = (Test*)malloc(sizeof(Test));
//	delete[] p2;
//
//	//无问题
//	Test *p3 = new Test;
//	free(p3);
//	_CrtDumpMemoryLeaks();
//
//	//代码崩溃
//	Test *p4 = new Test;
//	delete[] p4;
//
//	//代码崩溃+内存泄漏
//	Test *p5 = new Test[10];
//	free(p5);
//
//	//代码崩溃+内存泄漏
//	Test *p6 = new Test[10];
//	delete p6;
//
//}
//
//int main()
//{
//	TestFunc();
//	system("pause");
//	return 0;
//}

//operator new：该函数实际通过malloc来申请空间，当malloc申请空间成功时直接返回；
//申请空间失败，尝试 执行空间不足应对措施，如果改应对措施用户设置了，则继续申请，否则抛异常
//void* _CRTDECL operator new(size_t size)_ THROE1(_STD bad_alloc)
//{
//	//try to  allocate size bytes
//	void* p;
//	while ((p = malloc(size)) == 0)
//	{
//		if (_callnewh(size) == 0)
//		{
//			//如果申请内存失败了，这里会抛出bad_alloc类型的异常
//			static const std::bad_alloc nomem;
//			_RAISE(nomem);
//		}
//		return (p)；
//	}
//}

///* operator delete: 该函数最终是通过free来释放空间的 */ void operator delete(void *pUserData) {
//	_CrtMemBlockHeader * pHead;
//
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//
//	if (pUserData == NULL)            
//		return;
//		通过上述两个全局函数的实现知道，operator new 实际也是通过malloc来申请空间，如果malloc申请空间 成功就直接返回，否则执行用户提供的空间不足应对措施，如果用户提供该措施就继续申请，否则就抛异 常。operator delete 最终是通过free来释放空间的。
//		下面代码演示了，针对链表的节点ListNode通过重载类专属 operator new / operator delete，实现链表节 点使用内存池申请和释放内存，提高效率。
//
//		_mlock(_HEAP_LOCK);  /* block other threads */       
//		__TRY
//
//		/* get a pointer to memory block header */           
//		pHead = pHdr(pUserData);
//
//	/* verify block type */            
//		_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//
//	_free_dbg(pUserData, pHead->nBlockUse);
//
//	__FINALLY            
//		_munlock(_HEAP_LOCK);  /* release other threads */       
//	__END_TRY_FINALLY
//
//		return;
//}
//
///* free的实现 */ 
//#define   free(p)         _free_dbg(p, _NORMAL_BLOCK)

//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//int globalvar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//
//	int num[10] = { 1, 1, 2, 2 };
//	char char2[] = "abcd";
//	char* pchar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int)* 4);
//	int* ptr2 = (int*)calloc(4,sizeof(int)* 4);
//	int* ptr3 = (int*)realloc(ptr2,sizeof(int)* 4);
//	free(ptr1);
//	free(ptr3);
//}


//实现链表节点使用内存池申请和释放内存，提高效率。
//分析：针对链表节点ListNode我们可以通过重载专属operator new /operator delete
//, 实现链表节点使用内存池申请和释放内存，提高效率。


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct ListNode
//{
//	ListNode* _prev;
//	ListNode* _next;
//	int _data;
//
//	void* operator new(size_t n)
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);
//		cout << "memory pool allocate" << endl;
//		return p;
//	}
//
//	void operator delete(void* p)
//	{
//		allocator<ListNode>().deallocate((ListNode*)p, 1);
//		cout << "memory pool deallocate" << endl;
//	}
//};
//
//class List
//{
//public:
//	List()
//	{
//		_head = new ListNode;
//		_head->_prev = _head;
//		_head->_next = _head;
//	}
//	~List()
//	{
//		ListNode* cur = _head->_next;
//		while (cur != _head)
//		{
//			ListNode* next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//		_head = nullptr;
//	}
//private:
//	ListNode* _head;
//};
//
//int main()
//{
//	List l;
//	return 0;
//}

//请设计一个类，该类只能在堆上创建对象（程序运行时不能动态内存分配）
//方法：构造函数私有化

//#include <iostream>
//using namespace std;
//
//class HeapOnly{
//
//public:
//	static HeapOnly* CreateObject()
//	{
//		return new HeapOnly;
//	}
//private:
//	//构造函数私有化
//	HeapOnly()
//	{
//
//	}
//
//	//声明拷贝构造函数
//	//C++98
//	//1.只声明，不实现。因为实现起来会很麻烦，而且本身并不需要。
//	//声明成私有的
//	HeapOnly(const HeapOnly&);
//
//	//C++11
//	HeapOnly(const HeapOnly&) = delete;
//};
//
//int main()
//{
//	HeapOnly::CreateObject();
//	
//	return 0;
//}


//请设计一个类，该类只能在栈上创建对象 
#include <iostream>
using namespace std;

class StackOnly()
{
public:
	static stackonly createobject()
	{
		return stachonly();
	}

private:
	stachonly();
};
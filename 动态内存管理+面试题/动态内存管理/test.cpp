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
//	//������
//	Test *p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//�������
//	Test *p2 = (Test*)malloc(sizeof(Test));
//	delete[] p2;
//
//	//������
//	Test *p3 = new Test;
//	free(p3);
//	_CrtDumpMemoryLeaks();
//
//	//�������
//	Test *p4 = new Test;
//	delete[] p4;
//
//	//�������+�ڴ�й©
//	Test *p5 = new Test[10];
//	free(p5);
//
//	//�������+�ڴ�й©
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

//operator new���ú���ʵ��ͨ��malloc������ռ䣬��malloc����ռ�ɹ�ʱֱ�ӷ��أ�
//����ռ�ʧ�ܣ����� ִ�пռ䲻��Ӧ�Դ�ʩ�������Ӧ�Դ�ʩ�û������ˣ���������룬�������쳣
//void* _CRTDECL operator new(size_t size)_ THROE1(_STD bad_alloc)
//{
//	//try to  allocate size bytes
//	void* p;
//	while ((p = malloc(size)) == 0)
//	{
//		if (_callnewh(size) == 0)
//		{
//			//��������ڴ�ʧ���ˣ�������׳�bad_alloc���͵��쳣
//			static const std::bad_alloc nomem;
//			_RAISE(nomem);
//		}
//		return (p)��
//	}
//}

///* operator delete: �ú���������ͨ��free���ͷſռ�� */ void operator delete(void *pUserData) {
//	_CrtMemBlockHeader * pHead;
//
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//
//	if (pUserData == NULL)            
//		return;
//		ͨ����������ȫ�ֺ�����ʵ��֪����operator new ʵ��Ҳ��ͨ��malloc������ռ䣬���malloc����ռ� �ɹ���ֱ�ӷ��أ�����ִ���û��ṩ�Ŀռ䲻��Ӧ�Դ�ʩ������û��ṩ�ô�ʩ�ͼ������룬��������� ����operator delete ������ͨ��free���ͷſռ�ġ�
//		���������ʾ�ˣ��������Ľڵ�ListNodeͨ��������ר�� operator new / operator delete��ʵ������� ��ʹ���ڴ��������ͷ��ڴ棬���Ч�ʡ�
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
///* free��ʵ�� */ 
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


//ʵ������ڵ�ʹ���ڴ��������ͷ��ڴ棬���Ч�ʡ�
//�������������ڵ�ListNode���ǿ���ͨ������ר��operator new /operator delete
//, ʵ������ڵ�ʹ���ڴ��������ͷ��ڴ棬���Ч�ʡ�


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

//�����һ���࣬����ֻ���ڶ��ϴ������󣨳�������ʱ���ܶ�̬�ڴ���䣩
//���������캯��˽�л�

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
//	//���캯��˽�л�
//	HeapOnly()
//	{
//
//	}
//
//	//�����������캯��
//	//C++98
//	//1.ֻ��������ʵ�֡���Ϊʵ����������鷳�����ұ�������Ҫ��
//	//������˽�е�
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


//�����һ���࣬����ֻ����ջ�ϴ������� 
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
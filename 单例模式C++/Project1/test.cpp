//����ģʽ�еĶ���ģʽ

//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		return &m_instance;
//	}
//private:
//	//���캯��˽��
//	Singleton()
//	{};
//	//C++98 ������
//	Singleton(Singleton const&);
//	Singleton& operator=(Singleton const&);
//
//	//C++11
//	Singleton(Singleton const&) = delete;
//	Singleton& operator=(Singleton const&) = delete;
//
//	static Singleton m_instance;
//};
//
//Singleton Singleton::m_instance;//�ڳ������֮ǰ����ɵ�������ĳ�ʼ��

//����ģʽ
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

class Singleton{
public:
	static Singleton* GetInstance(){
		  //����Ҫʹ��Double_Check��ʽ���������ܱ�֤Ч�ʺ��̰߳�ȫ
		  if (nullptr == m_pInstance){
			  m_mtx.lock();
			  if (nullptr == m_pInstance)
			  {
				  m_pInstance = new Singleton();
			  }
			  m_mtx.unlock();
		  }
		  return m_pInstance;

}
//ʵ��һ����Ƕ�Ļ�����
	class CGarbo{
	public:
		~CGarbo(){
			if (Singleton::m_pInstance)
				delete Singleton::m_pInstance;
		}
	};
//����һ����̬��Ա���������������ϵͳ���Զ�����
	//�������������Ӷ��ͷ����ĵ�������
	static CGarbo Garbo;
private:
	//���캯��˽�л�
	Singleton()
	{};
	Singleton(Singleton const&);
	Singleton operator=(Singleton const&);

	static Singleton* m_pInstance;//��������ָ��
	static mutex m_mtx;//������

};

Singleton* Singleton::m_pInstance;
Singleton::CGarbo Garbo;
mutex Singleton::m_mtx;

void func(int n)
{
	cout << Singleton::GetInstance() << endl;
}

//���̻߳�������ʾ����Getstance()�����Ͳ�����������
int main()
{
	thread t1(func, 10);
	thread t2(func, 10);

	t1.join();
	t2.join();

	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;
}
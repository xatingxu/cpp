//单例模式中的饿汉模式

//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		return &m_instance;
//	}
//private:
//	//构造函数私有
//	Singleton()
//	{};
//	//C++98 防拷贝
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
//Singleton Singleton::m_instance;//在程序入口之前就完成单例对象的初始化

//懒汉模式
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

class Singleton{
public:
	static Singleton* GetInstance(){
		  //这里要使用Double_Check方式加锁，才能保证效率和线程安全
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
//实现一个内嵌的回收类
	class CGarbo{
	public:
		~CGarbo(){
			if (Singleton::m_pInstance)
				delete Singleton::m_pInstance;
		}
	};
//定义一个静态成员变量，程序结束后，系统会自动调用
	//它的析构函数从而释放它的单例对象
	static CGarbo Garbo;
private:
	//构造函数私有化
	Singleton()
	{};
	Singleton(Singleton const&);
	Singleton operator=(Singleton const&);

	static Singleton* m_pInstance;//单例对象指针
	static mutex m_mtx;//互斥锁

};

Singleton* Singleton::m_pInstance;
Singleton::CGarbo Garbo;
mutex Singleton::m_mtx;

void func(int n)
{
	cout << Singleton::GetInstance() << endl;
}

//多线程环境下演示上面Getstance()加锁和不加锁的区别
int main()
{
	thread t1(func, 10);
	thread t2(func, 10);

	t1.join();
	t2.join();

	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;
}
//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//class Person{
//public:
//	void print()
//	{
//		cout << "name" <<" "<< _name << endl;
//		cout << "age" <<" "<< _age << endl;
//	}
//protected:
//	string _name = "peter";
//	int _age = 18;
//};
//
//class student :public Person
//{
//protected:
//	int _stuid;//ѧ��
//
//};
//
//class teacher :public Person
//{
//protected:
//	int _jobid;//����
//
//};
//int main()
//{
//	student s;
//	teacher t;
//	s.print();
//	t.print();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//class Person{
//protected:
//	string _name;
//	string _sex;
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	int _id;
//};
//
//void Test()
//{
//	Student s;
//	//���������ֵ������Ķ���/ָ��/����
//	Person pobj = s;
//	Person* pp = &s;
//	Person& rp = s;
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//class Person{
//protected:
//	string _name;
//	string _sex;
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	int _id;
//};
//
//void Test()
//{
//	Student s;
//	//���������ֵ������Ķ���/ָ��/����
//	Person pobj = s;
//	Person* pp = &s;
//	Person& rp = s;
//
//	pp = &s;
//	Student* ps1 = (Student*)pp;
//	ps1->_id = 10;
//	//s = pobj;//��������ܸ�ֵ�����������
//
//	pp = &pobj;
//	Student* ps1 = (Student*)pp;//���������Ȼ���ԣ����ǻ����Խ����ʵ����
//	ps1->_id = 10;
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person{
//protected:
//	string _name = "Shelly";
//	int _id = 612;//���֤��
//
//};
//class Student :public Person
//{
//public:
//	void print()
//	{
//		cout << "������" << _name << endl;
//		cout << "���֤��:" << _id << endl;
//		cout << "ѧ�ţ�" << _id << endl;
//	}
//
//protected:
//	int _id = 623;//ѧ��
//};
//int main()
//{
//	Student s;
//	s.print();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//// B�е�fun��A�е�fun���ǹ������أ���Ϊ������ͬһ������ 
//// B�е�fun��A�е�fun�������أ���Ա�������㺯������ͬ�͹������ء� 
//class A{
//	void fun()
//	{
//		cout << "fun()" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	void fun(int i)
//	{
//		//A::fun();//�������ͨ������Ϊfun�����������Ѿ����������ˡ�
//		cout << "fun(int-i)->" << i << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	b.fun(10);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//
//using namespace std;
//class person{
//public:
//	//���캯��
//	person(const char* name = "shelly") 
//		:_name(name)
//	{
//		cout << "person()" << endl;
//	}
//	//�������캯��
//	person(const person& p)
//		:_name(p._name)
//	{
//		cout << "person(const person& p)" << endl;
//	}
//	//��ֵ���캯��
//	person& operator=(const person& p)
//	{
//		cout << "person& operator=(const person& p)" << endl;
//		if (this != &p)//��ֹ�Լ����Լ���ֵ
//			_name = p._name;
//		return *this;
//	}
//	//��������
//	~person()
//	{
//		cout << "~person()" << endl;
//	}
//protected:
//	string _name;//����
//};
//
//class student : public person
//{
//public:
//	//���캯��
//	student(const char* name, int id)
//		:person(name)
//		, _id(id)
//	{
//		cout << "student()" << endl;
//	}
//	//�������캯��
//	student(const student& s)
//		:person(s)
//		, _id(s._id)
//	{
//		cout << "student(const student& s)" << endl;
//	}
//	//��ֵ����
//	student& operator=(const student& s)
//	{
//		cout << "student& operator=(const student& s)" << endl;
//		if (this != &s)
//		{
//           _id = s._id;
//		   person::operator=(s);
//		}
//		return *this;
//		
//	}
//
//	//��������
//	~student()
//	{
//		cout << "~student()" << endl;
//	}
//protected:
//	int _id;//ѧ��
//};
//
//int main()
//{
//	student s1("jack", 10);
//	student s2(s1);
//	student s3("amy", 18);
//	s1 = s3;
//	system("pause");
//	return 0;
//}
//

////c++98�й��캯��˽�л������������������Ĺ��캯�������޷��̳С�
//class NonInherit
//{
//public:
//	static NonInherit GetInstance()
//	{
//		return NonInherit();
//	}
//private:
//	NonInherit(){}
//};
////c++11�и����˹ؼ���final��ֹ�̳�
//class NoINherit final
//{};
//

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class B;
//class A{
//	int a;
//public:
//	A(int x = 0)
//	{
//		a = x;
//	}
//	friend class B;
//};
//
//class B
//{
//	int b;
//public:
//	void fun(A& ob)
//	{
//		cout << ob.a << endl;
//	}
//};
//
//class C :public B
//{
//public:
//	//void fun2(A& ob){ cout <<ob.a <<endl;}   //�������¼ӵĺ���ȴ���ܷ���A���˾�ᱨ��
//};
//
//void   main()
//{
//	A a(55);
//	C c;
//	c.fun(a); //C��B��������   ͨ������B�ĺ���fun��Ȼ���Է��� 
//}
//

//#include <iostream> 
//
//using namespace std;
//class B;
//class A
//{
//	int a;
//public:
//	A(int x = 0){ a = x; }
//	friend class B;
//};
//
//class C :public A     //ͨ���̳�,A����Ա��B����������C����Ա�� 
//{
//public:
//	C(int x) :A(x){}
//};
//
//class B
//{
//public:
//	void fun(A& ob) 
//	{ 
//		cout << ob.a << endl; 
//	}
//	void fun2(C& ob) 
//	{ 
//		cout << ob.a << endl;
//	}
//};
//
//void main()
//{
//	C c(55);
//	B b;
//	b.fun(c);
//	b.fun2(c);
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		++_count;
//	}
//protected:
//	string _name;//����
//public:
//	static int _count;//ͳ���˵ĸ���
//};
//int person::_count = 0;
//
//class student :public person
//{
//protected:
//	int _stuNum;
//};
//class graduate :public person
//{
//protected:
//	string _course;
//};
//int main()
//{
//	student s1;    
//	student s2;    
//	student s3;    
//	graduate s4;    
//	cout << " ���� :" << person::_count << endl;    
//	student::_count = 0;    
//	cout << " ���� :" << person::_count << endl;
//	system("pause");
//	return 0;
//}
//
//#include <string>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class person{
//public:
//	string _name;//����
//};
//
//class student :public person
//{
//protected:
//	int _id;
//};
//
//class teacher :public person
//{
//protected:
//	int _num;
//};
//
//class assistant :public student, public teacher
//{
//protected:
//	string _course;
//};
//
//int main()
//{
//	assistant a;
//	//���벻ͨ�����������ж����Բ�֪��Ҫ������һ��
//	//a._name = "shelly";
//	//��Ҫָ�������Ǹ������Ա���Խ�����������⣬���������������޷����
//	a.student::_name = "sss";
//	a.teacher::_name = "ttt";
//}

//#include <string>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class person{
//public:
//	string _name;//����
//};
//
//class student :virtual public person
//{
//protected:
//	int _id;
//};
//
//class teacher :virtual public person
//{
//protected:
//	int _num;
//};
//
//class assistant :public student, public teacher
//{
//protected:
//	string _course;
//};
//
//int main()
//{
//	assistant a;
//	a._name = "shelly";
//	
//}

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
// Car��BMW Car��Benz����is-a�Ĺ�ϵ
class car
{
protected:
	string _colour = "��ɫ";
	string _num = "��ABIT00";
};

class BM :public car
{
public:
	void Drive()
	{
		cout << "�ÿ�" << endl;
	}
};

class BC :public car
{
public:
	void Drive()
	{
		cout << "����" << endl;
	}
};
// Tire��Car����has-a�Ĺ�ϵ
class Tire
{
protected:
	string _brand = "Michelin";
	size_t _size = 17;
};

class car
{
protected:
	string _colour = "��ɫ";
	string _num = "��ABIT00"; 
	Tire _t;//��̥
};
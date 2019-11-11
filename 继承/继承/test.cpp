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
//	int _stuid;//学号
//
//};
//
//class teacher :public Person
//{
//protected:
//	int _jobid;//工号
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
//	//派生类对象赋值给基类的对象/指针/引用
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
//	//派生类对象赋值给基类的对象/指针/引用
//	Person pobj = s;
//	Person* pp = &s;
//	Person& rp = s;
//
//	pp = &s;
//	Student* ps1 = (Student*)pp;
//	ps1->_id = 10;
//	//s = pobj;//基类对象不能赋值给派生类对象
//
//	pp = &pobj;
//	Student* ps1 = (Student*)pp;//这种情况虽然可以，但是会存在越界访问的情况
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
//	int _id = 612;//身份证号
//
//};
//class Student :public Person
//{
//public:
//	void print()
//	{
//		cout << "姓名：" << _name << endl;
//		cout << "身份证号:" << _id << endl;
//		cout << "学号：" << _id << endl;
//	}
//
//protected:
//	int _id = 623;//学号
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
//// B中的fun和A中的fun不是构成重载，因为不是在同一作用域 
//// B中的fun和A中的fun构成隐藏，成员函数满足函数名相同就构成隐藏。 
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
//		//A::fun();//这里编译通过，因为fun函数在上面已经生声明过了。
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
//	//构造函数
//	person(const char* name = "shelly") 
//		:_name(name)
//	{
//		cout << "person()" << endl;
//	}
//	//拷贝构造函数
//	person(const person& p)
//		:_name(p._name)
//	{
//		cout << "person(const person& p)" << endl;
//	}
//	//赋值构造函数
//	person& operator=(const person& p)
//	{
//		cout << "person& operator=(const person& p)" << endl;
//		if (this != &p)//防止自己给自己赋值
//			_name = p._name;
//		return *this;
//	}
//	//析构函数
//	~person()
//	{
//		cout << "~person()" << endl;
//	}
//protected:
//	string _name;//姓名
//};
//
//class student : public person
//{
//public:
//	//构造函数
//	student(const char* name, int id)
//		:person(name)
//		, _id(id)
//	{
//		cout << "student()" << endl;
//	}
//	//拷贝构造函数
//	student(const student& s)
//		:person(s)
//		, _id(s._id)
//	{
//		cout << "student(const student& s)" << endl;
//	}
//	//赋值拷贝
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
//	//析构函数
//	~student()
//	{
//		cout << "~student()" << endl;
//	}
//protected:
//	int _id;//学号
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

////c++98中构造函数私有化，派生类调不到基类的构造函数，则无法继承。
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
////c++11中给出了关键字final禁止继承
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
//	//void fun2(A& ob){ cout <<ob.a <<endl;}   //派生类新加的函数却不能访问A，此句会报错
//};
//
//void   main()
//{
//	A a(55);
//	C c;
//	c.fun(a); //C是B的派生类   通过基类B的函数fun仍然可以访问 
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
//class C :public A     //通过继承,A的友员类B成了派生类C的友员类 
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
//	string _name;//姓名
//public:
//	static int _count;//统计人的个数
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
//	cout << " 人数 :" << person::_count << endl;    
//	student::_count = 0;    
//	cout << " 人数 :" << person::_count << endl;
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
//	string _name;//姓名
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
//	//编译不通过，这样会有二义性不知道要访问哪一个
//	//a._name = "shelly";
//	//需要指定访问那个父类成员可以解决二义性问题，但数据冗余问题无法解决
//	a.student::_name = "sss";
//	a.teacher::_name = "ttt";
//}

//#include <string>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class person{
//public:
//	string _name;//姓名
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
// Car和BMW Car和Benz构成is-a的关系
class car
{
protected:
	string _colour = "白色";
	string _num = "陕ABIT00";
};

class BM :public car
{
public:
	void Drive()
	{
		cout << "好开" << endl;
	}
};

class BC :public car
{
public:
	void Drive()
	{
		cout << "好坐" << endl;
	}
};
// Tire和Car构成has-a的关系
class Tire
{
protected:
	string _brand = "Michelin";
	size_t _size = 17;
};

class car
{
protected:
	string _colour = "白色";
	string _num = "陕ABIT00"; 
	Tire _t;//轮胎
};
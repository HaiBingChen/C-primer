#include "13.14.hpp"
#include <iostream>
#include <vector>

using namespace std;

void fun1(Exmp1 obj)
{
}


void fun2(Exmp1 &obj)
{
}

static Exmp1 fun3()
{
	static Exmp1 obj;
	return obj;
}

int main()
{
	//调用复制构造函数传实参
	//将形参Exmp1对象创建为实参e1的副本
	//函数执行完毕后调用析构函数撤销形参Exmp1对象
	//Exmp1 e1;
	//fun1(e1);

	//形参为Exmp1对象的引用,无需调用复制构造函数
	//fun2(e2);
	//Exmp1 &e2 = e1;

	//调用默认构造函数创建局部Exmp1对象
	//函数返回时调用复制构造函数创建作为返回值副本的Exmp1对象;
	//然后调用赋值操作符
	//执行完赋值后调用析构函数撤销局部Exmp1对象
	//调用析构函数撤销作为饿哦返回在副本的Exmp1对象
	//Exmp1 e3;
	//e3 = fun3();
	
	//调用默认构造寒酸动态创建Exmp1对象
	Exmp1 *p = new Exmp1;

	//调用默认构造函数创建一个临时值Exmp1对象
	//然后3次调用复制构造函数将临时值复制到vector容器evec的每个元素
	//然后调用析构函数撤销临时值Exmp1对象
	//vector<Exmp1> evec(3);

	delete p;

	return 0;
}

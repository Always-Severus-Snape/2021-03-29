#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
#define unint unsigned int
#define ADD(x, y) x+y


// 此时相当于创建一种新的类型 struct Student
struct Student{
	// 成员 /属性 / 字段
	char name[20];
	int age;
	int score;

};


int main(){
	struct Student s = { "张三", 18, 100 };
	
	// 对于结构体,最核心的使用方式是使用它的成员
	// . 成员访问运算符

	// 打印一个字符串
	printf("%s\n", s.name);
	s.age = 20;
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	//int x = 10;
	////变量P就是一个指针类型的变量
	//// 下面的 * 叫做"间接访问操作符"也叫作"解引用操作符"
	//// 根据 指针 p 中存的地址,找到这个地址中对应的内容
	//int* p = &x;
	//printf("%d\n", *p);


	system("pause");
	return 0;
}
   
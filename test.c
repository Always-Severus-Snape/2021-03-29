#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
#define unint unsigned int
#define ADD(x, y) x+y


// ��ʱ�൱�ڴ���һ���µ����� struct Student
struct Student{
	// ��Ա /���� / �ֶ�
	char name[20];
	int age;
	int score;

};


int main(){
	struct Student s = { "����", 18, 100 };
	
	// ���ڽṹ��,����ĵ�ʹ�÷�ʽ��ʹ�����ĳ�Ա
	// . ��Ա���������

	// ��ӡһ���ַ���
	printf("%s\n", s.name);
	s.age = 20;
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	//int x = 10;
	////����P����һ��ָ�����͵ı���
	//// ����� * ����"��ӷ��ʲ�����"Ҳ����"�����ò�����"
	//// ���� ָ�� p �д�ĵ�ַ,�ҵ������ַ�ж�Ӧ������
	//int* p = &x;
	//printf("%d\n", *p);


	system("pause");
	return 0;
}
   
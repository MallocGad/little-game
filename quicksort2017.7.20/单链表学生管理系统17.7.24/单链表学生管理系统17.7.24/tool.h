#include<stdio.h>
#include<malloc.h>
FILE *fp;
typedef struct Student
{
	char str_id[12];
	int i_age;
	int i_math;
	int i_english;
	int i_chinese;
	float f_equal;
	char str_name[10];
	char str_gender[5];
	struct Student *next;
}Stu;
int  Menu();
void Input();
void Output();
void Insert();
void Del();
Stu * Fond();
void Equal(Stu *ptr);
int Read();
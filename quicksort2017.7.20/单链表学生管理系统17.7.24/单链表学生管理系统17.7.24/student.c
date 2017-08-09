#include"tool.h"
#include<string.h>
Stu  *p, *q, *head = NULL, *temp;
int Menu()
{
	int _ichose;
	char q;
	if (Read())
	{
		printf("            ===================================\n");
		printf("                         请选择\n");
		printf("                    ====================\n");
		printf("                   ||1.显示所有学生信息||\n");
		printf("                   ||2.插入学生信息    ||\n");
		printf("                   ||3.删除学生信息　　||\n");
		printf("                   ||4.查找学生信息    ||\n");
		printf("                   ||5.计算平均成绩    ||\n");
		printf("                   ||0.退出\n");
		scanf("%d", &_ichose);
		getchar();
		switch (_ichose)
		{
			case 1:Output(); break;
			case 2:Insert(); break;
			case 3:Del(); break;
			case 4:Fond(); fclose(fp); break;
		case 0:return 0; break;
		default:system("cls"); printf("输入错误情重新输入\n"); return 1; break;
		}
		printf("按任意'q'退出，任意键回到主菜单");
		q = getch();
		if (q == 'q')
			exit(0);
		system("cls");
	}
	else
		Input();
	return 1;
}
int Read()
{
	if ((fp = fopen("student.dat", "r+")) == NULL)
	{
		printf("当前没有记录:\n");
		return 0;
	}
	
	head = (Stu*)malloc(sizeof(Stu));
	fread(head, sizeof(Stu), 1, fp);
	p = q = head;
	while (q->next != NULL)
	{
		p = (Stu*)malloc(sizeof(Stu));
		fread(p, sizeof(Stu), 1, fp);
		q->next = p;
		q = p;
	}
	return 1;
}
void Input()
{
	char ch='.';
	if ((fp = fopen("student.dat", "w+")) == NULL)
	{
		printf("文件打开错误\n");
		exit(0);
	}
	else
	{
		printf("请输入学生信息‘q’退出输入\n");
		while (ch != 'q')
		{
			if(head==NULL)
			head = q = p = (Stu*)malloc(sizeof(Stu));
			else
				p= (Stu*)malloc(sizeof(Stu));
			printf("请输入学生姓名:\n");
			gets(p->str_name);
			printf("请输入学生学号:\n");
			gets(p->str_id);
			printf("请输入学生性别:\n");
			gets(p->str_gender);
			printf("请输入年龄:\n");
			scanf("%d", &p->i_age);
			getchar();
			printf("请输入语文成绩:\n");
			scanf("%d", &p->i_chinese);
			getchar();
			printf("请输入英语成绩:\n");
			scanf("%d", &p->i_english);
			getchar();
			printf("请输入数学成绩:\n");
			scanf("%d",&p->i_math);
			getchar();
			p->f_equal = (float)(p->i_chinese + p->i_english + p->i_math) / 3;
			p->next = NULL;
			if (head == p);
			else
			{
				q->next = p;
				q = p;
			}
			printf("请问是否继续输入?(q to exit\any to continue))\n");
			ch = getch();
			system("cls");
		}
		q = head;
		while (q != NULL)
		{
			fwrite(q, sizeof(Stu), 1, fp);
			q = q->next;
		}
		fclose(fp);
		printf("信息存储完毕!!!");
		system("pause");
	}
}
void Output()
{
	p = head;
	system("cls");
	while (p)
	{
		printf("学生的姓名：%s\n", p->str_name);
		printf("学生的性别：%s\n", p->str_gender);
		printf("学生的学号：%s\n", p->str_id);
		printf("学生的年龄：%d\n", p->i_age);
		printf("学生的数学成绩：%d\n", p->i_math);
		printf("学生的语文成绩：%d\n", p->i_chinese);
		printf("学生的英语成绩：%d\n", p->i_english);
		printf("学生的平均成绩：%.2f\n", p->f_equal);
		p = p->next;
	}
	fclose(fp);
}
Stu* Fond()
{
	char fd[10];
	printf("请输入你要查找的姓名");
	while (1)
	{
		scanf("%s", fd);
		getchar();
		q=p = head;
		while (p)
		{
			if (strcmp(fd, p->str_name) == 0)
			{
				system("cls");
				printf("找到学生姓名\n");
				printf("==========================\n");
				printf("学生的姓名：%s\n", p->str_name);
				printf("学生的性别：%s\n", p->str_gender);
				printf("学生的学号：%s\n", p->str_id);
				printf("学生的年龄：%d\n", p->i_age);
				printf("学生的数学成绩：%d\n", p->i_math);
				printf("学生的语文成绩：%d\n", p->i_chinese);
				printf("学生的英语成绩：%d\n", p->i_english);
				printf("学生的平均成绩：%.2f\n", p->f_equal);
				break;
			}
			q = p;
			p = p->next;
		}
		if (p == NULL)
			printf("没有找到学生信息\n请重新输入：");
		else
			return q;
	}
}
void Insert()
{
	fclose(fp);
	if ((fp = fopen("student.dat", "w+")) == NULL)
	{
		printf("文件打开错误");
		exit(0);
	}
	printf("请问你要插入到哪个学生之后\n");
	Fond();
	temp = (Stu*)malloc(sizeof(Stu));
	printf("请输入学生姓名:\n");
	gets(temp->str_name);
	printf("请输入学生学号:\n");
	gets(temp->str_id);
	printf("请输入学生性别:\n");
	gets(temp->str_gender);
	printf("请输入年龄:\n");
	scanf("%d", &temp->i_age);
	getchar();
	printf("请输入语文成绩:\n");
	scanf("%d", &temp->i_chinese);
	getchar();
	printf("请输入英语成绩:\n");
	scanf("%d", &temp->i_english);
	getchar();
	printf("请输入数学成绩:\n");
	scanf("%d", &temp->i_math);
	getchar();
	temp->f_equal = (float)(temp->i_chinese + temp->i_english + temp->i_math) / 3;
	temp->next =p->next;
	p->next = temp;
	p = head;
	while (p != NULL)
	{
		fwrite(p, sizeof(Stu), 1, fp);      //用r+方式在这里无法写入
		p = p->next;
	}
	fclose(fp);
	printf("信息插入完毕!!!");
	system("pause");
}
void Del()
{
	int i_chose;
	fclose(fp);
	if ((fp = fopen("student.dat", "w+")) == NULL)
	{
		printf("文件打开错误");
		exit(0);
	}
	printf("请问你要删除谁？\n");
	q=Fond();
	while (1)
	{
		printf("确认删除吗:(1.确认      2.取消)");
		i_chose = getch();
		if (i_chose == '2')
			return;
		if (i_chose != '1')
		{
			printf("输入错误!\n");
			continue;
		}
		q->next = p->next;
		free(p);
		p = NULL;
		p = head;
		while (p != NULL)
		{
			fwrite(p, sizeof(Stu), 1, fp);      //用r+方式在这里无法写入
			p = p->next;
		}
		fclose(fp);
		printf("删除完毕!!!");
		system("pause");
		break;
	}
}
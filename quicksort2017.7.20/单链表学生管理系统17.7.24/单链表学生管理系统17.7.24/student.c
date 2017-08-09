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
		printf("                         ��ѡ��\n");
		printf("                    ====================\n");
		printf("                   ||1.��ʾ����ѧ����Ϣ||\n");
		printf("                   ||2.����ѧ����Ϣ    ||\n");
		printf("                   ||3.ɾ��ѧ����Ϣ����||\n");
		printf("                   ||4.����ѧ����Ϣ    ||\n");
		printf("                   ||5.����ƽ���ɼ�    ||\n");
		printf("                   ||0.�˳�\n");
		scanf("%d", &_ichose);
		getchar();
		switch (_ichose)
		{
			case 1:Output(); break;
			case 2:Insert(); break;
			case 3:Del(); break;
			case 4:Fond(); fclose(fp); break;
		case 0:return 0; break;
		default:system("cls"); printf("�����������������\n"); return 1; break;
		}
		printf("������'q'�˳���������ص����˵�");
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
		printf("��ǰû�м�¼:\n");
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
		printf("�ļ��򿪴���\n");
		exit(0);
	}
	else
	{
		printf("������ѧ����Ϣ��q���˳�����\n");
		while (ch != 'q')
		{
			if(head==NULL)
			head = q = p = (Stu*)malloc(sizeof(Stu));
			else
				p= (Stu*)malloc(sizeof(Stu));
			printf("������ѧ������:\n");
			gets(p->str_name);
			printf("������ѧ��ѧ��:\n");
			gets(p->str_id);
			printf("������ѧ���Ա�:\n");
			gets(p->str_gender);
			printf("����������:\n");
			scanf("%d", &p->i_age);
			getchar();
			printf("���������ĳɼ�:\n");
			scanf("%d", &p->i_chinese);
			getchar();
			printf("������Ӣ��ɼ�:\n");
			scanf("%d", &p->i_english);
			getchar();
			printf("��������ѧ�ɼ�:\n");
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
			printf("�����Ƿ��������?(q to exit\any to continue))\n");
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
		printf("��Ϣ�洢���!!!");
		system("pause");
	}
}
void Output()
{
	p = head;
	system("cls");
	while (p)
	{
		printf("ѧ����������%s\n", p->str_name);
		printf("ѧ�����Ա�%s\n", p->str_gender);
		printf("ѧ����ѧ�ţ�%s\n", p->str_id);
		printf("ѧ�������䣺%d\n", p->i_age);
		printf("ѧ������ѧ�ɼ���%d\n", p->i_math);
		printf("ѧ�������ĳɼ���%d\n", p->i_chinese);
		printf("ѧ����Ӣ��ɼ���%d\n", p->i_english);
		printf("ѧ����ƽ���ɼ���%.2f\n", p->f_equal);
		p = p->next;
	}
	fclose(fp);
}
Stu* Fond()
{
	char fd[10];
	printf("��������Ҫ���ҵ�����");
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
				printf("�ҵ�ѧ������\n");
				printf("==========================\n");
				printf("ѧ����������%s\n", p->str_name);
				printf("ѧ�����Ա�%s\n", p->str_gender);
				printf("ѧ����ѧ�ţ�%s\n", p->str_id);
				printf("ѧ�������䣺%d\n", p->i_age);
				printf("ѧ������ѧ�ɼ���%d\n", p->i_math);
				printf("ѧ�������ĳɼ���%d\n", p->i_chinese);
				printf("ѧ����Ӣ��ɼ���%d\n", p->i_english);
				printf("ѧ����ƽ���ɼ���%.2f\n", p->f_equal);
				break;
			}
			q = p;
			p = p->next;
		}
		if (p == NULL)
			printf("û���ҵ�ѧ����Ϣ\n���������룺");
		else
			return q;
	}
}
void Insert()
{
	fclose(fp);
	if ((fp = fopen("student.dat", "w+")) == NULL)
	{
		printf("�ļ��򿪴���");
		exit(0);
	}
	printf("������Ҫ���뵽�ĸ�ѧ��֮��\n");
	Fond();
	temp = (Stu*)malloc(sizeof(Stu));
	printf("������ѧ������:\n");
	gets(temp->str_name);
	printf("������ѧ��ѧ��:\n");
	gets(temp->str_id);
	printf("������ѧ���Ա�:\n");
	gets(temp->str_gender);
	printf("����������:\n");
	scanf("%d", &temp->i_age);
	getchar();
	printf("���������ĳɼ�:\n");
	scanf("%d", &temp->i_chinese);
	getchar();
	printf("������Ӣ��ɼ�:\n");
	scanf("%d", &temp->i_english);
	getchar();
	printf("��������ѧ�ɼ�:\n");
	scanf("%d", &temp->i_math);
	getchar();
	temp->f_equal = (float)(temp->i_chinese + temp->i_english + temp->i_math) / 3;
	temp->next =p->next;
	p->next = temp;
	p = head;
	while (p != NULL)
	{
		fwrite(p, sizeof(Stu), 1, fp);      //��r+��ʽ�������޷�д��
		p = p->next;
	}
	fclose(fp);
	printf("��Ϣ�������!!!");
	system("pause");
}
void Del()
{
	int i_chose;
	fclose(fp);
	if ((fp = fopen("student.dat", "w+")) == NULL)
	{
		printf("�ļ��򿪴���");
		exit(0);
	}
	printf("������Ҫɾ��˭��\n");
	q=Fond();
	while (1)
	{
		printf("ȷ��ɾ����:(1.ȷ��      2.ȡ��)");
		i_chose = getch();
		if (i_chose == '2')
			return;
		if (i_chose != '1')
		{
			printf("�������!\n");
			continue;
		}
		q->next = p->next;
		free(p);
		p = NULL;
		p = head;
		while (p != NULL)
		{
			fwrite(p, sizeof(Stu), 1, fp);      //��r+��ʽ�������޷�д��
			p = p->next;
		}
		fclose(fp);
		printf("ɾ�����!!!");
		system("pause");
		break;
	}
}
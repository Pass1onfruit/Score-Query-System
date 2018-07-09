#define _CRT_SECURE_NO_WARINGS
#include "student.h"

void begain ()
{
	system ("cls");
	printf ("\n");
	printf ("\t\t-----------------------开始菜单-----------------------\n\n");
	printf ("\t\t|\t\t * 1 录入学生基本信息\t\t     |\n");
	printf ("\t\t|\t\t * 2 管理学生成绩信息\t\t     |\n");
	printf ("\t\t|\t\t * 3 搜索学生信息\t\t     |\n");
	printf ("\t\t|\t\t * 4 修改学生信息\t\t     |\n");
	printf ("\t\t|\t\t * 5 删除学生信息\t\t     |\n");
	printf ("\t\t|\t\t * 6 保存学生信息\t\t     |\n");
	printf ("\t\t|\t\t * 0 退出系统\t\t\t     |\n\n");
	BB;
	printf ("\t\t 请选择(0 ~ 6) ; ");
}

void showID (struct student stu[], int i)
{
	printf ("|%-10d", stu[i].number);
	printf ("|%-10s", stu[i].name);
	printf ("|%-10s", stu[i].sex);
	printf ("|%-10s", stu[i].birthday);
	printf ("|%-10s", stu[i].area);
	printf ("|%-10s", stu[i].college);
	if (stu[i].sum >= 0)
		printf ("|%-10d|", stu[i].sum);
	else
		printf ("|未录入!   |");
	printf ("\n");
	AA;
}

void showALLL (struct student stu[], int i)///////////////////////////////////
{
	int h = 0;
	printf (" %d 号学生信息如下\n\n", stu[i].number);
	if (stu[i].sum >= 0)
	{
		printf ("┏━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf ("┃   姓名 : %-13s┃  性别 : %-8s┃  生日 : %-19s┃\n", stu[i].name, stu[i].sex, stu[i].birthday);
		printf ("┣━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━┳━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
		printf ("┃   生源地 : %-26s┃  院系 : %-22s┃\n", stu[i].area, stu[i].college);
		printf ("┣━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━┳━━━┻━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━┫\n");
		printf ("┃       语文      ┃      数学      ┃       英语      ┃      专业课     ┃\n");
		printf ("┣━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━┫\n");
		printf ("┃         %-8d┃        %-8d┃         %-8d┃         %-8d┃\n", stu[i].chinese , stu[i].math, stu[i].english, stu[i].c);
		printf ("┣━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━┫\n");
		printf ("┃          总成绩 : %-15d┃      %10d 科需补考          ┃\n", stu[i].sum, stu[i].h);
		printf ("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else
	{
		printf ("┏━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf ("┃   姓名 : %-13s┃  性别 : %-8s┃  生日 : %-19s┃\n", stu[i].name, stu[i].sex, stu[i].birthday);
		printf ("┣━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━┳━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
		printf ("┃   生源地 : %-26s┃  院系 : %-22s┃\n", stu[i].area, stu[i].college);
		printf ("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
		printf ("┃                          该生暂无成绩录入                            ┃\n");
		printf ("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		
		//printf ("是否录入该生成绩？ (Y / N)\n");
		//scanf ("%c", &ch);
		//if (ch == 'Y' || ch == 'y')
		//{
		//	getchar ();
		//	printf ("语文成绩 : ");
		//	scanf ("%d",&stu[i].chinese);
		//	printf ("数学成绩 : ");
		//	scanf ("%d",&stu[i].math);
		//	printf ("英语成绩 : ");
		//	scanf ("%d",&stu[i].english);
		//	printf ("专业课成绩 : ");
		//	scanf ("%d",&stu[i].c);
		//	stu[i].sum = stu[i].chinese + stu[i].math + stu[i].english + stu[i].c;
		//	if (stu[i].chinese < 60)
		//		h++;
		//	if (stu[i].math < 60)
		//		h++;
		//	if (stu[i].english < 60)
		//		h++;
		//	if (stu[i].c < 60)
		//		h++;
		//	stu[i].h = h;
		//}
	}
}

void information (struct student stu[])

{
	int i, number = 0;
	char quit;
	do
	{
		printf ("学号 ：");
		scanf ("%d", &number);
		for (i = 0; i < n; i ++)
		{
			if (number == stu[i].number)
			{
				printf ("此学号已存在! \n");
				getchar ();
				getchar ();
				return;
			}
		}
		stu[i].number = number;
		printf ("姓名 : ");
		scanf ("%s", &stu[i].name);
		printf ("性别 : ");
		scanf ("%s", &stu[i].sex);
		printf ("生日 : ");
		scanf ("%s", &stu[i].birthday);
		printf ("生源地 : ");
		scanf ("%s", &stu[i].area);
		printf ("院系 : ");
		scanf ("%s", &stu[i].college);
		n++;
		printf ("是否继续添加？(Y / N) ");
		scanf ("\t%c", &quit);
	} while (quit != 'N' && quit != 'n');
}

void modify (struct student stu[])
{
	int i, number;
	char ch;
	printf ("修改学生基本信息。\n");
	printf ("请输入学生的学号 ：");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			printf ("找到该生记录，如下所示 ： \n");
			AA;
			GG;
			AA;
			showID (stu, i);
			getchar ();
			printf ("是否修改? (Y / N)\n");
			scanf ("%c", &ch);
			if (ch == 'Y' || ch == 'y')
			{
				getchar();
				//system ("cls");
				printf ("姓名 : ");
				scanf ("%s", &stu[i].name);
				printf ("性别 : ");
				scanf ("%s", &stu[i].sex);
				printf ("生日 : ");
				scanf ("%s", &stu[i].birthday);
				printf ("生源地 : ");
				scanf ("%s", &stu[i].area);
				printf ("院系 : ");
				scanf ("%s", &stu[i].college);
				printf ("修改成功！\n");
			}
			return;
		}
	}
	printf ("没有找到该生记录！");
}

void IDsearch (struct student stu[])
{
	int i, number;
	printf ("查找学生的信息记录。\n");
	printf ("请输入学生学号 ：\n");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			printf ("找到该生的记录，如下所示 ：\n");
			
			showALLL (stu, i);

			return;
		}
	}
	printf ("没有找到该生记录！\n");
}

void IDdel (struct student stu[])
{
	int i, number;
	char ch;
	printf ("删除学生信息记录。\n");
	printf ("请输入学生的学号 ：");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			getchar ();
			printf ("找到该生记录，如下所示 ：\n");
			AA;
			GG;
			AA;
			showID (stu, i);
			printf ("是否删除？ (Y / N)\n");
			scanf ("%c", &ch);
			if (ch == 'Y' || ch == 'y')
			{
				for (; i < n; i++);
				stu[i] = stu[i + 1];
				n--;
				printf("删除成功！\n");
			}
			return;
		}
	}
	printf ("没有找到该生记录！");
}




void meun ()
{
	system ("cls");
	printf ("\n");
	printf ("\t\t---------------------学生成绩管理---------------------\n\n");
	printf ("\t\t|\t\t * 1 添加学生成绩\t\t     |\n");
	printf ("\t\t|\t\t * 2 显示成绩记录\t\t     |\n");
	printf ("\t\t|\t\t * 3 修改学生成绩\t\t     |\n");
	printf ("\t\t|\t\t * 4 删除学生成绩\t\t     |\n");
	printf ("\t\t|\t\t * 5 查找成绩记录\t\t     |\n");
	printf ("\t\t|\t\t * 6 排序学生成绩\t\t     |\n");
	printf ("\t\t|\t\t * 0 返回主菜单\t\t\t     |\n\n");
	BB;
	printf ("\t\t 请选择(0 ~ 6) ; ");
}

void add (struct student stu[])//////////////////////////////////////////////////////
{
	int i, h = 0, number = 0;
	char quit;
	int have = 0;
	do
	{
		printf ("学号 ：");
		scanf ("%d", &number);
		for (i = 0; i < n; i ++)
		{
			if (number == stu[i].number && stu[i].name[0] != 0)///////////////////////////////////////////
				break;
			//else if (number == stu[i].number)
			//{
			//	printf ("此学号已存在! \n");
			//	return;
			//}
		}
		//
		//if (stu[i].name[0] == 0)////////////////////////////
		//{
		//	stu[i].number = number;
		//	printf ("姓名 : ");
		//	scanf ("%s",&stu[i].name);
		//}
		if(i < n)
		{
			printf ("语文成绩 : ");
			scanf ("%d",&stu[i].chinese);
			printf ("数学成绩 : ");
			scanf ("%d",&stu[i].math);
			printf ("英语成绩 : ");
			scanf ("%d",&stu[i].english);
			printf ("专业课成绩 : ");
			scanf ("%d",&stu[i].c);
			stu[i].sum = stu[i].chinese + stu[i].math + stu[i].english + stu[i].c;
			if (stu[i].chinese < 60)
				h++;
			if (stu[i].math < 60)
				h++;
			if (stu[i].english < 60)
				h++;
			if (stu[i].c < 60)
				h++;
			stu[i].h = h;
		}
		else
		{
			printf("该学号学生不存在!\n");
		}
		//n++;
		printf ("是否继续添加？(Y / N) ");
		scanf ("\t%c", &quit);
	} while (quit != 'N' && quit != 'n');
}

void show (struct student stu[], int i)
{
	printf ("|%-10d", stu[i].number);
	printf ("|%-10s", stu[i].name);
	printf ("|%-10d", stu[i].chinese);
	printf ("|%-10d", stu[i].math);
	printf ("|%-10d", stu[i].english);
	printf ("|%-10d", stu[i].c);
	printf ("|%-10d|", stu[i].sum);
	printf ("\n");
	AA;
}

void showALL (struct student stu[])
{
	int i;
	AA;
	HH;
	AA;
	for (i = 0; i < n; i++)
	{
		show (stu, i);
	}
}

void scoremodify (struct student stu[])
{
	int i, number, h = 0;
	char ch;
	printf ("修改学生成绩。\n");
	printf ("请输入学生的学号 ：");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			printf ("找到该生记录，如下所示 ： \n");
			AA;
			HH;
			AA;
			show (stu, i);
			getchar ();
			printf ("是否修改? (Y / N)\n");
			scanf ("%c", &ch);
			if (ch == 'Y' || ch == 'y')
			{
				getchar ();
				printf ("语文成绩 ：");
				scanf ("%d", &stu[i].chinese);
				printf ("数学成绩 : ");
				scanf ("%d", &stu[i].math);
				printf ("英语成绩 : ");
				scanf ("%d",&stu[i].english);
				printf ("专业课成绩 : ");
				scanf ("%d",&stu[i].c);
				stu[i].sum = stu[i].chinese + stu[i].math + stu[i].english + stu[i].c;
				if (stu[i].chinese < 60)
					h++;
				if (stu[i].math < 60)
					h++;
				if (stu[i].english < 60)
					h++;
				if (stu[i].c < 60)
					h++;
				stu[i].h = h;
				printf ("修改成功！\n");
			}
			return;
		}
	}
	printf ("没有找到该生记录！");
}

void del(struct student stu[])/////////////////////////////////////////////////////
{
	int i, number;
	char ch;
	printf ("删除学生成绩记录。\n");
	printf ("请输入学生的学号 ：");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			getchar ();
			printf ("找到该生记录，如下所示 ：\n");
			AA;
			HH;
			AA;
			show (stu, i);
			printf ("是否删除？ (Y / N)\n");
			scanf ("%c", &ch);
			if (ch == 'Y' || ch == 'y')
			{
				for (; i < n; i++);
				stu[i] = stu[i + 1];
				n--;
				printf("删除成功！\n");
			}
			return;
		}
	}
	printf ("没有找到该生记录！");
}

void search (struct student stu[])
{
	int i, number;
	printf ("查找学生的成绩记录。\n");
	printf ("请输入学生学号 ：\n");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			printf ("找到该生的记录，如下所示 ：\n");
			AA;
			HH;
			AA;
			show (stu, i);
			return;
		}
	}
	printf ("没有找到该生记录！\n");
}

void sort (struct student stu[])
{
	int i, j;
	struct student a;
	printf ("按总成绩进行排序。");
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (stu[i].sum < stu[j].sum)
			{
				a = stu[i];
				stu[i] = stu[j];
				stu[j] = a;
			}
		}
	}
	printf ("排序结果如下 ：\n");
	AA;
	showALL (stu);
}

void file (struct student stu[], int i)
{
	FILE *fp;
	fp = fopen("C:\\Users\\hasee\\Desktop\\student.txt", "w");
	if (fp == NULL)
	{
		printf ("无法打开文件!\n");
		getchar ();
		getchar ();
		return;
	}
	fprintf (fp, " %d 号学生信息如下\n\n", i);
	fprintf (fp, "┏━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	fprintf (fp, "┃   姓名 : %-13s┃  性别 : %-8s┃  生日 : %-19s┃\n", stu[i].name, stu[i].sex, stu[i].birthday);
	fprintf (fp, "┣━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━┳━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	fprintf (fp, "┃   生源地 : %-26s┃  院系 : %-22s┃\n", stu[i].area, stu[i].college);
	fprintf (fp, "┣━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━┳━━━┻━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━┫\n");
	fprintf (fp, "┃       语文      ┃      数学      ┃       英语      ┃      专业课     ┃\n");
	fprintf (fp, "┣━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━┫\n");
	fprintf (fp, "┃         %-8d┃        %-8d┃         %-8d┃         %-8d┃\n", stu[i].chinese , stu[i].math, stu[i].english, stu[i].c);
	fprintf (fp, "┣━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━┫\n");
	fprintf (fp, "┃          总成绩 : %-15d┃      %10d 科需补考          ┃\n", stu[i].sum, stu[i].h);
	fprintf (fp, "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n");
	fclose (fp);
}

void IDfile (struct student stu[])
{
	int number, i;
	char ch;
	printf ("保存学生信息。\n");
	printf ("输入保存信息学生的学号 ： \n");
	scanf ("%d", &number);
	for (i = 0; i < n; i++)
	{
		if (number == stu[i].number)
		{
			printf ("找到该生记录，如下所示 ： \n");
			AA;
			GG;
			AA;
			showID (stu, i);
			getchar ();
			printf ("是否保存该学生信息? (Y / N)\n");
			scanf ("%c", &ch);
			if (ch == 'Y' || ch == 'y')
			{
				getchar();
				file (stu, i);
				printf ("保存成功！");
			}
			return;
		}
	}
	printf ("没有找到该生记录！");
}

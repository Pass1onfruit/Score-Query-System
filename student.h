#ifndef STUDENT
#define STUDENT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BB printf ("\t\t------------------------------------------------------\n")
#define AA printf ("-------------------------------------------------------------------------------\n")
#define HH printf ("|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","学号","姓名","语文成绩","数学成绩","英语成绩","专业课成绩","总分")
#define GG printf ("|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","学号","姓名","性别","生日","生源地","院系","总分")

struct student
{
	int number;
	char name[20];
	char sex[10];
	char birthday[10];
	char area[20];
	char college[20];
	int chinese;
	int math;
	int english;
	int c;
	int sum;
	int h;
};

static int n;
void begain ();
void information (struct student stu[]);
void modify (struct student stu[]);
void showID (struct student stu[], int i);
void showALLL (struct student stu[]);
void IDsearch (struct student stu[]);
void IDdel (struct student stu[]);
void menu ();
void add (struct student stu[]);
void show (struct student stu[], int i);
void showALL(struct student stu[]);
void scoremodify (struct student stu[]);
void del (struct student stu[]);
void search (struct student stu[]);
void sort (struct student stu[]);
void file (struct student stu[], int i);
void IDfile (struct student stu[]);

#endif

#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include "student.h"

int main()
{
	struct student stu[50];
	int select, select2, quit = 0;
	while (1)
	{
		begain ();
		scanf ("%d", &select);
		switch (select)
		{
			case 1:
				information (stu);
				continue;
			case 2:
				while (1)
				{
					meun ();
					scanf ("%d", &select);
					switch (select)
					{
						case 1:
							add (stu);
							continue;
						case 2:
							showALL (stu);
							getchar ();
							getchar ();
							continue;
						case 3:
							scoremodify (stu);
							getchar ();
							getchar ();
							continue;
						case 4:
							del (stu);
							getchar ();
							getchar ();
							continue;
						case 5:
							search (stu);
							getchar ();
							getchar ();
							continue;
						case 6:
							sort (stu);
							getchar ();
							getchar ();
							continue;
						case 0:
							break;
						default:
							printf ("输入有误！请输入 0 ~ 6 之间的数字。\n");
							getchar ();
							getchar ();
							continue;
					}
					break;
				}
				continue;
			case 3:////////////////
				IDsearch (stu);
				getchar ();
				getchar ();
				continue;
			case 4:
				modify (stu);
				getchar ();
				getchar ();
				continue;
			case 5:
				IDdel (stu);
				getchar ();
				getchar ();
				continue;
			case 6:
				IDfile (stu);
				getchar ();
				getchar ();
				continue;
			case 0:
				quit = 1;
				break;
			default:
				printf ("输入有误！请输入 0 ~ 6 之间的数字。\n");
				getchar ();
				getchar ();
				continue;
		}
		if (quit == 1)
			break;
		printf ("按下任意键返回主菜单！\n");
		getchar ();
		getchar ();
	}
	printf ("程序结束！\n\n");
	return 0;
}

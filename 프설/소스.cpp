#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#pragma comment(lib, "winmm.lib") //playsound
#include <mmsystem.h>  // mciSendString
#include <process.h>

#define note 20
#define speed 5
#define LEVEL 10  
#define FALSE 0
#define TRUE 1

void menu1();
void musiclist();
void mainmenu();
void GAMEMODE();
void infinityspeed();
void END();
void END2();
void pause();
void background();
void cursor1();
void cursor5();
void cursor4();
void cursor2();
void cursor3();
void infinitymode();
void infinitymusic1();
void infinitymusic2();
void infinitymusic3();
void infinitymusic4();
void infinitymusic5();
void infinitymusic6();
void infinitymusic7();
void infinitymusic8();
void music1();
void music2();
void music3();
void music4();
void music5();
void music6();
void music7();
void music8();

int key, G;
clock_t start, end;
CRITICAL_SECTION m_csGDILock;
char note1[] = { "����" };
char *note1_p = note1;
char note2[] = { "      " };
char note3[] = { " (��) " };
char *note2_p = note2;
char *note3_p = note3;
int combo1 = 0;
int score1 = 0;
int life1 = 20;
int esc;
int YES;
int delay = 30;
int musicEND;
int a, b, c, d, e;
//1���� ���� �뷡 ���� 
int mix1[] = { 2897, 3367, 1521, 2814, 1024, 1, 1383, 1116, 649, 1690, 21, 951, 16, 300, 640, 174, 1457, 1, 1819, 1218, 1687, 1862, 2500, 776, 847, 1489, 996, 11, 766, 20, 878, 1284, 1008, 16, 970, 8, 593, 6, 887, 1979, 1, 1010, 482, 126, 1099, 9, 662, 1, 769, 2 };
int mix2[] = { 3162, 2771, 2829, 2785, 226, 1996, 1037, 1325, 585, 190, 260, 508, 623, 1304, 409, 316, 2323, 1136, 2398, 1045, 2351, 203, 482, 216, 561, 1695, 351, 1, 105, 8, 1416, 1024, 815, 1, 1267, 916, 745, 168, 977, 268, 5, 1152, 126, 1764, 1827 };
int mix3[] = { 3447, 2185, 2165, 878, 3308, 1, 398, 10, 2790, 151, 212, 3714, 1620, 263, 551, 9, 2485, 83, 3572, 7, 22, 10, 26, 11, 10, 27, 11, 12, 9, 5, 18, 2639, 219, 241, 1723, 190, 680, 812, 1446, 3, 74, 585, 0, 922, 707, 2, 877, 165, 19, 671, 120, 358, 7, 982, 522, 24, 21, 1568, 362, 10, 774, 1 };
int mix4[] = { 3763, 1574, 3763, 1574, 3438, 2790, 240, 1985, 1066, 1316, 578, 192, 241, 517, 613, 1578, 437, 1528, 2446, 1146, 747, 860, 2557, 188, 485, 217, 571, 4693, 407, 181, 2343, 988, 1493, 988, 2375, 1258, 111, 1425, 2159 };
int mix5[] = { 4078, 952, 2769, 2822, 1027, 1466, 1121, 695, 1652, 1, 956, 11, 314, 616, 194, 1341, 330, 1907, 1170, 1148, 2, 964, 969, 455, 1980, 760, 845, 1507, 979, 1150, 755, 1002, 12, 542, 0, 471, 1116, 653, 16, 2315, 2, 402, 1777, 883, 1019, 980, 1 };

int a1 = sizeof(mix1) / sizeof(int);
int b1 = sizeof(mix2) / sizeof(int);
int c1 = sizeof(mix3) / sizeof(int);
int d1 = sizeof(mix4) / sizeof(int);
int f1 = sizeof(mix5) / sizeof(int);


BOOL IsKeyDown(int Key)
{
	return ((GetAsyncKeyState(Key) & 0x8000) != 0);
}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void setcolor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
int main()
{
	mciSendString("play ȣ��ǳ����.wav", NULL, 0, NULL);
	system("mode con:cols=150 lines=50");
	system("Title �������");
	InitializeCriticalSection(&m_csGDILock);

	while (!_kbhit())
	{
		gotoxy(1, 1);
		setcolor(rand() % 15 + 1, 0);
		printf("\n\n\n\n\n\n\n\n\n    ������������������������������������������������������������\n");
		printf("    ������������������������������������������������������������\n");
		printf("    ���											                      ���\n");
		printf("    ���											                      ���\n");
		printf("    ���	  ���	        ��					      ��   	                              ���\n");
		printf("    ���	��    ��	��				   ��	      ��			              ���\n");
		printf("    ���	��    ��	��				   ��	      ��	   ��         ��              ���\n");
		printf("    ���	����	        �� ���		��      ��     ������     �� ���	   ���     ���              ���\n");
		printf("    ���	��   ��	        ���   ��	 ��    ��	   ��         ���   ��    ��  ��  �� ��              ���\n");
		printf("    ���	��    ��        ��     ��         ��  ��	   ��	      ��     ��    ��    ��   ��              ���\n");
		printf("    ���	��     ��       ��     ��	    ��		   ��         ��     ��    ��         ��              ���\n");
		printf("    ���				 	   ��		   ����					      ���\n");
		printf("    ���				 	  ��							              ���\n");
		printf("    ���			 	         ��							              ���\n");
		printf("    ���						 							      ���\n");
		printf("    ���													      ���\n");
		printf("    ���													      ���\n");
		printf("    ���	      ���	      ��	   ��          ��	������   				      ���\n");
		printf("    ���	     ��		    ��  ��	   ���      ���	��					      ���\n");
		printf("    ���	    ��   ���	   �����	   ��  ��  ��  ��	������				      ���\n");
		printf("    ���	     ��    ��	  ��	  ��	   ��	 ��    ��       ��					      ���\n");
		printf("    ���	       ���      ��	   ��      ��          ��       ������				      ���\n");
		printf("    ���													      ���\n");
		printf("    ���													      ���\n");
		printf("    ���													      ���\n");
		printf("    ������������������������������������������������������������\n");
		printf("    ������������������������������������������������������������\n");
		Sleep(100);
	}
	key = _getch();
	menu1();

	return 0;
}

void menu1()
{
	score1 = 0;
	delay = 30;
	life1 = 20;					//������ ������ �ٽ� ������ ���������� life,delay,score,YES�� �缳��
	//�Ϲݸ�忡�� �Ͻ������� �޴��ε���������� ������ ����Ǿ���ؼ�
	esc = 0;
	mciSendString("close END.mp3", NULL, 0, NULL);
	mciSendString("close �Ͻ�����start.mp3", NULL, 0, NULL);
	mciSendString("close ȣ��ǳ����.wav", NULL, 0, NULL);
	mciSendString("close AudioTrack.wav", NULL, 0, NULL);
	mciSendString("play ȣ��ǳ����.wav", NULL, 0, NULL);
	mciSendString("close ��������.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
	system("cls");
	setcolor(7, 0);
	printf("\n\n\n	������������������������������������������\n");
	printf("	������������������������������������������\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  			1. ��  ��  ��  ��				      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  			2. ��  ��  ��					      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	���  									      ���\n");
	printf("	������������������������������������������\n");
	printf("	������������������������������������������\n");
	cursor1();
	system("cls");
}

void GAMEMODE()
{
	PlaySound(NULL, 0, 0);
	mciSendString("close ȣ��ǳ����.wav", NULL, 0, NULL);
	mciSendString("play AudioTrack.wav", NULL, 0, NULL);
	system("cls");
	setcolor(7, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	            1.�Ϲ� ���                         ���\n");
	printf("			���	                                                ���\n");
	printf("			���	            2.���� ���                         ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
	cursor2();
	system("cls");
}

void infinityspeed()
{
	system("cls");
	setcolor(7, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	            1.����                              ���\n");
	printf("			���	            2.����                              ���\n");
	printf("			���	            3.�ſ����                          ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
	cursor3();
	system("cls");
}
void musiclist1()
{
	mciSendString("close AudioTrack.wav", NULL, 0, NULL);
	PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����Ŀ ����Ŀ - ���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
	system("cls");
	setcolor(7, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	            1.10cm-��������                     ���\n");
	printf("			���	            2.����� ������ - �����            ���\n");
	printf("			���	            3.�׳డ �翡 ���ٸ� - �����       ���\n");
	printf("			���	            4.�׳డ ������ - �����            ���\n");
	printf("			���	            5.���� ���� - ����Ŀ����Ŀ          ���\n");
	printf("			���	            6.8���� - ����                    ���\n");
	printf("			���	            7.������� - SG���ʺ�               ���\n");
	printf("			���	            8.go up - Yum Yum                   ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
	cursor4();
	system("cls");
}
void musiclist2()
{
	mciSendString("close AudioTrack.wav", NULL, 0, NULL);
	PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����Ŀ ����Ŀ - ���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
	system("cls");
	setcolor(7, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	            1.10cm-��������                     ���\n");
	printf("			���	            2.����� ������ - �����            ���\n");
	printf("			���	            3.�׳డ �翡 ���ٸ� - �����       ���\n");
	printf("			���	            4.�׳డ ������ - �����            ���\n");
	printf("			���	            5.���� ���� - ����Ŀ����Ŀ          ���\n");
	printf("			���	            6.8���� - ����                    ���\n");
	printf("			���	            7.������� - SG���ʺ�               ���\n");
	printf("			���	            8.go up - Yum Yum                   ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
	cursor5();
	system("cls");
}
void END()
{
	system("cls");
	gotoxy(1, 1);
	setcolor(rand() % 15 + 1, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	     G    A    M    E    O    V    E    R       ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
}

void END2()
{
	int i = 1, x = 40, y = 26;
	system("cls");
	setcolor(7, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	          ������ ���� �Ͻðڽ��ϱ�?             ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���                YES              NO                 ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
	gotoxy(40, 12);
	setcolor(12, 0);
	printf("score : %d", score1);
	gotoxy(40, 26);
	setcolor(12, 0);
	printf("��");
	setcolor(7, 0);
	while (i)
	{
		key = _getch();
		gotoxy(x, y);
		printf(" ");
		switch (key)
		{
		case 'a':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			x = 40;
			break;
		case 'd':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			x = 55;
			break;
		case 13:
			if (x == 40)
				exit(0);
			else if (x == 55)
			{
				menu1();
				i = i - 1;
			}
			break;
		}
		gotoxy(x, y);
		setcolor(12, 0);
		printf("��");
		setcolor(7, 0);
	}
}
void success()
{
	system("cls");
	gotoxy(1, 1);
	setcolor(rand() % 15 + 1, 0);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
	printf("			�������������������������������\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	     S    U    C    C    C    E    S    S       ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			���	                                                ���\n");
	printf("			�������������������������������\n");
	printf("			�������������������������������\n");
}
void pause()
{
	int i = 1, j;
	int x = 74, y = 5;
	while (a + b + c + d + e != 5)
	{
		Sleep(1);
		i = 1;					//esc�ѹ��������� if���ȿ� while���� i�� 0���� �ʱ�ȭ �Ǳ⋚���� �ٽ� 1�� �ʱ�ȭ
		if (IsKeyDown(27))
		{
			G = 1000000000;
			esc = 10;				// esc�� �������� ���� 10���� ���Ƿ� ����
			mciSendString("play �Ͻ�����start.mp3 repeat", NULL, 0, NULL);
			mciSendString("pause ��������.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause window.mp3", NULL, 0, NULL);
			setcolor(11, 0);
			EnterCriticalSection(&m_csGDILock);
			gotoxy(70, 2); printf("----------------------------------");
			gotoxy(70, 3); printf("|  ���θ޴��� ���ư��ðڽ��ϱ�?  |");
			gotoxy(70, 4); printf("|                                |");
			gotoxy(70, 5); printf("|      YES          NO           |");
			gotoxy(70, 6); printf("|                                |");
			gotoxy(70, 7); printf("----------------------------------");
			setcolor(7, 0);
			gotoxy(x, y);
			setcolor(12, 0);
			printf("��");
			LeaveCriticalSection(&m_csGDILock);
			setcolor(7, 0);
			while (i)
			{
				key = _getch();
				EnterCriticalSection(&m_csGDILock);
				gotoxy(x, y);
				printf(" ");
				LeaveCriticalSection(&m_csGDILock);
				switch (key)
				{
				case 'a':
					mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
					mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
					x = 74;
					break;
				case 'd':
					mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
					mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
					x = 85;
					break;
				case 13:
					if (x == 74)
					{
						YES = 10;					//�Ϲݸ�忡�� �Ͻ������� �޴��ε���������� ������ ����Ǿ���ؼ�
						menu1();
						i = i - 1;
					}
					else if (x == 85)
					{
						mciSendString("close �Ͻ�����start.mp3", NULL, 0, NULL);
						mciSendString("play �Ͻ�����end.mp3", NULL, 0, NULL);
						EnterCriticalSection(&m_csGDILock);
						gotoxy(70, 2); printf("                                  ");
						gotoxy(70, 3); printf("                                  ");
						gotoxy(70, 4); printf("                                  ");
						gotoxy(70, 5); printf("                                  ");
						gotoxy(70, 6); printf("                                  ");
						gotoxy(70, 7); printf("                                  ");
						LeaveCriticalSection(&m_csGDILock);
						i = i - 1;
						for (j = 5; j>0; j--)
						{
							setcolor(11, 0);
							EnterCriticalSection(&m_csGDILock);
							gotoxy(70, 5);
							printf("%d���Ľ����մϴ�", j);
							LeaveCriticalSection(&m_csGDILock);
							Sleep(1000);
							setcolor(7, 0);
						}
					}
					break;
				}
				EnterCriticalSection(&m_csGDILock);
				setcolor(12, 0);
				gotoxy(x, y);
				printf("��");
				LeaveCriticalSection(&m_csGDILock);
				setcolor(7, 0);
			}
			EnterCriticalSection(&m_csGDILock);
			gotoxy(x, y);
			printf(" ");
			gotoxy(70, 5);
			printf("                     ");
			LeaveCriticalSection(&m_csGDILock);
			mciSendString("close �Ͻ�����end.mp3", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ��������.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume window.mp3", NULL, 0, NULL);
			G = 50;
			esc = 0;
		}
		else if (life1 <= 0)
		{
			mciSendString("close MISS.mp3", NULL, 0, NULL);
			mciSendString("close MISS(2).mp3", NULL, 0, NULL);
			mciSendString("close MISS(3).mp3", NULL, 0, NULL);
			mciSendString("close MISS(4).mp3", NULL, 0, NULL);
			mciSendString("close MISS(5).mp3", NULL, 0, NULL);
			mciSendString("play END.mp3 repeat", NULL, 0, NULL);
			mciSendString("close ��������.wav", NULL, 0, NULL);
			mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("close window.mp3", NULL, 0, NULL);
			system("cls");
			while (delay != 0)				//�ٸ� �����尡 ����ɶ����� ��ٷ��־����
			{
				Sleep(100);
				END();

				delay--;
			}

			break;
		}
	}
	if (a + b + c + d + e == 5)			//�뷡�� ������ ��������
	{
		while (delay != 0)
		{
			Sleep(100);
			success();
			delay--;
		}
		END2();
	}
}
void background()
{
	int i;
	setcolor(5, 0);
	gotoxy(6, 19); printf("��"); gotoxy(59, 19); printf("��");
	gotoxy(6, 20); printf("��"); gotoxy(59, 20); printf("��");
	setcolor(11, 0);
	gotoxy(13, 23);
	printf("D");
	setcolor(12, 0);
	gotoxy(23, 23);
	printf("F");
	gotoxy(30, 23);
	setcolor(2, 0);
	printf("SPACE");
	gotoxy(43, 23);
	setcolor(3, 0);
	printf("J");
	gotoxy(53, 23);
	setcolor(9, 0);
	printf("K");
	setcolor(7, 0);
	for (i = 0; i <= 20; i++)
	{
		gotoxy(8, i + 1);
		printf("|");
		gotoxy(18, i + 1);
		printf("|");
		gotoxy(28, i + 1);
		printf("|");
		gotoxy(38, i + 1);
		printf("|");
		gotoxy(48, i + 1);
		printf("|");
		gotoxy(58, i + 1);
		printf("|");
	}
}

void cursor1()
{
	int i = 1;
	int x = 29, y = 22;
	PlaySound(TEXT("C:\\AudioTrack.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	gotoxy(x, y);
	setcolor(12, 0);
	printf("��");

	while (i)
	{
		key = _getch();
		gotoxy(x, y);
		printf(" ");		//�� �־��־��ĸ� while�� ���� ó�� ����� ���� ���ֱ����ؼ� ����� ������ �����ΰ� ó�� �Ϸ��� �־���
		switch (key)
		{
		case 13:
			if (y == 26)
			{
				exit(0);			// �� y ���� 26�϶��� �����ϳĸ� ������Ѻ��� 26�϶� ���� �����⿡���� y���̿��� �׶� ���͸� ������ ����ǰ�
			}						// 26�� �ƴ϶�� 1.���ӽ��� ���⼭ ���͸� �����Ŵϱ� ���� ȭ������ �Ѿ��~
			GAMEMODE();
			i = i - 1;
			break;
		case 'w':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y == 26)				//y���� 26�϶��� ���� ������ w�� �ö󰡴°ǵ� �ƹ� y�������� �ٿö󰡸� Ŀ���� �����̾ȵǴϱ� 26�϶� �� 2.������ ���⼭�� �������� �ϱ����ؼ���
				y -= 4;
			break;
		case 's':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y == 22)				// �̰Ͷ� �������ϰ� ��������~
				y += 4;
			break;
		}
		gotoxy(x, y);				//������ ����� ������ġ �������ϱ� ����� y������ ����ϴ°ž�~
		printf("��");
	}
	gotoxy(x, y);
	printf(" ");
}

void cursor2()
{
	int i = 1;
	int x = 39, y = 23;
	gotoxy(x, y);
	setcolor(12, 0);
	printf("��");

	while (i)
	{
		key = _getch();
		gotoxy(x, y);
		printf(" ");
		switch (key)
		{
		case 'w':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			y = 23;
			break;
		case 's':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			y = 25;
			break;
		case 13:
			if (y == 23)
			{
				musiclist1();
				i = i - 1;
			}
			else if (y == 25)
			{
				infinityspeed();
				i = i - 1;
			}
			break;
		case 27:
			menu1();
			i = i - 1;
			break;
		}
		gotoxy(x, y);
		printf("��");
	}
}

void cursor3()
{
	int i = 1;
	int x = 39, y = 24;
	gotoxy(x, y);
	setcolor(12, 0);
	printf("��");

	while (i)
	{

		key = _getch();
		gotoxy(x, y);
		printf(" ");
		switch (key)
		{
		case 'w':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y>23 && y <= 25)
				y--;
			break;
		case 's':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y >= 23 && y<25)
				y++;
			break;
		case 13:
			switch (y)
			{
			case 23:
				G = 50;
				musiclist2();
				i = i - 1;
			case 24:
				G = 25;
				musiclist2();
				i = i - 1;
			case 25:
				G = 15;
				musiclist2();
				i = i - 1;
			}
			break;
		case 27:
			GAMEMODE();
			i = i - 1;
			break;
		}
		gotoxy(x, y);
		printf("��");
	}
}
void cursor4()
{
	int i = 1;
	int x = 39, y = 24;
	gotoxy(x, y);
	setcolor(12, 0);
	printf("��");

	while (i)
	{
		key = _getch();
		gotoxy(x, y);
		printf(" ");
		switch (key)
		{
		case 'w':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y>20 && y <= 27)
			{
				y--;
				if (y == 20)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\10cm-���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 21)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - ����� ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 22)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ �翡 ���ٸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 23)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 24)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����Ŀ ����Ŀ - ���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 25)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\���� - 8����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 26)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\SG ���ʺ� - �������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 27)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\go up - Yum-Yum.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			}
			break;
		case 's':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y >= 20 && y<27)
			{
				y++;
				if (y == 20)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\10cm-���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 21)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - ����� ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 22)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ �翡 ���ٸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 23)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 24)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����Ŀ ����Ŀ - ���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 25)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\���� - 8����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 26)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\SG ���ʺ� - �������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 27)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\go up - Yum-Yum.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			}
			break;
		case 13:
			PlaySound(NULL, 0, 0);
			switch (y)
			{
			case 20:
				music1();
				i = i - 1;
				break;
			case 21:
				music2();
				i = i - 1;
				break;
			case 22:
				music3();
				i = i - 1;
				break;
			case 23:
				music4();
				i = i - 1;
				break;
			case 24:
				music5();
				i = i - 1;
				break;
			case 25:
				music6();
				i = i - 1;
				break;
			case 26:
				music7();
				i = i - 1;
				break;
			case 27:
				music8();
				i = i - 1;
				break;
			}
			break;
		case 27:
			GAMEMODE();
			i = i - 1;
			break;
		}
		gotoxy(x, y);
		printf("��");
	}
}
void cursor5()
{
	int i = 1;
	int x = 39, y = 24;
	gotoxy(x, y);
	setcolor(12, 0);
	printf("��");

	while (i)
	{
		key = _getch();
		gotoxy(x, y);
		printf(" ");
		switch (key)
		{
		case 'w':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y>20 && y <= 27)
			{
				y--;
				if (y == 20)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\10cm-���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 21)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - ����� ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 22)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ �翡 ���ٸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 23)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 24)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����Ŀ ����Ŀ - ���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 25)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\���� - 8����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 26)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\SG ���ʺ� - �������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 27)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\go up - Yum-Yum.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			}
			break;
		case 's':
			mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
			mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
			if (y >= 20 && y<27)
			{
				y++;
				if (y == 20)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\10cm-���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 21)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - ����� ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 22)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ �翡 ���ٸ�.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 23)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����� - �׳డ ������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 24)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\����Ŀ ����Ŀ - ���� ����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 25)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\���� - 8����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 26)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\SG ���ʺ� - �������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
				else if (y == 27)
					PlaySound(TEXT("C:\\Users\\Administrator\\Desktop\\wav�뷡\\go up - Yum-Yum.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			}
			break;
		case 13:
			PlaySound(NULL, 0, 0);
			switch (y)
			{
			case 20:
				infinitymusic1();
				i = i - 1;
				break;
			case 21:
				infinitymusic2();
				i = i - 1;
				break;
			case 22:
				infinitymusic3();
				i = i - 1;
				break;
			case 23:
				infinitymusic4();
				i = i - 1;
				break;
			case 24:
				infinitymusic5();
				i = i - 1;
				break;
			case 25:
				infinitymusic6();
				i = i - 1;
				break;
			case 26:
				infinitymusic7();
				i = i - 1;
				break;
			case 27:
				infinitymusic8();
				i = i - 1;
				break;
			}
			break;
		case 27:
			GAMEMODE();
			i = i - 1;
			break;
		}
		gotoxy(x, y);
		printf("��");
	}
}
void infinitymode(int G)
{
	struct
	{
		int x, y;
		int exist;
	}NOTE[note] = { 0, 0, 0 };
	int j;
	int k = 1, count = 0;
	int i, r, score = 0, Life = 0, combo = 0, MISS = 1;

	double pst, savetime = 0;

	background();
	start = clock();
	while (k)
	{
		if (count%LEVEL == 1)
		{
			for (i = 0; i <= note; i++)
			{
				if (NOTE[i].exist == FALSE)
				{
					NOTE[i].exist = TRUE;
					r = rand() % 3;
					if (r == 0)
						NOTE[i].x = 10;
					else if (r == 1)
						NOTE[i].x = 30;
					else if (r == 2)
						NOTE[i].x = 50;
					NOTE[i].y = 1;
					break;
				}
				else if (NOTE[i].exist == TRUE)
				{
					continue;
				}
			}
			if (count % 20 == 1)
			{
				for (i = 0; i <= note; i++)
				{
					if (NOTE[i].exist == FALSE)
					{
						NOTE[i].exist = TRUE;
						r = rand() % 2;
						if (r == 0)
							NOTE[i].x = 20;
						else if (r == 1)
							NOTE[i].x = 40;
						NOTE[i].y = 1;
						break;
					}
					else if (NOTE[i].exist == TRUE)
					{
						continue;
					}
				}
			}
		}
		if (count%speed == 1)
		{
			for (i = 0; i <= note; i++)
			{
				if (NOTE[i].exist == TRUE)
				{
					gotoxy(NOTE[i].x, NOTE[i].y);
					printf("      ");
					if (NOTE[i].y >= 21)
					{
						NOTE[i].exist = FALSE;

						if ((NOTE[i].x == 10 && NOTE[i].y >= 21) || (NOTE[i].x == 20 && NOTE[i].y >= 21) || (NOTE[i].x == 30 && NOTE[i].y >= 21) ||
							(NOTE[i].x == 40 && NOTE[i].y >= 21) || (NOTE[i].x == 50 && NOTE[i].y >= 21))
						{
							if (MISS == 1)
								mciSendString("play MISS.mp3", NULL, 0, NULL);
							else if (MISS == 2)
								mciSendString("play MISS(2).mp3", NULL, 0, NULL);
							else if (MISS == 3)
								mciSendString("play MISS(3).mp3", NULL, 0, NULL);
							else if (MISS == 4)
								mciSendString("play MISS(4).mp3", NULL, 0, NULL);
							else if (MISS == 5)
								mciSendString("play MISS(5).mp3", NULL, 0, NULL);
							MISS++;
							if (MISS == 6)
								MISS = 1;
							Life++;
							gotoxy(70, 17);
							setcolor(13, 0);
							printf("M   I   S   S       ");
							setcolor(7, 0);
							combo = 0;
							if (Life == 30)
							{
								int j = 1, x = 40, y = 26;
								end = clock();			// �ٽ� ������ �ð��� ����
								system("cls");
								mciSendString("close MISS.mp3", NULL, 0, NULL);
								mciSendString("close MISS(2).mp3", NULL, 0, NULL);
								mciSendString("close MISS(3).mp3", NULL, 0, NULL);
								mciSendString("close MISS(4).mp3", NULL, 0, NULL);
								mciSendString("close MISS(5).mp3", NULL, 0, NULL);
								mciSendString("play END.mp3 repeat", NULL, 0, NULL);
								mciSendString("close ��������.wav", NULL, 0, NULL);
								mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
								mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
								mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
								mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
								mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
								mciSendString("close ���ɿ���.wav", NULL, 0, NULL);
								mciSendString("close window.mp3", NULL, 0, NULL);
								printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			�������������������������������\n");
								printf("			�������������������������������\n");
								printf("			���	                                                ���\n");
								printf("			���	                                                ���\n");
								printf("			���	   G    A    M    E     O     V     E     R     ���\n");
								printf("			���	                                                ���\n");
								printf("			���	          ������ ���� �Ͻðڽ��ϱ�?             ���\n");
								printf("			���	                                                ���\n");
								printf("			���	                                                ���\n");
								printf("			���                YES              NO                 ���\n");
								printf("			���	                                                ���\n");
								printf("			���	                                                ���\n");
								printf("			���	                                                ���\n");
								printf("			�������������������������������\n");
								printf("			�������������������������������\n");
								gotoxy(40, 12);
								setcolor(12, 0);
								printf("score : %d", score);
								gotoxy(40, 14);
								setcolor(11, 0);
								pst = (double)(end - start) / CLK_TCK;
								pst = savetime + pst;							//�Ͻ������Ͽ������� �ð��� ������ �ð��� �����ֱ� (savetime)
								printf("���ӽð� : %.2f", pst);
								gotoxy(40, 26);
								setcolor(12, 0);
								printf("��");
								setcolor(7, 0);
								while (j)
								{
									key = _getch();
									gotoxy(x, y);
									printf(" ");
									switch (key)
									{
									case 'a':
										mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
										mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
										x = 40;
										break;
									case 'd':
										mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
										mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
										x = 55;
										break;
									case 13:
										if (x == 40)
											exit(0);
										else if (x == 55)
										{
											menu1();
											j = j - 1;
											k = k - 1;
										}
										break;
									}
									gotoxy(x, y);
									setcolor(12, 0);
									printf("��");
									setcolor(7, 0);
								}
							}

						}
						continue;
					}
					NOTE[i].y++;
					gotoxy(NOTE[i].x, NOTE[i].y);
					if (NOTE[i].x == 85)
						setcolor(0, 0);
					printf("����");
					setcolor(7, 0);

				}
				else if (NOTE[i].exist == FALSE)
					continue;
			}
		}
		gotoxy(13, 26);
		printf("     ");
		gotoxy(13, 27);
		printf("     ");
		gotoxy(13, 28);
		printf("     ");
		gotoxy(13, 29);
		printf("     ");
		gotoxy(13, 30);
		printf("     ");
		if (IsKeyDown('D'))
		{
			setcolor(11, 0);
			gotoxy(10, 20);
			printf("(��)");
			gotoxy(13, 26);
			printf("    ��");
			gotoxy(13, 27);
			printf("  ���");
			gotoxy(13, 28);
			printf("����");
			gotoxy(13, 29);
			printf("����");
			gotoxy(13, 30);
			printf("����");
			setcolor(7, 0);
			for (i = 0; i <= 20; i++)
			{
				if (NOTE[i].x == 10 && NOTE[i].y == 19)
				{
					gotoxy(10, 19);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 50;
					gotoxy(70, 17);
					setcolor(10, 0);
					printf("E X C E L L E N T   ");
					setcolor(7, 0);
					combo = combo + 1;
				}
				if (NOTE[i].x == 10 && NOTE[i].y == 20)
				{
					gotoxy(10, 20);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 100;
					gotoxy(70, 17);
					setcolor(14, 0);
					printf("P  E  R  F  E  C  T       ");
					setcolor(7, 0);
					combo = combo + 1;
				}
			}
		}
		gotoxy(23, 26);
		printf("     ");
		gotoxy(23, 27);
		printf("     ");
		gotoxy(23, 28);
		printf("     ");
		gotoxy(23, 29);
		printf("     ");
		gotoxy(23, 30);
		printf("     ");
		if (IsKeyDown('F'))
		{
			setcolor(12, 0);
			gotoxy(20, 20);
			printf(" (��) ");
			gotoxy(23, 26);
			printf("    ��");
			gotoxy(23, 27);
			printf("  ���");
			gotoxy(23, 28);
			printf("����");
			gotoxy(23, 29);
			printf("����");
			gotoxy(23, 30);
			printf("����");
			setcolor(7, 0);
			for (i = 0; i <= 20; i++)
			{
				if (NOTE[i].x == 20 && NOTE[i].y == 19)
				{
					gotoxy(20, 19);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 50;
					gotoxy(70, 17);
					setcolor(10, 0);
					printf("E X C E L L E N T   ");
					setcolor(7, 0);
					combo = combo + 1;
				}
				if (NOTE[i].x == 20 && NOTE[i].y == 20)
				{
					gotoxy(20, 20);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 100;
					gotoxy(70, 17);
					setcolor(14, 0);
					printf("P  E  R  F  E  C  T       ");
					setcolor(7, 0);
					combo = combo + 1;
				}
			}
		}
		gotoxy(33, 26);
		printf("     ");
		gotoxy(33, 27);
		printf("     ");
		gotoxy(33, 28);
		printf("     ");
		gotoxy(33, 29);
		printf("     ");
		gotoxy(33, 30);
		printf("     ");
		if (IsKeyDown(' '))
		{
			setcolor(2, 0);
			gotoxy(30, 20);
			printf(" (��) ");
			gotoxy(33, 26);
			printf("����");
			gotoxy(33, 27);
			printf("����");
			gotoxy(33, 28);
			printf("����");
			gotoxy(33, 29);
			printf("����");
			gotoxy(33, 30);
			printf("����");
			setcolor(7, 0);
			for (i = 0; i <= 20; i++)
			{
				if (NOTE[i].x == 30 && NOTE[i].y == 19)
				{
					gotoxy(30, 19);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 50;
					gotoxy(70, 17);
					setcolor(10, 0);
					printf("E X C E L L E N T   ");
					setcolor(7, 0);
					combo = combo + 1;
				}
				if (NOTE[i].x == 30 && NOTE[i].y == 20)
				{
					gotoxy(30, 20);
					printf("      ");
					NOTE[i].x = 85;
					score = score + 100;
					gotoxy(70, 17);
					setcolor(14, 0);
					printf("P  E  R  F  E  C  T       ");
					setcolor(7, 0);
					combo = combo + 1;
				}
			}
		}
		gotoxy(43, 26);
		printf("     ");
		gotoxy(43, 27);
		printf("     ");
		gotoxy(43, 28);
		printf("     ");
		gotoxy(43, 29);
		printf("     ");
		gotoxy(43, 30);
		printf("     ");
		if (IsKeyDown('J'))
		{
			setcolor(3, 0);
			gotoxy(40, 20);
			printf(" (��) ");
			gotoxy(43, 26);
			printf("��    ");
			gotoxy(43, 27);
			printf("���  ");
			gotoxy(43, 28);
			printf("����");
			gotoxy(43, 29);
			printf("����");
			gotoxy(43, 30);
			printf("����");
			setcolor(7, 0);
			for (i = 0; i <= 20; i++)
			{
				if (NOTE[i].x == 40 && NOTE[i].y == 19)
				{
					gotoxy(40, 19);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 50;
					gotoxy(70, 17);
					setcolor(10, 0);
					printf("E X C E L L E N T   ");
					setcolor(7, 0);
					combo = combo + 1;
				}
				if (NOTE[i].x == 40 && NOTE[i].y == 20)
				{
					gotoxy(40, 20);
					printf("      ");
					NOTE[i].x = 85;
					score = score + 100;
					gotoxy(70, 17);
					setcolor(14, 0);
					printf("P  E  R  F  E  C  T       ");
					setcolor(7, 0);
					combo = combo + 1;
				}
			}
		}
		gotoxy(53, 26);
		printf("     ");
		gotoxy(53, 27);
		printf("     ");
		gotoxy(53, 28);
		printf("     ");
		gotoxy(53, 29);
		printf("     ");
		gotoxy(53, 30);
		printf("     ");
		if (IsKeyDown('K'))
		{
			setcolor(9, 0);
			gotoxy(50, 20);
			printf(" (��) ");
			gotoxy(53, 26);
			printf("��    ");
			gotoxy(53, 27);
			printf("���  ");
			gotoxy(53, 28);
			printf("����");
			gotoxy(53, 29);
			printf("����");
			gotoxy(53, 30);
			printf("����");
			setcolor(7, 0);
			for (i = 0; i <= 20; i++)
			{
				if (NOTE[i].x == 50 && NOTE[i].y == 19)
				{
					gotoxy(50, 19);
					printf("     ");
					NOTE[i].x = 85;
					score = score + 50;
					gotoxy(70, 17);
					setcolor(10, 0);
					printf("E X C E L L E N T   ");
					setcolor(7, 0);
					combo = combo + 1;
				}
				if (NOTE[i].x == 50 && NOTE[i].y == 20)
				{
					gotoxy(50, 20);
					printf("      ");
					NOTE[i].x = 85;
					score = score + 100;
					gotoxy(70, 17);
					setcolor(14, 0);
					printf("P  E  R  F  E  C  T       ");
					setcolor(7, 0);
					combo = combo + 1;
				}
			}
		}
		if (IsKeyDown(27))
		{
			int i = 1;
			int x = 74, y = 5;
			end = clock();
			pst = (double)(end - start) / CLK_TCK;
			savetime = savetime + pst;									//�Ͻ������ϱ������� ����� �ð� ���� (�Ͻ������� �ѹ��� �ϴ°��� �ƴ϶� �������Ҽ��� �ֱ⋚����)
			mciSendString("close MISS.mp3", NULL, 0, NULL);
			mciSendString("play �Ͻ�����start.mp3 repeat", NULL, 0, NULL);
			mciSendString("pause ��������.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("pause window.mp3", NULL, 0, NULL);
			setcolor(11, 0);
			gotoxy(70, 2); printf("----------------------------------");
			gotoxy(70, 3); printf("|  ���θ޴��� ���ư��ðڽ��ϱ�?  |");
			gotoxy(70, 4); printf("|                                |");
			gotoxy(70, 5); printf("|      YES          NO           |");
			gotoxy(70, 6); printf("|                                |");
			gotoxy(70, 7); printf("----------------------------------");
			setcolor(7, 0);
			gotoxy(x, y);
			setcolor(12, 0);
			printf("��");
			setcolor(7, 0);
			while (i)
			{
				key = _getch();
				gotoxy(x, y);
				printf(" ");
				switch (key)
				{
				case 'a':
					mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
					mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
					x = 74;
					break;
				case 'd':
					mciSendString("close Ŀ��.mp3", NULL, 0, NULL);
					mciSendString("play Ŀ��.mp3", NULL, 0, NULL);
					x = 85;
					break;
				case 13:
				{
						   if (x == 74)
						   {
							   menu1();
							   k = k - 1;
							   i = i - 1;
						   }
						   else if (x == 85)
						   {
							   gotoxy(70, 2); printf("                                  ");
							   gotoxy(70, 3); printf("                                  ");
							   gotoxy(70, 4); printf("                                  ");
							   gotoxy(70, 5); printf("                                  ");
							   gotoxy(70, 6); printf("                                  ");
							   gotoxy(70, 7); printf("                                  ");
							   i = i - 1;
							   mciSendString("close �Ͻ�����start.mp3", NULL, 0, NULL);
							   mciSendString("play �Ͻ�����end.mp3", NULL, 0, NULL);
							   for (j = 5; j>0; j--)
							   {
								   setcolor(11, 0);
								   gotoxy(70, 5);
								   printf("%d���Ľ����մϴ�", j);
								   Sleep(1000);
								   setcolor(7, 0);
							   }
						   }
						   break;
				}
				}
				mciSendString("close �Ͻ�����end.mp3", NULL, 0, NULL);
				setcolor(12, 0);
				gotoxy(x, y);
				printf("��");
				setcolor(7, 0);
			}
			gotoxy(x, y);
			printf(" ");
			gotoxy(70, 5);
			printf("                     ");
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ��������.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume ���ɿ���.wav", NULL, 0, NULL);
			mciSendString("resume window.mp3", NULL, 0, NULL);
			start = clock();   // �ð� �ٽ�����
		}
		count++;
		Sleep(G);
		gotoxy(70, 19);
		printf("score : %d ", score);
		gotoxy(70, 21);
		printf("��ģ���� : %d", Life);
		gotoxy(70, 15);
		setcolor(11, 0);
		printf(" %d  combo", combo);
		setcolor(7, 0);
	}
}



unsigned __stdcall T0(void *arg)
{
	int i1 = 0;
	for (i1 = 0; i1 <= 21; i1++)
	{
		Sleep(G);
		if (esc == 10)			//esc�� �������� 10���� �������־��⿡ ������� esc�� �����ų� ��������		
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(G);			//���� �������� ��Ʈ�������µ� ���ȵƱ⶧���� �ٽû��
		}
		EnterCriticalSection(&m_csGDILock);
		setcolor(7, 0);
		gotoxy(10, i1 + 1); printf("%s", note1_p);
		gotoxy(10, i1); printf("%s", note2_p);
		gotoxy(10, 22); printf("%s", note2_p);			//y = 22 �϶� Ű�Է¹����� ���� �Ȼ�����⶧���� ����
		LeaveCriticalSection(&m_csGDILock);
		if (IsKeyDown('D'))
		{
			if (i1 == 19)
			{
				combo1++;
				score1 = score1 + 50;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(10, 0);
				gotoxy(70, 17); printf("E X C E L L E N T   ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(11, 0);
				gotoxy(10, 20); printf("%s", note3_p);
				gotoxy(10, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
			if (i1 == 20)
			{
				combo1++;
				score1 = score1 + 100;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(14, 0);
				gotoxy(70, 17); printf("P  E  R  F  E  C  T       ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(11, 0);
				gotoxy(10, 20); printf("%s", note3_p);
				gotoxy(10, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
		}
		else if (i1 == 21)
		{
			mciSendString("play MISS.mp3", NULL, 0, NULL);
			combo1 = 0;
			life1--;
			EnterCriticalSection(&m_csGDILock);
			setcolor(11, 0);
			gotoxy(70, 15); printf("  %d  combo", combo1);
			gotoxy(10, 22); printf("%s", note2_p);
			setcolor(13, 0);
			gotoxy(70, 17); printf("M   I   S   S       ");
			setcolor(12, 0);
			gotoxy(70, 21); printf("life : %2d", life1);
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0)			// 0���� �س�� �����帶�� �������־ 0�϶� �̺κ��� ���о �����尡 ����ȉƼ����� 
		{													// musicENDtime�� �뷡�� ���������� �����尡 ����Ǿ���ؼ� �־���
			break;											// �Ͻ������ϰ� �޴��� ���ư����� �����尡 ����Ǿ�� �ؼ�
		}
	}

	return 0;
}

unsigned __stdcall T1(void *arg)
{
	int i2 = 0;

	for (i2 = 0; i2 <= 21; i2++)
	{
		Sleep(G);
		if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(G);
		}
		EnterCriticalSection(&m_csGDILock);
		setcolor(7, 0);
		gotoxy(20, i2 + 1); printf("%s", note1_p);
		gotoxy(20, i2); printf("%s", note2_p);
		gotoxy(20, 22); printf("%s", note2_p);				//y = 22 �϶� Ű�Է¹����� ���� �Ȼ�����⶧���� ����
		LeaveCriticalSection(&m_csGDILock);
		if (IsKeyDown('F'))
		{
			if (i2 == 19)
			{
				combo1++;
				score1 = score1 + 50;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(10, 0);
				gotoxy(70, 17); printf("E X C E L L E N T   ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(12, 0);
				gotoxy(20, 20); printf("%s", note3_p);
				gotoxy(20, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
			if (i2 == 20)
			{
				combo1++;
				score1 = score1 + 100;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(14, 0);
				gotoxy(70, 17); printf("P  E  R  F  E  C  T       ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(12, 0);
				gotoxy(20, 20); printf("%s", note3_p);
				gotoxy(20, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
		}
		else if (i2 == 21)
		{
			mciSendString("play MISS(2).mp3", NULL, 0, NULL);
			combo1 = 0;
			life1--;
			EnterCriticalSection(&m_csGDILock);
			setcolor(11, 0);
			gotoxy(70, 15); printf("  %d  combo", combo1);
			gotoxy(20, 22); printf("%s", note2_p);
			setcolor(13, 0);
			gotoxy(70, 17); printf("M   I   S   S       ");
			setcolor(12, 0);
			gotoxy(70, 21); printf("life : %2d", life1);
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0)
		{
			break;
		}
	}
	return 0;
}

unsigned __stdcall T2(void *arg)
{
	int i3 = 0;

	for (i3 = 0; i3 <= 21; i3++)
	{
		Sleep(G);
		if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(G);
		}
		EnterCriticalSection(&m_csGDILock);
		setcolor(7, 0);
		gotoxy(30, i3 + 1); printf("%s", note1_p);
		gotoxy(30, i3); printf("%s", note2_p);
		gotoxy(30, 22); printf("%s", note2_p);				//y = 22 �϶� Ű�Է¹����� ���� �Ȼ�����⶧���� ����
		LeaveCriticalSection(&m_csGDILock);
		if (IsKeyDown(' '))
		{
			if (i3 == 19)
			{
				combo1++;
				score1 = score1 + 50;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(10, 0);
				gotoxy(70, 17); printf("E X C E L L E N T   ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(2, 0);
				gotoxy(30, 20); printf("%s", note3_p);
				gotoxy(30, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
			if (i3 == 20)
			{
				combo1++;
				score1 = score1 + 100;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(14, 0);
				gotoxy(70, 17); printf("P  E  R  F  E  C  T       ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(2, 0);
				gotoxy(30, 20); printf("%s", note3_p);
				gotoxy(30, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
		}
		else if (i3 == 21)
		{
			mciSendString("play MISS(3).mp3", NULL, 0, NULL);
			combo1 = 0;
			life1--;
			EnterCriticalSection(&m_csGDILock);
			setcolor(11, 0);
			gotoxy(70, 15); printf("  %d  combo", combo1);
			gotoxy(30, 22); printf("%s", note2_p);
			setcolor(13, 0);
			gotoxy(70, 17); printf("M   I   S   S       ");
			setcolor(12, 0);
			gotoxy(70, 21); printf("life : %2d", life1);
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0)
		{
			break;
		}
	}
	return 0;
}

unsigned __stdcall T3(void *arg)
{
	int i4 = 0;

	for (i4 = 0; i4 <= 21; i4++)
	{
		Sleep(G);
		if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(G);
		}
		EnterCriticalSection(&m_csGDILock);
		setcolor(7, 0);
		gotoxy(40, i4 + 1); printf("%s", note1_p);
		gotoxy(40, i4); printf("%s", note2_p);
		gotoxy(40, 22); printf("%s", note2_p);				//y = 22 �϶� Ű�Է¹����� ���� �Ȼ�����⶧���� ����
		LeaveCriticalSection(&m_csGDILock);
		if (IsKeyDown('J'))
		{
			if (i4 == 19)
			{
				combo1++;
				score1 = score1 + 50;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(10, 0);
				gotoxy(70, 17); printf("E X C E L L E N T   ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(3, 0);
				gotoxy(40, 20); printf("%s", note3_p);
				gotoxy(40, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
			if (i4 == 20)
			{
				combo1++;
				score1 = score1 + 100;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(14, 0);
				gotoxy(70, 17); printf("P  E  R  F  E  C  T       ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(3, 0);
				gotoxy(40, 20); printf("%s", note3_p);
				gotoxy(40, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
		}
		else if (i4 == 21)
		{
			mciSendString("play MISS(4).mp3", NULL, 0, NULL);
			combo1 = 0;
			life1--;
			EnterCriticalSection(&m_csGDILock);
			setcolor(11, 0);
			gotoxy(70, 15); printf("  %d  combo", combo1);
			gotoxy(40, 22); printf("%s", note2_p);
			setcolor(13, 0);
			gotoxy(70, 17); printf("M   I   S   S       ");
			setcolor(12, 0);
			gotoxy(70, 21); printf("life : %2d", life1);
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0)
		{
			break;
		}
	}
	return 0;
}

unsigned __stdcall T4(void *arg)
{
	int i5 = 0;

	for (i5 = 0; i5 <= 21; i5++)
	{
		Sleep(G);
		if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(G);
		}
		EnterCriticalSection(&m_csGDILock);
		setcolor(7, 0);
		gotoxy(50, i5 + 1); printf("%s", note1_p);
		gotoxy(50, i5); printf("%s", note2_p);
		gotoxy(50, 22); printf("%s", note2_p);				//y = 22 �϶� Ű�Է¹����� ���� �Ȼ�����⶧���� ����
		LeaveCriticalSection(&m_csGDILock);
		if (IsKeyDown('K'))
		{
			if (i5 == 19)
			{
				combo1++;
				score1 = score1 + 50;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(10, 0);
				gotoxy(70, 17); printf("E X C E L L E N T   ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(12, 0);
				setcolor(9, 0);
				gotoxy(50, 20); printf("%s", note3_p);
				gotoxy(50, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
			if (i5 == 20)
			{
				combo1++;
				score1 = score1 + 100;
				EnterCriticalSection(&m_csGDILock);
				setcolor(7, 0);
				gotoxy(70, 19); printf("score : %d", score1);
				setcolor(14, 0);
				gotoxy(70, 17); printf("P  E  R  F  E  C  T       ");
				setcolor(11, 0);
				gotoxy(70, 15); printf("  %d  combo", combo1);
				setcolor(12, 0);
				setcolor(9, 0);
				gotoxy(50, 20); printf("%s", note3_p);
				gotoxy(50, 21); printf("%s", note2_p);
				setcolor(7, 0);
				LeaveCriticalSection(&m_csGDILock);
				break;
			}
		}
		else if (i5 == 21)
		{
			mciSendString("play MISS(5).mp3", NULL, 0, NULL);
			combo1 = 0;
			life1--;
			EnterCriticalSection(&m_csGDILock);
			setcolor(11, 0);
			gotoxy(70, 15); printf("  %d  combo", combo1);
			gotoxy(50, 22); printf("%s", note2_p);
			setcolor(13, 0);
			gotoxy(70, 17); printf("M   I   S   S       ");
			setcolor(12, 0);
			gotoxy(70, 21); printf("life : %2d", life1);
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0)
		{
			break;
		}
	}
	return 0;
}

unsigned __stdcall LINE1(void *arg)
{
	int i = 0;

	for (i = 0; i<a1; i++)
	{
		Sleep(mix1[i]);			//�Ʒ��� ���ǿ� �ش��� ���������� ������̰��ݸ�ŭ ������ �ɸ��� ���������

		if (life1 <= 0 || YES == 10)//���� ���� esc�� ������ �Ʒ��� else if ������ ���������� ���� esc�� �����ٰ� �ٷ� ���θ޴��� ���ư��ԵǸ� �޴����� esc�� 0���� �ʱ�ȭ���ִµ�
			break;									  //�ٸ� ������� esc���� 0�̵Ǿ ���ǹ��� ������Ű�����ؼ� �����尡 ���ᰡ�ȵž ����. 
		else if (esc == 10)				//������� esc�� �����ų� �������� �ٵ� �� ������ esc==10���ΰɾ��ĸ�
		{						//���� esc�� �������� ������� Sleep�� ������ esc�� ������ �Է��� �ȵż� 
			while (G != 50)		//esc�� �������� esc=10���� �����������ؼ� ������ �̿��Ѱ�
			{
				Sleep(1);
				if (YES == 10)			//�Ͻ����������� ���θ޴���  ������ �����尡 ����ǵ���
					return 0;
			}
			Sleep(mix1[i] / 2);	//�Ͻ������ϱ����� ��Ʈ�� ��������� �������� ��Ʈ�� ��Ʈ������ �����ε� �Ͻ������Ҷ� Sleep���� �ѹ� �Է¹ް� ���Ա⶧���� ������ 2�� ���־ ������ ���밣�� ���̸� ����.
			_beginthreadex(NULL, 0, T0, 0, 0, NULL);
			continue;									//continue�� �Ʒ��� �����带 �����Ű�� �ʰ� �ݺ�
		}
		_beginthreadex(NULL, 0, T0, 0, 0, NULL);

	}
	a = 1;
	return 0;
}

unsigned __stdcall LINE2(void *arg)
{
	int i = 0;

	for (i = 0; i<b1; i++)
	{
		Sleep(mix2[i]);

		if (life1 <= 0 || YES == 10)
			break;
		else if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(mix2[i] / 2);
			_beginthreadex(NULL, 0, T1, 0, 0, NULL);
			continue;
		}
		_beginthreadex(NULL, 0, T1, 0, 0, NULL);

	}
	b = 1;
	return 0;
}

unsigned __stdcall LINE3(void *arg)
{
	int i = 0;

	for (i = 0; i<c1; i++)
	{
		Sleep(mix3[i]);

		if (life1 <= 0 || YES == 10)
			break;
		else if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(mix3[i] / 2);
			_beginthreadex(NULL, 0, T2, 0, 0, NULL);
			continue;
		}
		_beginthreadex(NULL, 0, T2, 0, 0, NULL);

	}
	c = 1;
	return 0;
}
unsigned __stdcall LINE4(void *arg)
{
	int i = 0;

	for (i = 0; i<d1; i++)
	{

		Sleep(mix4[i]);
		if (life1 <= 0 || YES == 10)
			break;
		else if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(mix4[i] / 2);
			_beginthreadex(NULL, 0, T3, 0, 0, NULL);
			continue;
		}

		_beginthreadex(NULL, 0, T3, 0, 0, NULL);

	}
	d = 1;
	return 0;
}
unsigned __stdcall LINE5(void *arg)
{
	int i = 0;

	for (i = 0; i<f1; i++)
	{

		Sleep(mix5[i]);
		if (life1 <= 0 || YES == 10)
			break;
		else if (esc == 10)
		{
			while (G != 50)
			{
				Sleep(1);
				if (YES == 10)
					return 0;
			}
			Sleep(mix5[i] / 2);
			_beginthreadex(NULL, 0, T4, 0, 0, NULL);
			continue;
		}

		_beginthreadex(NULL, 0, T4, 0, 0, NULL);

	}
	e = 1;
	return 0;
}
unsigned __stdcall D(void *arg)
{
	while (1)
	{
		if (IsKeyDown('D'))
		{
			EnterCriticalSection(&m_csGDILock);
			setcolor(11, 0);
			gotoxy(13, 26);
			printf("    ��");
			gotoxy(13, 27);
			printf("  ���");
			gotoxy(13, 28);
			printf("����");
			gotoxy(13, 29);
			printf("����");
			gotoxy(13, 30);
			printf("����");
			LeaveCriticalSection(&m_csGDILock);
			Sleep(50);
			EnterCriticalSection(&m_csGDILock);
			setcolor(7, 0);
			gotoxy(13, 26);
			printf("     ");
			gotoxy(13, 27);
			printf("     ");
			gotoxy(13, 28);
			printf("     ");
			gotoxy(13, 29);
			printf("     ");
			gotoxy(13, 30);
			printf("     ");
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0 || (a + b + c + d + e) == 5 || YES == 10)
			break;
		Sleep(1);
	}
	return 0;
}
unsigned __stdcall F(void *arg)
{
	while (1)
	{
		if (IsKeyDown('F'))
		{
			EnterCriticalSection(&m_csGDILock);
			setcolor(12, 0);
			gotoxy(23, 26);
			printf("    ��");
			gotoxy(23, 27);
			printf("  ���");
			gotoxy(23, 28);
			printf("����");
			gotoxy(23, 29);
			printf("����");
			gotoxy(23, 30);
			printf("����");
			LeaveCriticalSection(&m_csGDILock);
			Sleep(50);
			EnterCriticalSection(&m_csGDILock);
			setcolor(7, 0);
			gotoxy(23, 26);
			printf("     ");
			gotoxy(23, 27);
			printf("     ");
			gotoxy(23, 28);
			printf("     ");
			gotoxy(23, 29);
			printf("     ");
			gotoxy(23, 30);
			printf("     ");
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0 || (a + b + c + d + e) == 5 || YES == 10)
			break;
		Sleep(1);
	}
	return 0;
}
unsigned __stdcall SPACE(void *arg)
{
	while (1)
	{
		if (IsKeyDown(' '))
		{
			EnterCriticalSection(&m_csGDILock);
			setcolor(2, 0);
			gotoxy(33, 26);
			printf("����");
			gotoxy(33, 27);
			printf("����");
			gotoxy(33, 28);
			printf("����");
			gotoxy(33, 29);
			printf("����");
			gotoxy(33, 30);
			printf("����");
			LeaveCriticalSection(&m_csGDILock);
			Sleep(50);
			EnterCriticalSection(&m_csGDILock);
			setcolor(7, 0);
			gotoxy(33, 26);
			printf("     ");
			gotoxy(33, 27);
			printf("     ");
			gotoxy(33, 28);
			printf("     ");
			gotoxy(33, 29);
			printf("     ");
			gotoxy(33, 30);
			printf("     ");
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0 || (a + b + c + d + e) == 5 || YES == 10)
			break;
		Sleep(1);
	}
	return 0;
}
unsigned __stdcall J(void *arg)
{
	while (1)
	{
		if (IsKeyDown('J'))
		{
			EnterCriticalSection(&m_csGDILock);
			setcolor(3, 0);
			gotoxy(43, 26);
			printf("��    ");
			gotoxy(43, 27);
			printf("���  ");
			gotoxy(43, 28);
			printf("����");
			gotoxy(43, 29);
			printf("����");
			gotoxy(43, 30);
			printf("����");
			LeaveCriticalSection(&m_csGDILock);
			Sleep(50);
			EnterCriticalSection(&m_csGDILock);
			setcolor(7, 0);
			gotoxy(43, 26);
			printf("     ");
			gotoxy(43, 27);
			printf("     ");
			gotoxy(43, 28);
			printf("     ");
			gotoxy(43, 29);
			printf("     ");
			gotoxy(43, 30);
			printf("     ");
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0 || (a + b + c + d + e) == 5 || YES == 10)
			break;
		Sleep(1);
	}
	return 0;
}
unsigned __stdcall K(void *arg)
{
	while (1)
	{
		if (IsKeyDown('K'))
		{
			EnterCriticalSection(&m_csGDILock);
			setcolor(9, 0);
			gotoxy(53, 26);
			printf("��    ");
			gotoxy(53, 27);
			printf("���  ");
			gotoxy(53, 28);
			printf("����");
			gotoxy(53, 29);
			printf("����");
			gotoxy(53, 30);
			printf("����");
			LeaveCriticalSection(&m_csGDILock);
			Sleep(50);
			EnterCriticalSection(&m_csGDILock);
			setcolor(7, 0);
			gotoxy(53, 26);
			printf("     ");
			gotoxy(53, 27);
			printf("     ");
			gotoxy(53, 28);
			printf("     ");
			gotoxy(53, 29);
			printf("     ");
			gotoxy(53, 30);
			printf("     ");
			LeaveCriticalSection(&m_csGDILock);
		}
		else if (life1 <= 0 || (a + b + c + d + e) == 5 || YES == 10)
			break;
		Sleep(1);
	}
	return 0;
}
void music1()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);											//�� ���ǿ����� LINE5���� ������ ����� , ��������ִ� �迭�� �� 5����
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music2()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music3()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music4()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music5()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music6()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music7()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void music8()
{
	system("cls");

	G = 50;
	YES = 0;
	a = 0, b = 0, c = 0, d = 0, e = 0;
	mciSendString("play ��������.wav", NULL, 0, NULL);
	background();

	_beginthreadex(NULL, 0, LINE1, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE2, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE3, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE4, 0, 0, NULL);
	_beginthreadex(NULL, 0, LINE5, 0, 0, NULL);
	_beginthreadex(NULL, 0, D, 0, 0, NULL);
	_beginthreadex(NULL, 0, F, 0, 0, NULL);
	_beginthreadex(NULL, 0, SPACE, 0, 0, NULL);
	_beginthreadex(NULL, 0, J, 0, 0, NULL);
	_beginthreadex(NULL, 0, K, 0, 0, NULL);
	pause();
	END2();
}
void infinitymusic1()
{
	system("cls");
	mciSendString("play ��������.wav", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic2()
{
	system("cls");
	mciSendString("play ���ɿ���.wav repeat", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic3()
{
	system("cls");
	mciSendString("play ���ɿ���.wav repeat", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic4()
{
	system("cls");
	mciSendString("play ���ɿ���.wav repeat", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic5()
{
	system("cls");
	mciSendString("play ���ɿ���.wav repeat", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic6()
{
	system("cls");
	mciSendString("play ���ɿ���.wav repeat", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic7()
{
	system("cls");
	mciSendString("play ���ɿ���.wav repeat", NULL, 0, NULL);
	infinitymode(G);
}
void infinitymusic8()
{
	system("cls");
	mciSendString("play window.mp3 repeat", NULL, 0, NULL);
	infinitymode(G);
}
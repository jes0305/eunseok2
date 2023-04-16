// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<conio.h>
#include<Windows.h>

int print_title() 
{
	std::cout << "*****************************************" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*              지렁이 게임              *" << std::endl;
	std::cout << "*             (Snake Bite)              *" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*  1. 게임 시작                         *" << std::endl;
	std::cout << "*  2. 게임 설명                         *" << std::endl;
	std::cout << "*  3. 게임 랭킹 보기                    *" << std::endl;
	std::cout << "*  4. 게임 종료 (esc)                   *" << std::endl;
	std::cout << "*****************************************" << std::endl;

	return 0;
}

void move_xy(int x, int y) 
{
	COORD po = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), po);
}


int print_game(int stage_w, int stage_h) 
{
	
	move_xy(stage_w,stage_h);

	return 0;
}

int print_intr() 
{
	std::cout << "******************************************" << std::endl;
	std::cout << " 타이틀 화면으로 돌아갑니까? Y/N " << std::endl;

	return 0;
}

int main()
{
	int run = 1;
	int stat = 0;

	while (run)
	{
		char input;
		switch (stat)
		{
		case 0:
			print_title();
			input = _getch();
			switch (input)
			{
			case '1':
				stat = 1;
				break;
			case '2':
				stat = 2;
				break;
			case '3':
				break;
			case '4':
				run = 0;
				break;
			case 27:
				run = 0;
				break;
			default:
				run = 0;
				break;
			}
		case 1:
			print_game(10,10);
			input = _getch();
		case 2:
			print_intr();
			input = _getch();
			switch (input)
			{
			case 'y':
				stat = 0;
				break;
			case 'n':
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}

	}

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

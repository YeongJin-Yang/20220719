// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*#include <iostream>
using namespace std;

void bts() {
	cout << "#";
}


int main()
{
	cout << "1";
	bts();
	cout << "2";
	bts();
	cout << "3";
	bts();
	cout << "4";
	bts();
	cout << "5";
	return  0;
}*/



//------------------위 아래 오른쪽 왼쪽 관련 문제다 == 바로 다이렉트 문제 ------------------------------------------

//------ 위아래왼쪽오른쪽 합구하기---------------------
/* #include <iostream>
using namespace std;
int main()
{
	int arr[4][5] = {
		5, 6, 7, 8, 9,
		1, 1, 1, 1, 1,
		0, 0, 0, 0, 0,
		1, 1, 1, 1, 1
	};
	int by = 1;
	int bx = 2;
	int sum = 0;
	//sum += arr[by - 1][bx + 0];
	//sum += arr[by + 1][bx + 0];
	//sum += arr[by + 0][bx - 1];
	//sum += arr[by + 0][bx + 1];
	int directY[4] = { -1, 1, 0, 0 };
	int directX[4] = { 0, 0, -1, 1 };
	for (int t = 0; t < 4; t++) {
		int nextY = by + directY[t];
		int nextX = bx + directX[t];
		//배열 밖으로 안나가게 하기 위해 if문 선언//
		if (nextY < 4 && nextY >= 0 && nextX >= 0 && nextX < 5) {
			sum += arr[nextY][nextX];
		}
	}
	cout << sum;

	return 0;
}*/




//------ x 대각선 값 합 구하기-----------------------------------------------
/*#include <iostream>
using namespace std;
int main()
{
	int arr[4][5] = {
		5, 6, 7, 8, 9,
		1, 1, 1, 1, 1,
		0, 0, 0, 0, 0,
		1, 1, 1, 1, 1
	};
};
int nextY = 1;
int nextX = 2;
int sum = 0;

int directY[5] = { -1,-1,1,1,0 }; // 탐색할 방향정하기 (괄호값은 더블 체크하기)
int directX[5] = { -1,1,-1,1,0 };

//int arr[105]  휴먼에러 방지를 위해 arr값을 100이 아닌 105로 


//다이렉트 돌린다,
int nextY = by + directY[t];
int nextX = bx + directX[t];
//배열 밖으로 안나가게 하기 위해 if문 선언//
if (nextY < 4 && nextY >= 0 && nextX >= 0 && nextX < 5) {
	sum += arr[nextY][nextX];
}


cout << sum;

return 0;
*/


//------봄버맨-----------------------------------------------
/*#include <iostream>
using namespace std;

int arr[4][5] = {
	5, 6, 7, 8, 9,
	1, 1, 1, 1, 1,
	2, 2, 2, 2, 2,
	1, 1, 1, 1, 1
};

int getJumsu(int by, int bx) {
	//한 지점에서 다섯방향 곱 구해서 리턴해줌
	int directY[5] = { -1, 1, 0, 0, 0 };
	int directX[5] = { 0, 0, 1, -1, 0 };

	int gop = 1;
	for (int t = 0; t < 5; t++) {
		int ny = by + directY[t];
		int nx = bx + directX[t];

		if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
		gop *= arr[ny][nx];
	}
	return gop;
}

int main()
{
	int maxi = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			int ret = getJumsu(y, x);
			if (ret > maxi) maxi = ret;
		}
	}
	cout << maxi;


	return 0;
}
*/

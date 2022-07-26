

/*//-------------------배열 일치 불일치 확인 (flag 사용) -----------------------------
#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[4] = { 1, 5, 7, 9 };

int main()
{
	//두 배열이 똑같은 값을 가지고 있는지 확인
	//1. flag 쓰는 방법
	int flag = 0;
	for (int x = 0; x < 4; x++) {
		if (arr1[x] != arr2[x]) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) cout << "O";
	else cout << "X";


	return 0;
}

//-------------------배열 일치 불일치 확인 (함수 사용) -----------------------------
#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[4] = { 1, 5, 7, 9 };

int isSame() {
	for (int i = 0; i < 4; i++) {
		if (arr1[i] != arr2[i]) return 0;
	}
	return 1;
}

int main()
{
	if (isSame() == 1) cout << "O";
	else cout << "X";

	return 0;
}



//---------arr2에 1,5,4,9가 몇개 있는지 호출하는 문제 --------------------
#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[12] = { 1, 1, 1, 5, 1, 5, 4, 9, 1, 5, 4, 9 };

int isSame(int index) {

	for (int i = 0; i < 4; i++) {
		if (arr1[i] != arr2[index + i]) return 0;
	}
	return 1;

	//for (int i = index; i < index + 4; i++) {
	//    if (arr1[i - index] != arr2[i]) return 0;
	//}
}

int main() {

	int cnt = 0;
	for (int i = 0; i <= (12 - 4); i++) {
		cnt += isSame(i);
	}
	cout << cnt;

	return 0;
}

//---------------배열에서 { 1, 5, 4, 9} 개수 찾기 (현영ver)-----------------------------------
#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[12] = { 1, 1, 1, 5, 1, 5, 4, 9, 1, 5, 4, 9 };

int isSame(int i) {
	for (int t = i; t < i + 3; t++)
	{
		if (arr1[t] != arr2[t]) return 0;
	}
	return 1;
}

int main() {

	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (isSame(i) == 1)
		{
			count++;
		}
	}
	cout << count << "개";
}

//--------------배열에서 { 1, 5, 4, 9} 개수 찾기--------------------------------------------------
#include <iostream>
using namespace std;

int arr[4] = { 1, 5, 4, 9 };  
int map[4][5] = {
	1, 5, 4, 9, 9,
	1, 1, 5, 4, 9,
	1, 1, 1, 1, 1,
	1, 5, 4, 9, 1
};

int isSame(int dy, int dx) { 
	for (int i = 0; i < 4; i++) {
		if (arr[i] != map[dy][dx + i]) return 0;
	}
	return 1;
}
//int main을 먼저짜고 그 다음 isSame을 작성 
int main() {

	int cnt = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x <= 1; x++) {
			cnt += isSame(y, x);   //프로그래밍에서는 y부터 호출함  
		}
	}
	cout << cnt;


	return 0;
}


//---------------------------------------------------------

#include <iostream>
using namespace std;

int arr[2][2] = {
	1, 5,
	1, 1
};
int map[4][5] = {
	1, 5, 4, 9, 9,
	1, 1, 5, 4, 9,
	1, 1, 1, 1, 1,
	1, 5, 4, 9, 1
};

int isSame(int dy, int dx) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (arr[y][x] != map[dy + y][dx + x]) return 0;
		}
	}
	return 1;
}

int main() {

	int cnt = 0;
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 3; x++) {
			cnt += isSame(y, x);
		}
	}
	cout << cnt;

	return 0;
}
*/
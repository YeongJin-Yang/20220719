

/*//-------------------�迭 ��ġ ����ġ Ȯ�� (flag ���) -----------------------------
#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[4] = { 1, 5, 7, 9 };

int main()
{
	//�� �迭�� �Ȱ��� ���� ������ �ִ��� Ȯ��
	//1. flag ���� ���
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

//-------------------�迭 ��ġ ����ġ Ȯ�� (�Լ� ���) -----------------------------
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



//---------arr2�� 1,5,4,9�� � �ִ��� ȣ���ϴ� ���� --------------------
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

//---------------�迭���� { 1, 5, 4, 9} ���� ã�� (����ver)-----------------------------------
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
	cout << count << "��";
}

//--------------�迭���� { 1, 5, 4, 9} ���� ã��--------------------------------------------------
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
//int main�� ����¥�� �� ���� isSame�� �ۼ� 
int main() {

	int cnt = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x <= 1; x++) {
			cnt += isSame(y, x);   //���α׷��ֿ����� y���� ȣ����  
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
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> alist(5);
	alist[1] = { 2 };
	alist[2] = { 4 };
	alist[3] = { 2, 1 };
	alist[4] = { 3 };

	return 0;
}


------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	int n;
	int x, y;

	cin >> n;

	for (y = 0; y < n; y++)
	{
		for (x = 1; x <= 5; x--)
		{
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;
}

------------------------------------------------ -
4�Է� ��
4444
3333
2222
1111

#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int x, y;

	for (y = n; y > n - 4; y--)
	{
		for (x = 0; x < 4; x++)
		{
			cout << y;
		}
		cout << endl;
	}

	return 0;
}




<------------------------------------------------------------>
���� 1.
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
	int num;
	int price;
	int lev;
};

vector<vector<Node>> alist(6);
queue<Node> q;
int used[10];

int main() {
	alist[1] = { {2, 5}, {3, 3}, {4, 15} };
	alist[2] = { {3, 7}, {4, 10} };
	alist[3] = { {1, 1}, {4, 2} };
	alist[4] = { {5, 20} };

	q.push({ 1, 0 });
	used[1] = 1;

	while (!q.empty()) {

		Node now = q.front();
		q.pop();

		////1. ������ Ž���� ����
		//if (now.num == 5) {
		//    cout << "����!! " << now.lev - 1 << "\n";
		//    cout << now.price;
		//    break;
		//}

		for (int i = 0; i < alist[now.num].size(); i++) {
			Node next = alist[now.num][i];
			q.push({ next.num, now.price + next.price, now.lev + 1 });

			//2. ������ ������ ���ڸ��� ����
			if (next.num == 5)
			{
				cout << "����!! " << now.lev << "\n";
				cout << now.price + next.price;
				return 0;
			}
		}
	}


	return 0;
}

-------------------------------------------------------------------- -

2
3MB
1ms
50

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a <= 4)
	{
		cout << "5" << endl;


	}
	else
	{
		cout << "0" << endl;

	}
	return 0;
}


--------------------------------------------------------------------------

#include <iostream>
using namespace std;

void KFC()
{
	int x;
	for (x = 0; x < 10; x++)
	{
		cout << "#";
	}
	cout << endl;
}
void MC()
{
	int x;
	for (x = 0; x < 10; x++)
	{
		cout << "@";
	}
	cout << endl;
}
int main()
{
	KFC();
	MC();

	return 0;
}

================================================ =


//O(1) ����� �ݺ� <---  
//O(1) == O(logn) ����
//O(n) == O(nlogn) ����

// ���� �� �� 


1�� �ݺ��� 1�� ����->���� ����
==========================================================

2��� �ݺ����� ����ϰھ�

n = 2200
O(N ^ 4)---> 1600000000ȸ �ݺ��ϴ� ���α׷�-- > 4�� for���̸� Ż���̴�!
(for���� ������ �������� �����ؾ���)

==========================================================

5�� �ð��� �ְھ�
1 <= N <= 200, 000

�־����� n�� ������ �� �غ���� ��

// ���� ���� 

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[10] = { 1,5,7,7,3,0,8,2 };
//
//int main() {
//	
//	//sort(&arr[0], &arr[8]);
//	sort(arr, arr + 8);  //��������
//
//	sort(arr, arr + 8, greater<int>());  //��������
//
//
//	return 0;
//
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int x = 0; x < i; x++) {
//		}
//	}
//	������ ��
//}
//
//----------------------------------------------------------------------
//
////O(1) ����� �ݺ� <---  
////O(1) == O(logn) ����
////O(n) == O(nlogn) ����
//
//// ���� �� �� 
//
//----------------------------------------------------------------------
//
//// 1. [�迭 �������� ����]
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int main(){
//
//vector<int> arr;
//
//sort(arr.begin(), arr.end());  //��������
//
//sort(arr.begin(), arr.end(), greater<int>()); //��������
//
//return 0;
//
//-----------------------------------------------------------------------
//�����ϴµ� �켱 ����
//1. ¦�� �켱
//2. ���� �� �켱 
//
//
//bool compare(int t, int v) {
//
//	// t�� �������� t�� �켱������ �� ���� ? 1. ����
//	// �ƴ� 0�̰�
//
//	if (t % 2 == 0 && v % 2 == 1) return 1;
//	if (t % 2 == 1 && v % 2 == 0) return 0;
//
//	return t < v;
//}
//
//int main(){
//
//	vector<int> arr;
//	
//	sort(arr.begin(), arr.end(), compare);
//
//
//---------------------------------------------------------------------------
//
//
// int main() {
//
//	// ���������� 10���� �Ѿ�� �� �� ���������� ����
//
//
//	int x;
//
//	int arr[1000][1000];
//
//	return 0;
// }
//
------------------------------------------------------------------------------



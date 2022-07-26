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
4입력 시
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
문제 1.
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

		////1. 목적지 탐색시 종료
		//if (now.num == 5) {
		//    cout << "도착!! " << now.lev - 1 << "\n";
		//    cout << now.price;
		//    break;
		//}

		for (int i = 0; i < alist[now.num].size(); i++) {
			Node next = alist[now.num][i];
			q.push({ next.num, now.price + next.price, now.lev + 1 });

			//2. 목적지 예약을 걸자마자 종료
			if (next.num == 5)
			{
				cout << "도착!! " << now.lev << "\n";
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


//O(1) 상수번 반복 <---  
//O(1) == O(logn) 유사
//O(n) == O(nlogn) 유사

// 머지 힙 퀵 


1억 반복당 1초 기준->문제 만듬
==========================================================

2억번 반복까지 허용하겠어

n = 2200
O(N ^ 4)---> 1600000000회 반복하는 프로그램-- > 4중 for문이면 탈락이다!
(for문이 어디까지 가능한지 생각해야함)

==========================================================

5초 시간을 주겠어
1 <= N <= 200, 000

주어지는 n이 작으면 다 해보라는 것

// 오후 수업 

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
//	sort(arr, arr + 8);  //오름차순
//
//	sort(arr, arr + 8, greater<int>());  //내림차순
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
//	제곱의 합
//}
//
//----------------------------------------------------------------------
//
////O(1) 상수번 반복 <---  
////O(1) == O(logn) 유사
////O(n) == O(nlogn) 유사
//
//// 머지 힙 퀵 
//
//----------------------------------------------------------------------
//
//// 1. [배열 오름내림 차순]
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
//sort(arr.begin(), arr.end());  //오름차순
//
//sort(arr.begin(), arr.end(), greater<int>()); //내림차순
//
//return 0;
//
//-----------------------------------------------------------------------
//정렬하는데 우선 순위
//1. 짝수 우선
//2. 작은 수 우선 
//
//
//bool compare(int t, int v) {
//
//	// t를 기준으로 t가 우선순위가 더 높다 ? 1. 리턴
//	// 아님 0이고
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
//	// 지역변수는 10만개 넘어가면 싹 다 전역변수로 ㄱㄱ
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



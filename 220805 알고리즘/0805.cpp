//#include<iostream>
//using namespace std;
//int main()
//{
//	char arr[3][3];
//	char t = 'A';
//	int x, y, x1, y1, x2, y2;
//	int temp;
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			arr[y][x] = t;
//			t++;
//		}
//	}
//	cin >> y1 >> x1 >> y2 >> x2;
//	temp = arr[y1][x1];
//	arr[y1][x1] = arr[y2][x2];
//	arr[y2][x2] = temp;
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			cout << arr[y][x];
//		}
//		cout << endl;
//	}
//	return 0;
//}


//---------------------------------------------------------
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct Node {
//	int witch; //위치
//	int cost;  //노드
//};
//
//vector<vector<Node>> alist(5); //0 ~ 4번 노드
//int result[5];
//
//bool operator<(Node v, Node t) {
//	return t.cost < v.cost;
//}
//priority_queue<Node> q;
//
//int main() {
//
//	alist[0] = { {1, 3}, {2, 10} };			// A -> B, C 가는 경로
//	alist[1] = { {2, 1}, {3, 7} };			// B -> C, D 가는 경로
//	alist[2] = { {0, 5}, {3, 5}, {4, 10} }; // C -> A, D, E 가는 경로
//	alist[3] = { {4, 2} };					// D -> E가는 경로
//
//	//다익스트라 초기세팅
//	int start = 0;
//	for (int i = 0; i < 5; i++) {
//		result[i] = 21e8;					// result 함수 무한대            
//	}
//	result[start] = 0;						// result 함수 초기값은 	0으로 세팅 (A자리)
//
//	q.push({ start, 0 });
//
//	while (!q.empty()) {
//
//		Node now = q.top();
//		q.pop();
//
//		//1. no dap 인가?
//		if (result[now.witch] < now.cost) continue; // 새로운 값이 등록된 값보다 크면 건너뜀
//
//
//		//다음 갈곳 큐에 등록
//		for (int i = 0; i < alist[now.witch].size(); i++) {
//			Node next = alist[now.witch][i];
//
//			if (now.cost + next.cost >= result[next.witch]) continue;
//			result[next.witch] = now.cost + next.cost;
//			q.push({ next.witch, now.cost + next.cost });
//		}
//	}
//
//	cout << result[4]<<endl;
//
//	return 0;
//}

//-------------------------------------------------------------------

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct Node {
//	int witch; //위치
//	int cost;  //노드
//};
//
//int N, E;
//cin >> N >> E;
//
//int v;
//
//vector<vector<Node>> alist(N); //0 ~ 4번 노드
//int result[N];
//
//
//
//
//bool operator<(Node v, Node t) {
//	return t.cost < v.cost;
//}
//priority_queue<Node> q;
//
//
//
//int main() {
//
//	for (int i = 0; i < E; i++) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//		v[from].push_back({ to,cost });
//	}
//
//	//다익스트라 초기세팅
//	int start = 0;
//	for (int i = 0; i < 5; i++) {
//		result[i] = 21e8;					// result 함수 무한대            
//	}
//	result[start] = 0;						// result 함수 초기값은 	0으로 세팅 (A자리)
//
//	q.push({ start, 0 });
//
//	while (!q.empty()) {
//
//		Node now = q.top();
//		q.pop();
//
//		//1. no dap 인가?
//		if (result[now.witch] < now.cost) continue; // 새로운 값이 등록된 값보다 크면 건너뜀
//
//
//		//다음 갈곳 큐에 등록
//		for (int i = 0; i < alist[now.witch].size(); i++) {
//			Node next = alist[now.witch][i];
//
//			if (now.cost + next.cost >= result[next.witch]) continue;
//			result[next.witch] = now.cost + next.cost;
//			q.push({ next.witch, now.cost + next.cost });
//		}
//	}
//
//	cout << result[N] << endl;
//
//	return 0;
//}


//------------------------------------------------------------------------------------------------------------
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int arr[2][4] = { {0,0,0,0},{0,0,0,0} };
//
//	int y, x;
//	cin >> y;
//	cin >> x;
//
//	cout << arr[y][x];
//
//
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, x, y;
//	int arr[2][4];
//	
//	for (y = 0; y < 2; y++)
//	{
//		for (x = 0; x < 4; x++)
//		{
//			arr[y][x] = 0;
//		}
//	}
//	
//	cin >> b >> a;
//	arr[b][a] = 1;
//	for (y = 0; y < 2; y++)
//	{
//		for (x = 0; x < 4; x++)
//		{
//			cout << arr[y][x] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//------------------------------------------------------------------
//
//int main()
//{
//	int a, b, x, y;
//	int arr[2][4];
//
//	for (y = 0; y < 2; y++)
//	{
//		for (x = 0; x < 4; x++)
//		{
//			arr[y][x] = 0;
//		}
//	}
//}
//
//cin >> b;
//cin >> a;
//arr[b][a] = 1;
//
//for (y = 0; y < 2; y++)
//{
//	for (x = 0; x < 4; x++)
//	{
//		cout << 
//	}
//}
//
//int y, x;
//
//
//int main() {
//
//	arr[3][2];
//
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 2; x++)
//		{
//			cout <<  
//		}
//	}
//
//
//
//}
//
//
//
////-------------------------------------------------------------------------------------------
//#include <iostream>
//
//#include <vector>
//
//#include <algorithm>
//
//#include <queue>
//using namespace std;
//
//struct Node {
//	int witch;
//	int cost;
//};
//
//vector<vector<Node>> alist(20000); //0 ~ 4번 노드
//int result[20000];
//
//bool operator<(Node v, Node t) {
//	return t.cost < v.cost;
//}
//priority_queue<Node> q;
//
//int main() {
//	int cntnode, cntedge;
//	cin >> cntnode >> cntedge;
//
//	for (int i = 0; i < cntedge; i++)
//	{
//		int from, to, cost;
//		cin >> from >> to >> cost;
//		alist[from].push_back({ to, cost });
//	}
//	//다익스트라 초기세팅
//	int start = 0;
//	for (int i = 0; i < cntnode; i++) {
//		result[i] = 21e8;
//	}
//	result[start] = 0;
//
//	q.push({ start, 0 });
//
//	while (!q.empty()) {
//
//		Node now = q.top();
//		q.pop();
//
//		//1. no dap 인가?
//		if (result[now.witch] < now.cost) continue;
//
//
//		//다음 갈곳 큐에 등록
//		for (int i = 0; i < alist[now.witch].size(); i++) {
//			Node next = alist[now.witch][i];
//
//			if (now.cost + next.cost >= result[next.witch]) continue;
//			result[next.witch] = now.cost + next.cost;
//			q.push({ next.witch, now.cost + next.cost });
//		}
//	}
//	if (result[cntnode - 1] == 21e8) cout << "impossible";
//	else
//		cout << result[cntnode - 1];
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//int main() 
//{
//	int x;
//	int y;
//	int i;
//
//	int arr[3][2];
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 2; x++)
//		{
//			cin >> arr[y][x];
//			arr[y][x] += 2;
//		}
//	}
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 2; x++)
//		{
//			cout << arr[y][x]<< " ";
//		
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//
//
//
//#include <iostream>
//using namespace std;
//
//
//
//input void();
//int A;
//cin >> A;
//
//output void();
//	if 
//
//
//
//
//int main() {
//	int arr1[1][5] = { {'B','D','5','Q','A'} };
//
//	int arr2[1][5] = { {'Q','E','R','E','F'} };
//
//	input();
//
//	output();
//
//
//
//
//
//	return 0;
//}
//
//	//-------------------------------------------------------------
//
//#include <iostream>
//	using namespace std;
//
//
//	char arr1[5] = { 'B','D','5','Q','A' };
//	char arr2[5] = { 'Q','E','R','E','F' };
//	char ch;
//
//
//	void input()
//	{
//		cin >> ch;
//	}
//	void output()
//	{
//		if (ch >= 'a' && ch <= 'z') {
//			//--------------------------------------
//			for (int i = 0; i < 5; i++) {
//				cout << arr1[i];
//			}
//		}
//		else if (ch >= 'A' && ch <= 'Z') {
//			//-------------------------------------
//			for (int i = 0; i < 5; i++) {
//				cout << arr2[i];
//			}
//		}
//		else if (ch >= '0' && ch <= '9') {
//			//-------------------------------------
//			for (char i = 'H'; i >= 'A'; i--) {
//				cout << i;
//			}
//		}
//	}
//	int main()
//	{
//		input();
//		output();
//
//		return 0;
//	}
//
//

//--------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;



void starBox()
{
	for (int i = 1; i <= 20; i= i+2)
	{
		cout << i << " ";
	}

}

//void macDoll()
//{
//	for (char i = 'H'; i >= 'A'; i --)  //알파벳

//	{
//		cout << i << " ";
//	}
//
//}

//void copyBean()
//{
//	for (int i = -5; i <= 5; i ++)
//	{
//		cout << i << " ";
//	}
//
//
//}
//
//
//int main() 
//{
//	int coffee;
//
//	cin >> coffee;
//
//	if (coffee >= 3500 && coffee <= 5000)
//	{
//		starBox();
//	}
//	else if (coffee >= 2500 && coffee <= 3500)
//	{
//		macDoll();
//	}
//	else
//	{
//		copyBean();
//	}
//
//	return 0;
//}
//
//
//
////--------------------------------------------
//
//#include <iostream>
//using namespace std;
//
//int arr[2][3];
////int sum= 0;
//int sum = 0;
//
//void input()
//{
//	//int x, y;
//	int x, y;
//	for (y = 0; y < 2; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			cin >> arr[y][x];
//		}
//	}
//}
//
//void process()
//{
//	for (y = 0; y < 2; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			//sum += arr[y][x];
//			sum += arr[y][x];
//		}
//	}
//
//}
//
//void output()
//{
//	cout << sum;
//}
//
//int main()
//{
//	input();
//	process();
//	output();
//
//
//return 0;
//
//}

//--------------------------------------------


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char A;
//	char B;
//	int i;
//
//	for (char A; A <= B; A++)
//	{
//		cout << 'A';
//	}
//
//
//
//	return 0;
//}


//---------------------------------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a, b;
//	int n, x, y;
//
//	cin >> a >> b;
//	cin >> n;
//
//	//for (y = 0; y < n; y++)
//	//{
//		for (x = a; x <= b; x++)
//		{
//			cout << (char)(x);
//		}
//		cout << endl;
//	//}
//
//
//	return 0;
//}

//-------------------

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x, y;
//	int i;
//	int A;
//	int B;
//
//	cin >> A;
//	cin >> B;
//
//	int arr[6][3];
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			arr[y][x] = A;
//
//		}
//	}
//
//	int arr[6][3];
//	for (y = 3; y < 6; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			arr[y][x] = B;
//		}
//	}
//
//
//
//
//
//
//
//
//	return 0;
//}
//----------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	char arr[6][3];
	int  x, y;
	char a, b;
	cin >> a >> b;

	for (y = 0; y <4; y++)
	{
		for (x = 0; x < 3; x++)
		{
			arr[y][x] = a;
		}
	}
	for (y =4; y < 6; y++)
	{
		for (x = 0; x < 3; x++)
		{
			arr[y][x] = b;
		}
	}
	for (y = 0; y < 6; y++)
	{
		for (x = 0; x < 3; x++)
		{
			cout << arr[y][x];
		}
		cout << endl;
	}

	return 0;
}
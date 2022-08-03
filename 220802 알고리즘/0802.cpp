
//---------------------------------------------------------------------------------

//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct Node {
//	int y, x;
//	int lev;
//};
//
//
//int map[100][100];
//int directY[8] = { 2,2,-2,-2,1,1,-1,-1 }; 
//int directX[8] = { 1,-1,1,-1,2,-2,2,-2 };
//
//queue<Node> q;
//
//int main()
//{
//
//	int a, b;
//	int c, d, e, f;
//	int lastLev = 0;
//	cin >> a >> b;
//	cin >> c >> d;
//	cin >> e >> f;
//
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			map[i][i] = 0;
//		}
//	}
//	map[c][d] = 1;
//	q.push({ c,d ,0 });
//	map[e][f] = 1;
//	q.push({ e,f,0 });
//
//
//	//Flood Fill
//	while (!q.empty()) {
//		Node now = q.front();
//		q.pop();
//
//		for (int t = 0; t < 4; t++) {
//
//			int ny = now.y + directY[t];
//			int nx = now.x + directX[t];
//			if (ny < 0 || nx < 0 || ny >= 3 || nx >= 4) continue;
//
//			if (map[ny][nx] != 0)continue;
//			map[ny][nx] = map[now.y][now.x] + 1;
//			q.push({ ny, nx });
//		}
//	}
//
//	for (int y = 0; y < 3; y++) {
//		for (int x = 0; x < 4; x++) {
//			cout << map[y][x];
//		}
//		cout << endl;
//	}
//}

//---------------------------------------------------------------------------------------------------

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
int directY[8] = { 2,2,-2,-2,1,1,-1,-1}; // 탐색할 방향정하기 (괄호값은 더블 체크하기)
int directX[8] = { 1,-1,1,-1,2,-2,2,-2};
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
//------------------------------------------------------------------------------------------------------------
	
//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct Node {
//	int y, x;
//};
//
//int map[5][5] = { 0 };
//
//queue<Node> q;
//int directY[4] = { -1,1,0,0 };
//int directX[4] = { 0,0,-1,1 };
//
//int main()
//{
//	int n1, n2;
//	cin >> n1 >> n2;
//
//	map[n1][n2] = 1;
//	q.push({ n1,n2 });
//
//	while (!q.empty()) {
//		Node now = q.front();
//		q.pop();
//
//		for (int i = 0; i<4; i++){
//			int ny = now.y + directY[i];
//			int nx = now.x + directX[i];
//			if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
//
//			if (map[ny][nx] != 0) continue;
//			map[ny][nx] = map[now.y][now.x] + 1;
//			q.push({ ny,nx });
//}
//	}
//
//	for (int y = 0; y < 5; y++) {
//		for (int x = 0; x < 5; x++) {
//			cout << map[y][x] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str1 = "ABCD";
//	string str2 = "BBQ";
//	
//	cin >> str1;
//	cin >> str2;
//
//	{
//		cout << str1.length() << " ";
//		cout << str2.length() << endl;
//
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main()
//{
//	int x;
//	cin >> x;
//
//
//	for (int i = x; i < i - 4; i--)
//		cout << i << endl;
//}

//-----------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int x, y;
//
//	cin >> n;
//
//	for (y = 0; y < n; y++)
//	{
//		for (x = 1; x <= 4; x++)
//		{
//			cout << x << ;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//
////----------------------------------------------------------------------
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//struct Node {
//	int num;
//	int price;
//	int lev;
//
//};
//
//vector<vector<Node>> alist(6);
//queue<Node> q;
//
//
//int main() {
//	alist[1] = { {2, 3}, {3, 5} };
//	alist[2] = { {3, 4}, {4, 1} };
//	alist[3] = { {4, 3}, {5, 2} };
//	alist[4] = { {5, 7} };
//
//
//	q.push({1,0});
//	
//	
//	used
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//
//	cin >> n;
//
//	int x, y;
//
//	for (y = n; y > n - 4; y--)
//	{
//		for (x = 0; x < 4; x++)
//		{
//			cout << y;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}



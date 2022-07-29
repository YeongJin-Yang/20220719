#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(10);
int used[5];

void run(int now) {
	cout << now;
	for (int i = 0; i < alist[now].size(); i++) {
		int next = alist[now][i];

		if (used[next] == 1) continue;
		used[next] = 1;
		run(next);
	}

}

int main()
{
	alist[1] = { 2,4 };
	alist[2] = { 5 };
	alist[3] = { 1 };
	alist[4] = { 3 };
	alist[5] = { 1,3 };

	used[1] = 1;

	run(1);

	return 0;
	
}

//-----------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(10);
int used[5];

void run(int now) {
	cout << now;
	for (int i = 0; i < alist[now].size(); i++) {
		int next = alist[now][i];

		if (used[next] == 1) continue;
		used[next] = 1;
		run(next);
	}
}

자료를 저장하는 최소의 칸 = node


//----------------------구조체구나~~-------------------------------------------------



#include <iostream>
#include <string>
#include <vector>
using namespace std;

//가중치 그래프는 node 필요 !!!
struct Node {
	int loc;
	int price;
};

vector<vector<Node>> alist(5);
int used[5];

void run(int now, int sum) {

	if (now == 4) {
		cout << sum << " ";
		return;
	}

	for (int i = 0; i < alist[now].size(); i++) {
		Node next = alist[now][i];

		//next.loc : 다음 갈곳 위치
		//next.price : 다음 갈곳의 가격

		if (used[next.loc] == 1) continue;
		used[next.loc] = 1;
		run(next.loc, sum + next.price);
		used[next.loc] = 0;
	}

}

int main()
{
	alist[1] = { { 2, 7} };
	alist[2] = { {4, 10}, {3, 5} };
	alist[3] = { {4, 2} };

	used[1] = 1;
	run(1, 0);

	return 0;
}


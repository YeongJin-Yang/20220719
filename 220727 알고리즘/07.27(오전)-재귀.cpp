오전

//-----------알파벳 거꾸로 ------------------------------------

/*#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	int b = a.length();

	for (int i= b - 1; i >= 0; i--)
		cout << a[i];

	return 0;
}*/
//-------------------------로그인 문제인데 strcmp쓰니까 에러가 남 (다시 수행하기)------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char id, pass;
	cin >> id >> pass;

	if strcmp(id, "kFC") == 0 && strcmp(pass, "1234") == 0)
	{
	cout << "로그인";
	else
		cout << "로그인 실패";
	}

	return 0;
}
//------------------------로그인 문제--------------------------------------------------
#include <iostream>
#include <string>  //C++ 용 string 클래스

using namespace std;

int main() {

	string id, pass;
	cin >> id >> pass;

	if (id == "KFC" && pass == "1234") {
		cout << "로그인";
	}
	else {
		cout << "로그인실패";
	}

	return 0;
}
//-------------------------------------------------------------------------
#include <iostream>
#include <string>  //C++ 용 string 클래스

using namespace std;

int main() {

	string str[3] = {
		"ABC",
		"BTS",
		"KFCKFC"
	};

	for (int y = 0; y < 3; y++) {
		for (int x = str[y].length() - 1; x >= 0; x--) {
			cout << str[y][x];
		}
		cout << "\n";
	}

	return 0;
}

//--------------------------------잘 안쓰이는데 암기---------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//string을 char 버퍼로 복사
	string str = "ABCD";
	char buf[10];
	strcpy(buf, str.c_str());

	//char 버퍼를 string으로 복사하는 방법
	char bbq[10] = "ABCDEF";
	string temp = bbq;

}

//---------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//문자열을 수로
	string str = "12345";
	int a = stoi(str);

	//수를 문자열로
	int tt = 341;
	string bbq = to_string(tt);

	cout << bbq[0];

	return 0
}

//-----------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


int main() {

	int a;
	cin >> a;

	a += 100;


	//---------------------------- 문자열 더하기-----------------------------------------
#include <iostream>
#include <string>

	using namespace std;

	int main(0) {

		string str;

		str = string("abe") + string("abe");

		cout << str;

		return 0;
	}

	//------------------------------BTSKMC출력 가능??-----------------------------------------------------
#include <iostream>
#include <string>

	using namespace std;

	string strs[6] = {
		"BT",
		"KF",
		"CCC",
		"MOM",
		"SK",
		"MC"
	};

	//3번 출력받는 방법을 도출해야함.

	void run(int lev, string sum) {

		for (int i = 0; i < 6; i++) {
			run(lev + 1, sum + strs[i]);
		}

	}


	int main();

	string num;
	cin >> num;

	if strcmp(num, "BTSKMC") == 0;

	{cout << "가능"

	else

		cout << "불가능";
	}
	return 0;
}

//---------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


int main() {

	string str = "ABCDEFGHIJKBCD";

	//파싱 : find 생명



	int ret = str.find("BCD", 2);  //2번 인덱스부터 찾기
	cout << ret;



	return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "ABCDEFGHIJKBCD";

	//find

	int cnt = 0;
	int a = 0;
	while (1) {
		int ret = str.find("BCD", a);
		if (ret == -1) break;
		cnt++;

		a = ret + 1;
	}

	cout << cnt;

	return 0;
}

//---------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int getGold(string.str) {
	//gold 개수 구하기 

}



int main() {
	string strs[5] = {
		"GOLD#GOLD##",
		"GOL#GOLE#GOLED",
		"GOLD",
		"GGGGGOLD","GOLD"
	};
	int strs = 0;
	int cnt = 0;
	while (1) {
		int ret = findGold("GOLD", strs);
		if (ret == -1) break;
		cnt++;

		strs = strs + 1
	}

	cout << cnt;





	return 0;
}


//-----------알파벳 거꾸로 ------------------------------------

/*#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	int b = a.length();

	for (int i= b - 1; i >= 0; i--)
		cout << a[i];

	return 0;
}*/
//-------------------------로그인 문제인데 strcmp쓰니까 에러가 남 (다시 수행하기)------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char id, pass;
	cin >> id >> pass;

	if strcmp(id, "kFC") == 0 && strcmp(pass, "1234") == 0)
	{
	cout << "로그인";
	else
		cout << "로그인 실패";
	}

	return 0;
}
//------------------------로그인 문제--------------------------------------------------
#include <iostream>
#include <string>  //C++ 용 string 클래스

using namespace std;

int main() {

	string id, pass;
	cin >> id >> pass;

	if (id == "KFC" && pass == "1234") {
		cout << "로그인";
	}
	else {
		cout << "로그인실패";
	}

	return 0;
}
//-------------------------------------------------------------------------
#include <iostream>
#include <string>  //C++ 용 string 클래스

using namespace std;

int main() {

	string str[3] = {
		"ABC",
		"BTS",
		"KFCKFC"
	};

	for (int y = 0; y < 3; y++) {
		for (int x = str[y].length() - 1; x >= 0; x--) {
			cout << str[y][x];
		}
		cout << "\n";
	}

	return 0;
}

//--------------------------------잘 안쓰이는데 암기---------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//string을 char 버퍼로 복사
	string str = "ABCD";
	char buf[10];
	strcpy(buf, str.c_str());

	//char 버퍼를 string으로 복사하는 방법
	char bbq[10] = "ABCDEF";
	string temp = bbq;

}

//---------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//문자열을 수로
	string str = "12345";
	int a = stoi(str);

	//수를 문자열로
	int tt = 341;
	string bbq = to_string(tt);

	cout << bbq[0];

	return 0
}

//-----------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


int main() {

	int a;
	cin >> a;

	a += 100;


	//---------------------------- 문자열 더하기-----------------------------------------
#include <iostream>
#include <string>

	using namespace std;

	int main(0) {

		string str;

		str = string("abe") + string("abe");

		cout << str;

		return 0;
	}

	//------------------------------BTSKMC출력 가능??-----------------------------------------------------
#include <iostream>
#include <string>

	using namespace std;

	string strs[6] = {
		"BT",
		"KF",
		"CCC",
		"MOM",
		"SK",
		"MC"
	};

	//3번 출력받는 방법을 도출해야함.

	void run(int lev, string sum) {

		for (int i = 0; i < 6; i++) {
			run(lev + 1, sum + strs[i]);
		}

	}


	int main();

	string num;
	cin >> num;

	if strcmp(num, "BTSKMC") == 0;

	{cout << "가능"

	else

		cout << "불가능";
	}
	return 0;
}

//---------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


int main() {

	string str = "ABCDEFGHIJKBCD";

	//파싱 : find 생명



	int ret = str.find("BCD", 2);  //2번 인덱스부터 찾기
	cout << ret;



	return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "ABCDEFGHIJKBCD";

	//find

	int cnt = 0;
	int a = 0;
	while (1) {
		int ret = str.find("BCD", a);
		if (ret == -1) break;
		cnt++;

		a = ret + 1;
	}

	cout << cnt;

	return 0;
}

//---------------------------------------------------------------------------------

int main
string str = "ABCEDFG";
string temp = str.substr(3, 2); // 3번째 인덱스에서 문자 2개 추출
cout << temp;


//----------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;


int main() {
	string str = "ABCDEFG";

	int a = 1;
	int b = 3;
	int size = b - a + 1;

	string temp = str.substr(a, size);
	cout << temp;

	return 0;
}


-------------------------- -

//--------------------------------------------------
/*#include <iostream>
using namespace std;

//branch = 4
//level = 2

char path[10];

void run(int lev) {
	if (lev == 2) {

		cout << path << "\n";
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[lev] = 'A' + i;
		run(lev + 1); //재귀 호출
		path[lev] = 0;
	}
}

int main() {
	run(0);

	return 0;
}
//--------------------------------------------------*/
/*#include <iostream>
using namespace std;
char path[10];
void run(int lev) {
	if (lev == 1 && path[0] == '3') return;
	if (lev == 1 && path[0] == '4')return;

	// 주석 부분과  위 부분 둘중하나 사용

	if (lev == 2) {
		cout << path << "\n";
		return;
	}
	for (int i = 0; i < 4; i++) {
		/*if (lev == 1 && path[0] == '3') continue;
		if (lev == 1 && path[0] == '4') continue;*/
		/*path[lev] = '1' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}*/

/*int main()
{
	run(0);

	return 0;
}*/
//--------------------------------------------------
/*#include <iostream>
#include <string>
using namespace std;

char path[10];

void run(int lev) {
	//if (lev >= 2 && path[lev - 1] == path[lev - 2]) return;
	if (lev == 3) {
		cout << path << "\n";
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (lev != 0 && path[lev - 1] == '1' + i) continue;
		path[lev] = '1' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main() {
	run(0);
	return 0;
}
//---------------------------------------------------*/
/*#include <iostream>
#include <string>
using namespace std;

char path[10];

void run(int lev, int sum) {

	if (lev == 3) {
		cout << path << " "<< sum << "\n";
		return;
	}

	for (int i = 1; i <= 4; i++) {
		path[lev] = '0' + i;
		run(lev + 1, sum + i);
		path[lev] = 0;
	}
}

int main() {
	run(0);
	return 0;
}
//--------------------------------------------------*/
/*
#include <iostream>
#include <string>
using namespace std;

char path[10];

void run(int lev, int sum) {

	if (lev == 3) {
		cout << path << " " << sum << "\n";
		return;
	}

	for (int i = 1; i <= 4; i++) {
		path[lev] = '0' + i;
		run(lev + 1, sum + i);
		path[lev] = 0;
	}
}

int main()
{
	run(0,0);
	return 0;
}

*/
/*#include <iostream>
#include <string>
using namespace std;

char path[10];
int n = 3;

void run(int lev, int sum) {
	if (sum >= 10) return; //1번째 sol

	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << sum << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		//if (sum + i >= 10) continue;  //2번째 sol
		path[lev] = '0' + i;
		run(lev + 1, sum + i);
		path[lev] = 0;
	}
}

int main()
{
	run(0,0);
	return 0;
}
*/
//--------------------------------------------------
/*#include <iostream>
#include <string>
using namespace std;

char path[10];
int n = 3;

void run(int lev, int sum) {
	if (sum >= 10) return; //1번째 sol

	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << sum << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		//if (sum + i >= 10) continue;  //2번째 sol
		path[lev] = '0' + i;
		run(lev + 1, sum + i);
		path[lev] = 0;
	}
}

int main()
{
	run(0, 0);
	return 0;
}/*

//--------------------가지치기 빈출유형 ---------------------------------------
/*#include <iostream>
#include <string>
using namespace std;

int path[10];
int n = 3;
int used[10];

void run(int lev) {

	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= 6; i++) {
		if (used[i] == 1) continue; //이미 갔었냐?
		used[i] = 1; //체크하고 들어간다.
		path[lev] = i;
		run(lev + 1);
		path[lev] = 0;
		used[i] = 0; //갔다오고 지운다.
	}
}

int main() {
	run(0);

	return 0;
}/*

//--------------------------------------------------------------------------------



//-------------------------------------------------------------------

#include <iostream>
using namespace std;

int arr[4][5] = {
	{4, 5,1, -3,2},
	{1,-1,3, -1,5},
	{4, 2,-5, 6,-9},
	{-1,-1,-2,5,7}
};

int mini = 21e8; //21억
int used[10];

void run(int lev, int gop) {
	if (lev == 4) {
		if (mini > gop) mini = gop;
		return;
	}

	for (int i = 0; i < 5; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		run(lev + 1, gop * arr[lev][i]);
		used[i] = 0;
	}
}

int main() {

	run(0, 1);
	cout << mini << endl;
	return 0;
}

//-----------------------------------------------------------------

#include <iostream>
using namespace std;




int main() {

	//freopen_s(new FILE*, "kfc.txt", "r", stdin); kfc.txt에 있는 값 불러오는 거
	int n;

	cin >> n;

	cout << n + 100;



	return 0;
}


//-----------주사위 던지기 ------------------------------

#include <iostream>
using namespace std;

int type;
int n;
char path[10];
int used[10];

void run1(int lev) {
	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= 6; i++) {
		path[lev] = '0' + i;
		run1(lev + 1);
		path[lev] = 0;
	}
}
void run2(int lev, int start) {
	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = start; i <= 6; i++) {
		path[lev] = '0' + i;
		run2(lev + 1, i);
		path[lev] = 0;
	}
}


void run3(int lev) {
	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= 6; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = '0' + i;
		run3(lev + 1);
		path[lev] = 0;
		used[i] = 0;
	}
}
int main() {

	//freopen("kfc.txt", "r", stdin);
	cin >> n >> type;

	if (type == 1) {
		run1(0);
	}
	if (type == 2) {
		run2(0, 1);
	}
	if (type == 3) {
		run3(0);
	}

	return 0;
}
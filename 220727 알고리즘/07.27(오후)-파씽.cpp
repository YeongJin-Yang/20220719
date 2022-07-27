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

//-------------------- str.substr 이용하기 ---------------------------------------------

int main
string str = "ABCEDFG";
string temp = str.substr(3, 2); // 3번째 인덱스에서 문자 2개 추출
cout << temp;


//----------------------- str.sustr 이용해서 문자 출력하기 ----------------------------------------------

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

------------------------------------------------------------------------





//-------------3512에 77더하기 ----------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "ABC[3512]DEFG";

	int a = 1;

	string temp = str.substr(4, 4);
	cout << stoi(temp)+77; // string 값을 실수로 변환하기 위해서 stoi함수를 이용 

	

	return 0;
}

//------------find를 이용해서 위에 문제 똑같이 풀기 -------------------------------
#include <iostream>
#include <string>
using namespace std;


int main() {
	string str = "ABC[3512]DEFG";

	//문자열 안에 [ ] 한 세트 존재
	//이 안에있는 숫자 발굴
	//+ 77 한 값을 출력 (정답 : 3589)

	int a = str.find('[');
	int b = str.find(']', a);

	int size = b - a - 1;
	string temp = str.substr(a + 1, size);

	int num = stoi(temp) + 77;
	cout << num;


	return 0;
}

//------------find를 이용해서 []값들의 합 출력하기 -------------------------------

#include <isostream>
#include <string>
using namespace std;

int main() {
	string str = "ABC[3512]DEFGF[211]DSFSD[36346]";

	int a = str.find('[');
	int b = str.find(']', a);
	
	int size = b - a - 1;
	string temp = str.substr(a + 1, size);

	return 0;

}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

string str = "ABC[3512]DEFGF[211]DSFSD[36346]";

int getNums(int a, int b) {

	int size = b - a - 1;
	string temp = str.substr(a + 1, size);
	int nums = stoi(temp);
	return nums;
}

int main() {
	//[ ]에 있는 수들 합 출력

	//getNums(a, b) 그 수를 리턴
	//ex) getNums(3, 8) = 3512 리턴

	int a = 0;
	int b = 0;
	int sum = 0;
	while (1) {
		a = str.find('[', a);
		if (a == -1) break;

		b = str.find(']', a + 1);
		sum += getNums(a, b);

		a = b + 1;
	}
	cout << sum;

	return 0;
}
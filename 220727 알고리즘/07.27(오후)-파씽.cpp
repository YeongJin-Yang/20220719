//-----------���ĺ� �Ųٷ� ------------------------------------

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
//-------------------------�α��� �����ε� strcmp���ϱ� ������ �� (�ٽ� �����ϱ�)------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char id, pass;
	cin >> id >> pass;

	if strcmp(id, "kFC") == 0 && strcmp(pass, "1234") == 0)
	{
	cout << "�α���";
	else
		cout << "�α��� ����";
	}

	return 0;
}
//------------------------�α��� ����--------------------------------------------------
#include <iostream>
#include <string>  //C++ �� string Ŭ����

using namespace std;

int main() {

	string id, pass;
	cin >> id >> pass;

	if (id == "KFC" && pass == "1234") {
		cout << "�α���";
	}
	else {
		cout << "�α��ν���";
	}

	return 0;
}
//-------------------------------------------------------------------------
#include <iostream>
#include <string>  //C++ �� string Ŭ����

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

//--------------------------------�� �Ⱦ��̴µ� �ϱ�---------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//string�� char ���۷� ����
	string str = "ABCD";
	char buf[10];
	strcpy(buf, str.c_str());

	//char ���۸� string���� �����ϴ� ���
	char bbq[10] = "ABCDEF";
	string temp = bbq;

}

//---------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//���ڿ��� ����
	string str = "12345";
	int a = stoi(str);

	//���� ���ڿ���
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


	//---------------------------- ���ڿ� ���ϱ�-----------------------------------------
#include <iostream>
#include <string>

	using namespace std;

	int main(0) {

		string str;

		str = string("abe") + string("abe");

		cout << str;

		return 0;
	}

	//------------------------------BTSKMC��� ����??-----------------------------------------------------
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

	//3�� ��¹޴� ����� �����ؾ���.

	void run(int lev, string sum) {

		for (int i = 0; i < 6; i++) {
			run(lev + 1, sum + strs[i]);
		}

	}


	int main();

	string num;
	cin >> num;

	if strcmp(num, "BTSKMC") == 0;

	{cout << "����"

	else

		cout << "�Ұ���";
	}
	return 0;
}

//---------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


int main() {

	string str = "ABCDEFGHIJKBCD";

	//�Ľ� : find ����



	int ret = str.find("BCD", 2);  //2�� �ε������� ã��
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
	//gold ���� ���ϱ� 

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


//-----------���ĺ� �Ųٷ� ------------------------------------

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
//-------------------------�α��� �����ε� strcmp���ϱ� ������ �� (�ٽ� �����ϱ�)------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char id, pass;
	cin >> id >> pass;

	if strcmp(id, "kFC") == 0 && strcmp(pass, "1234") == 0)
	{
	cout << "�α���";
	else
		cout << "�α��� ����";
	}

	return 0;
}
//------------------------�α��� ����--------------------------------------------------
#include <iostream>
#include <string>  //C++ �� string Ŭ����

using namespace std;

int main() {

	string id, pass;
	cin >> id >> pass;

	if (id == "KFC" && pass == "1234") {
		cout << "�α���";
	}
	else {
		cout << "�α��ν���";
	}

	return 0;
}
//-------------------------------------------------------------------------
#include <iostream>
#include <string>  //C++ �� string Ŭ����

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

//--------------------------------�� �Ⱦ��̴µ� �ϱ�---------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//string�� char ���۷� ����
	string str = "ABCD";
	char buf[10];
	strcpy(buf, str.c_str());

	//char ���۸� string���� �����ϴ� ���
	char bbq[10] = "ABCDEF";
	string temp = bbq;

}

//---------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {

	//���ڿ��� ����
	string str = "12345";
	int a = stoi(str);

	//���� ���ڿ���
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


	//---------------------------- ���ڿ� ���ϱ�-----------------------------------------
#include <iostream>
#include <string>

	using namespace std;

	int main(0) {

		string str;

		str = string("abe") + string("abe");

		cout << str;

		return 0;
	}

	//------------------------------BTSKMC��� ����??-----------------------------------------------------
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

	//3�� ��¹޴� ����� �����ؾ���.

	void run(int lev, string sum) {

		for (int i = 0; i < 6; i++) {
			run(lev + 1, sum + strs[i]);
		}

	}


	int main();

	string num;
	cin >> num;

	if strcmp(num, "BTSKMC") == 0;

	{cout << "����"

	else

		cout << "�Ұ���";
	}
	return 0;
}

//---------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


int main() {

	string str = "ABCDEFGHIJKBCD";

	//�Ľ� : find ����



	int ret = str.find("BCD", 2);  //2�� �ε������� ã��
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

//-------------------- str.substr �̿��ϱ� ---------------------------------------------

int main
string str = "ABCEDFG";
string temp = str.substr(3, 2); // 3��° �ε������� ���� 2�� ����
cout << temp;


//----------------------- str.sustr �̿��ؼ� ���� ����ϱ� ----------------------------------------------

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





//-------------3512�� 77���ϱ� ----------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "ABC[3512]DEFG";

	int a = 1;

	string temp = str.substr(4, 4);
	cout << stoi(temp)+77; // string ���� �Ǽ��� ��ȯ�ϱ� ���ؼ� stoi�Լ��� �̿� 

	

	return 0;
}

//------------find�� �̿��ؼ� ���� ���� �Ȱ��� Ǯ�� -------------------------------
#include <iostream>
#include <string>
using namespace std;


int main() {
	string str = "ABC[3512]DEFG";

	//���ڿ� �ȿ� [ ] �� ��Ʈ ����
	//�� �ȿ��ִ� ���� �߱�
	//+ 77 �� ���� ��� (���� : 3589)

	int a = str.find('[');
	int b = str.find(']', a);

	int size = b - a - 1;
	string temp = str.substr(a + 1, size);

	int num = stoi(temp) + 77;
	cout << num;


	return 0;
}

//------------find�� �̿��ؼ� []������ �� ����ϱ� -------------------------------

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
	//[ ]�� �ִ� ���� �� ���

	//getNums(a, b) �� ���� ����
	//ex) getNums(3, 8) = 3512 ����

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
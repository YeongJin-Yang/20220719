
//-------------------------------------------------------------------------
/*#include <iostream>
using namespace std;

int main() {

		for (int a = 1; a <= 3; a++) {
			for (int b = 1; b <= 3; b++) {
				cout << a << " " << b << "\n";
			}
		}
	
	//F5������  stack flow�̸� ���� ���  
	

	return 0;

}
*/
//----------------------------------------------------------------------------------
/*#include <iostream>
using namespace std;

int main() {

	for (int a = 1; a <= 3; a++) {
		for (int b = 1; b <= 3; b++) {
			for (int c = 1; c <= 3; c++) {
				cout << a << " " << b << " " << c << "\n";
			}
		}
	}

	//F5������  stack flow�̸� ���� ���  


	return 0;

}
*/

//------��ʹ� for�� ��� --- Trace�� �غ��� -----------------------------------------------------------------------

/*#include <iostream>
using namespace std;

	void kfc() {
	cout << "@";
}

void moms() {
	kfc();
}

void bts() {
	cout << "#";
}

void abc() {
	bts();
	kfc();
}

void run() {
	abc();
	moms();
}

int main() {

	run();

	return 0;
}
*/

/* //-----------------------------------------------------------------------
#include <iostream>
using namespace std;

int x = 0;
void run() {
	if (x == 2) {
		return;
	}
}

x ++;
run();

int d = 1;
}
int main() {

	run(0);

	return 0;
}
*/
// ----------------------------------------------------------------------------

/*#include <iostream>
using namespace std;

void run(int x) {
	if (x == 2) {
		return;
	}
	cout << "#";
	run(x + 1);
	cout << "#";
	int d = 1; 
}

int main() {

	run(0);

	return 0;
}
*/

//---------------------------------------------------------------------------------

/*#include <iostream>
using namespace std;

void run(int x) {

	if (x == 2) {
		return;
	}


	run(x + 1);
	cout << "#";
	int d = 1;
}

int main() {

	run(0);

	return 0;
}
*/

//--------------------------------------------------------------------------------------
/*#include <iostream>
using namespace std;

void run(int x) {

	if (x == 2) {
		return;
	}


	run(x + 1);
	cout << "#";
	int d = 1;
}

int main() {

	return 0;
}
*/

//----------------------------------------------------

/* #include <iostream>
using namespace std;

void run(int x) {
	cout << x;
	if (x == 5) {
		return;
	}

	run(x - 1);
	cout << x;
}
int main()
{
	run(9);
	return 0;
}
*/

//---------------------------------------------------

 /*#include <iostream>
using namespace std;

int arr[5] = { 4,2,9,1,5 };

void run(int x) {

	if (x == 5) {
		return;
	}

	cout << arr[x];
	run(x + 1);
	run(x+ 1);
	cout << arr[x];
}
int main()
{

run(0);
return 0;
}
*/
//-----------------------------------------------
/*#include <iostream>
using namespace std;

void run(int n) {
	if (n == 2) {    //�󸶳� ����
		return;
	}

	for (int i = 0; i < 2; i++) {   //�󸶳� ������(�귣ġ ����-Level ����)
		run(n + 1);
	}

	int d = 1;
}

int main(){
run(0);
return 0;

	}
	*/

//-----------------------------------------------
/*#include <iostream>
using namespace std;
void run(int n) {
		cout << "#";   //1�� ���� :  = # * 7
	if (n == 3) {
		//2�� ���� : cout << "#"; = # *4
		return;
	}
	for (int i = 0; i < 4; i++) {
		run(n + 1);
		//3�� ���� : cout << "#"; = # *4 
	}

		int d = 1;
}
	int main() {
	run(0);
	return 0;
	}
	*/

//------------��� �Լ�---------------------------
/*#include <iostream>
using namespace std;

int path[5];

void run(int lev) {
	
	if (lev == 2) {
		for (int i = 0; i < 2; i++) {
			cout << path[i];
			cout << "";
			return;
	}
	for (int i = 0; i < 2; i++) {
		//���
		path[lev] = (i + 1);
		run(lev + 1);
		//�������
		path[lev] = 0;
	}
}
int main() {
	run(0);
	return 0;
}*/

//---------------------��� �Լ� (2)----------------------------------------------------

/*#include <iostream>
using namespace std;

int path[5];
void run(int lev) {
	if (lev == 4) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < 2; i++) {
		path[lev] = 1 + i;
		run(lev + 1);
		path[lev] = 0;
	}
}
int main() {

	run(0);

	return 0;
}*/

//---------------------��� �Լ� (3)---------------------------------------------------

#include <iostream>
using namespace std;

int path[10];
void run(int lev){
	if (lev == 5) {
		for (int i = 0; i < lev; i++) {
			cout << path[i];
		}
		cout << endl;
		return;
	}
		for (int i = 0; i < 4; i++) {	
			path[lev] = 0 + i;
			run(lev + 1);
			path[lev] = 0;
		}
	}
int main() {

	run(0);

	return 0;	
}



		

//-------------------------------------------------------------------------
/*#include <iostream>
using namespace std;

int main() {

		for (int a = 1; a <= 3; a++) {
			for (int b = 1; b <= 3; b++) {
				cout << a << " " << b << "\n";
			}
		}
	
	//F5눌러서  stack flow이면 무한 재귀  
	

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

	//F5눌러서  stack flow이면 무한 재귀  


	return 0;

}
*/

//------재귀는 for문 대신 --- Trace를 해보자 -----------------------------------------------------------------------

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
	if (n == 2) {    //얼마나 들어가냐
		return;
	}

	for (int i = 0; i < 2; i++) {   //얼마나 갈리냐(브랜치 개수-Level 개수)
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
		cout << "#";   //1번 문제 :  = # * 7
	if (n == 3) {
		//2번 문제 : cout << "#"; = # *4
		return;
	}
	for (int i = 0; i < 4; i++) {
		run(n + 1);
		//3번 문제 : cout << "#"; = # *4 
	}

		int d = 1;
}
	int main() {
	run(0);
	return 0;
	}
	*/

//------------경로 함수---------------------------
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
		//기록
		path[lev] = (i + 1);
		run(lev + 1);
		//기록제거
		path[lev] = 0;
	}
}
int main() {
	run(0);
	return 0;
}*/

//---------------------경로 함수 (2)----------------------------------------------------

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

//---------------------경로 함수 (3)---------------------------------------------------

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



		
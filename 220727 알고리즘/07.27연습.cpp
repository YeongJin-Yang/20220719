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
}*/


/*#include <iostream>
using namespace std;

int N ;
int M ;
int used[10];



char path[10];
void run(int lev, int start) {
	if (lev == ) {
		cout << path << "\n";
		return;
	}

	for (int i = start; i <= 6; i++) {
		path[lev] = '0' + i;
		run(lev + 1, i);
		path[lev] = 0;
	}
}

int main() {
	run(0, 1);

	return 0;
}
*/
//---------------------------------------------------------------------------
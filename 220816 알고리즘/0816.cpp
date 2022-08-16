//---------------------------------------BS---------------------------------------------------
//#include <iostream>
//using namespace std;
//
//int arr[8] = { 1, 2, 3, 5, 7, 8, 10, 12 };
//int target = 10;
//
//int bs(int s, int e)  //바이너릴 서치 함수 제작
//{
//	while (s <= e)
//	{
//		int mid = s + e / 2;
//		if (arr[mid] == target)
//		{
//			return mid;
//		}
//		if (arr[mid] > target)
//		{
//			e = mid - 1;
//		}
//		else
//		{
//			e = mid + 1;
//		}
//	}
//	return -1;
//}
//
//
//int main() {
//
//	int ret = bs(0, 7);
//
//	if (ret == -1)
//		cout << "미발견 " << endl;
//
//	else
//	{
//		cout << ret << "에서 발견" << endl;
//	}
//
//	return 0;
//}




//-----------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int arr[10] = { 4,4,5,7,8,10,20,22,23,24 };
//
//
//int bs(int fir, int end)
//{
//	int input;
//	cin >> input;
//
//	while ( fir <= end)
//	{ 
//	int mid = (fir + end) / 2;
//	if (arr[mid] == input)
//	{
//		return mid;
//	}
//	if (arr[mid] > input)
//	{
//		end = mid - 1;
//	}
//	else
//	{
//		fir = mid + 1;
//	}
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	int ret = bs(0, 10);
//
//	if (ret == -1)
//		cout << "X" << endl;
//
//	else
//	{
//		cout << "O" << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//#include <string>
//
//using namespace std;
//
//string st;
//
//
//int bs(int s, int e) {
//	int mid;
//	while (s <= e) {
//		mid = (s + e) / 2;
//		if (st[mid] == '#') {
//
//			s = mid + 1;
//		}
//		else e = mid - 1;
//	}
//	return mid;
//}
//
//int main() {
//	cin >> st;
//	int ret = bs(0, 9);
//
//	cout << ret << "0%" << endl;
//
//	return 0;
//}


//----------------------------------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//int tar;
//
//int bs(int s, int e) {
//	int last = 1;
//	while (s <= e) {
//		int mid = (s + e) / 2;
//
//		if (mid * mid == tar) 
//		return mid;
//
//		if (mid * mid < tar) 
//		{
//			last = mid;
//			s = mid + 1;
//		}
//		else {
//			e = mid - 1;
//		}
//	}
//	return last;
//}
//
//int main() {
//
//	cin >> tar;
//	int ret = bs(1, tar);
//	cout << ret;
//	return 0;
//}
//
//
////-----------------------------------------------------------------
//
//#include <iostream>
//using namespace std;
//
//int arr[10] = { 4,4,5,7,8,10,20,22,23,24 };
//int target = 10;
//
//int RS(int str, int fin)
//{
//
//	while (str <= fin)
//	{
//	int mid = (str + fin) / 2;
//	
//	if (arr[mid] == target)
//	{
//		return mid;
//	}
//
//
//	if (arr[mid] < target)
//	{
//		s = mid + 1;
//	}
//	else
//	{
//		e = mid - 1;
//	}
//
//
//	}
//
//}
//
//
//int main()
//{
//	RS(0, 10);
//
//
//
//
//
//	return 0; 
//}
//

//---------------슬라이딩 윈도우------------------------------

//#include <iostream>
//using namespace std;
//
//int arr[9] = { 1,2,3,3,5,0,1,3};
//int k = 3;
//int n = 9;
//
//int getSum(int index)  // 초기 배열 3개의 합을 구하기 위한 함수 
//{
//	int sum = 0;
//	for (int i = 0; i < k; i++)
//	{
//		sum += arr[i];
//		return sum;
//	}
//}
//	int main()
//	{
//		int sum = getSum(0);
//		int mini = 21e8;
//
//		for (int i = 0; i <= n - k; i++)
//		{
//			if (sum < mini)
//			
//				mini = sum;
//			
//
//			if (i == n - k)
//
//				break;
//	
//			sum += arr[i + k];
//			sum -= arr[i];
//		}
//		cout << mini;
//
//		return 0;
//	}
//
//----------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int arr[9] = { 1, 2, 3, 3, 5, 1, 0, 1, 3 };
//int k = 3;
//int n = 9;
//
//int getSum(int index) {
//	int sum = 0;
//	for (int i = 0; i < k; i++) sum += arr[i];
//	return sum;
//}
//
//int main() {
//
//	int sum = getSum(0);
//	int mini = 21e8;
//
//	for (int i = 0; i <= n - k; i++) {
//		//cout << sum << " ";
//		if (sum < mini) { mini = sum; }
//
//		//마지막은 다음 것이 없다!
//		if (i == n - k) { break; }
//
//		//다음 것 준비
//		sum += arr[i + k];
//		sum -= arr[i];
//	}
//	cout << mini;
//
//	return 0;
//}

//----------------------------------------



//#include <iostream>
//using namespace std;
//
//char vect[10] = "BTABCQABC";
//char pattern[4] = "ABC";
//
//int main()
//{
//	int result;
//	int flag;
//	int y;
//
//	for (int x = 0; x <= 6; x++)
//	{
//		flag = 0;
//		for (y = 0; y < 3; y++)
//		{
//			if (pattern[y] != vect[x + y])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) break;
//	}
//
//	if (flag == 0) cout << "발견"<<endl;
//	else cout << "미발견"<<endl;
//
//	return 0;
//}

//--------------------------------------------------------------------------------

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
//
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

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[3][3];
//	char input1 = 'A';
//	int temp;
//	int x, y, x1, x2, y1, y2;
//
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			arr[y][x] = input1;
//			input1++;
//		}
//	}
//	cin >> y1 >> x1 >> y2 >> x2;
//	temp = arr[y1][x1];
//	arr[y1][x1] = arr[y2][x2];
//	arr[y2][x2] = temp;
//
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
//


//---------------------------------------------------------

#include <iostream>
using namespace std;

int password[4] = { 3, 7, 4, 9 };

int isSame(int input[4])
{
	for (int x = 0; x < 4; x++)
	{
		if (password[x] != input[x]) return 0;
	}
	return 1;
}

int main()
{
	int input[4];
	for (int x = 0; x < 4; x++)
	{
		cin >> input[x];
	}

	if (isSame(input) == 1)
	{
		cout << "pass";
	}
	else
	{
		cout << "fail";
	}

	return 0;
}


//-----------------------------------------------------------

#include<iostream>
using namespace std;
int main() {
	int arr[3][3];
	int bucket[10] = { 0 };
	for (int y = 0; y < 3; y++)
		for (int x = 0; x < 3; x++)
			cin >> arr[y][x];

	for (int y = 0; y < 3; y++)
		for (int x = 0; x < 3; x++)
			bucket[arr[y][x]]++;

	for (int i = 1; i < 10; i++) {
		if (bucket[i] == 0)
			cout << i << ' ';
	}

	return 0;
}
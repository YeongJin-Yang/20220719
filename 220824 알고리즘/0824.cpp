////===카카오 비밀지도 문제=============================================
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int N;
//string getBinary(int tar) { // 함수 (1)
//	string ret;
//
//	while (tar != 0) {
//		ret += '0' + (tar % 2);
//		tar /= 2;
//	}
//
//	//0 집어넣기
//	for (int i = ret.size(); i < N; i++) {
//		ret += '0';
//	}
//
//	string ret2;
//	//뒤집기
//	for (int i = ret.size() - 1; i >= 0; i--) {
//		ret2 += ret[i];
//	}
//
//	return ret2;
//}
//
//vector<string> getMatrix(vector<int> arr) {    // 함수 (2)
//	vector<string> ret;
//
//	for (int i = 0; i < N; i++) {
//		string line = getBinary(arr[i]);
//		ret.push_back(line);
//	}
//
//	return ret;
//}
//
//vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {  // 함수 (3)
//
//	N = n;
//	vector<string> ret1 = getMatrix(arr1);
//	vector<string> ret2 = getMatrix(arr2);
//
//	for (int y = 0; y < n; y++) {
//		for (int x = 0; x < n; x++) {
//			if (ret2[y][x] == '1' || ret1[y][x] == '1') {
//				ret1[y][x] = '#';
//			}
//			else {
//				ret1[y][x] = ' ';
//			}
//		}
//	}
//
//	return ret1;
//}
//
//int main() {
//
//	int n = 5;
//	vector<int> arr1 = { 9, 20, 28, 18, 11 };
//	vector<int> arr2 = { 30, 1, 21, 17, 28 };
//
//	vector<string> ret = solution(n, arr1, arr2);
//	for (int y = 0; y < n; y++) {
//		cout << ret[y] << '\n';
//	}
//
//	return 0;
//}




// 내가 만든 비밀지도 
//#include <iostream>
//#include <string>
//#include <vector>
//
//
//using namespace std;
//using namespace std;
//
//vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
//	vector<string> answer;
//
//
//int n;
//cin >> n;
//int vector1[n][n];
//int vector2[n][n];
//
////10진법 숫자를 -> 2진법으로 표현해서 배열로 만드는 방법을 모르겠음.
//
//for (int y = 0; y < n; y++)
//{
//	for (int x = 0; x < n; x++)
//	{
//		cin >> vector[n][n];
//
//	}
//}
//
//
//
//for (int y = 0; y < n; y++)
//{
//	for (int x = 0; x < n; x++)
//	{
//
//		if (vector1[y][x] == 1 || vector2[y][x] == 1)
//		{
//			cout << "#";
//		}
//		else
//		{
//			cout << " ";
//		}
//
//	}
//}
//
//return answer;
//}


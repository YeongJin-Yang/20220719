//-------prefix (누적합 이용하기)---------------------------------------


//#include <iostream>
//using namespace std;
//
//
//int line[10] = { 4,2,5,1,1,2,3,1,4,1 };
//int acc[10];
//int main()
//{
//	int input1;
//	int input2;
//
//	cin >> input1;
//	cin >> input2;
//	
//	acc[0] = line[0];
//	for (int i = 1; i < 10; i++)
//	{
//		acc[i] = acc[i - 1] + line[i];  //누적합
//	}
//
//	cout << acc[input2] - acc[input1-1] << endl; //ex ) 구간 1,3일 때 acc[3]=12 - acc[1-1]=4  -> 8// 
//	return 0;
//}


//-------prefix (누적합 이용하기)-----------------------------------
// 값은 인덱스로 받기 

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	int N;
//	int M;
//
//	cin >> N, M;
//	
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> i;
//	}
//
//	int line[10000];
//	int acc[10000];
//
//	acc[0] = line[0];
//	for (int x = 1; x < N; x++)
//	{
//		acc[x] = acc[x-1] + line[x];
//	}
//
//
//	cout << acc[N];
//
//	return 0;
//}

//---prefix (누적합 이용하기)-------------------------------------
	

	//#include <iostream>
	//using namespace std;
	//
	//int n, m;
	//int sumarr[100001];
	//
	//int main() {
	//
	//	cin >> n >> m;
	//	for (int i = 1; i <= n; i++) {
	//		int num;
	//		cin >> num;
	//		sumarr[i] = sumarr[i - 1] + num;
	//	}
	//	for (int i = 0; i < m; i++) {
	//		int st, en;
	//		cin >> st >> en;
	//		cout << sumarr[en] - sumarr[st - 1] << endl;
	//	}
	//
	//
	//	return 0;
	//}

//----prefix (누적합 이용하기)----------------------------------------------------

	//#include <iostream>
	//using namespace std;

	//int N, M, Q;  // 개수 N,  번호 M , 질의의 수 Q
	//int arr[1000001];
	//int acc[1000001]; //누적합

	//int main()
	//{

	//	cin >> N >> M;
	//	for (int x = 1; x <= N; x++)
	//	{
	//		int input1;
	//		int input2;

	//		cin >> input1 >> input2;
	//		arr[input1] = input2;
	//	}


	//	for (int y = 1; y <= M; y++)
	//	{
	//		acc[y] = acc[y - 1] + arr[y];

	//	}

	//	cin >> Q;
	//	for (int i = 1; i <= Q; i++)
	//	{
	//		int start, end;
	//		cin >> start >> end;
	//		cout << acc[end] - acc[start - 1] << endl;
	//	}

	//	return 0; 
	//}




//------Greedy-----동전수------------------------------

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int dong[4] = { 500,100,50,10 };
//	int change = 1750;
//
//	int cnt = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		cnt += (change / dong[i]);
//		change %= dong[i];
//	}
//	cout << cnt << endl;
//	return 0;
//}
			


//------Greedy-----회의실------------------------------


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char str[11];
//	int len;
//	int x;
//	int bucket[200] = { 0 };
//
//	int max;
//	int maxIndex;
//
//	cin >> str;
//	for (x = 0; x < 11; x++)
//	{
//		if (str[x] == '\0')
//		{
//			len = x;
//			break;
//		}
//	}
//
//	for (x = 0; x < len; x++)
//	{
//		bucket[str[x]]++;
//	}
//
//	max = 0;
//	for (x = 0; x < 200; x++)
//	{
//		if (bucket[x] > max)
//		{
//			max = bucket[x];
//			maxIndex = x;
//		}
//	}
//
//	cout << (char)(maxIndex);
//
//}

//-----------민코딩 18.5 ----------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	int arr[6];
//	int i;
//	int x, y;
//	int bucket[100] = { 0 };
//	int flag = 0;
//
//	for (i = 0; i < 6; i++) 
//	{
//		cin >> arr[i];		
//	}
//
//	for (i = 0; i < 6; i++)
//	{
//		bucket[arr[i]]++;
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		if (bucket[i] > 1)
//		{
//			flag = 1;
//			break;
//		}
//	}
//
//	if (flag == 1) cout << "도플갱어 발견";
//	else cout << "미발견";
//
//
//	return 0;
//
//}


//---------민코딩 18.5 ----------------------------------------------
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6];
//	int bucket[100] = { 0 };
//	int flag = 0;
//
//	for (int i = 0; i<6; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		bucket[arr[i]]++;
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		if (bucket[i] > 1)
//		{
//			flag = 1;
//			break;
//		}
//	}
//
//	if (flag == 1)
//	{
//		cout << "good";
//	}
//	else cout << "false";
//
//	return 0; 
//
//}


//---------민코딩 18.5 --------------------------------------

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr1[5];
//	int arr2[5];
//	int count;
//	count = 0;
//
//	for (int i = 0; i<5; i++)
//	{
//		cin >> arr1[i];
//	}
//
//	for (int l = 0; l < 5; l++)
//	{
//		cin >> arr2[l];
//	}
//	for (int x = 0; x < 5; x++)
//	{
//		if (arr1[x] == arr2[x] &&  arr1[x]== 1)  // &&로 묶기 
//		{
//			count++;
//		}
//	}
//	cout << count << "개" << endl;
//
//
//	return 0; 
//
//}

#include <iostream>
using namespace std;

int main()
{
	char arr[9] = { "ATKPTCABC", };









	return 0;
}
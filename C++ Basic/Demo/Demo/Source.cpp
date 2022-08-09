//#include <stdio.h>

//void update(int* a, int* b) {
//    // Complete this function
//    int tmp1, tmp2;
//    tmp1 = *a + *b;
//    if (*a >= *b)
//        tmp2 = *a - *b;
//    else tmp2 = *b - *a;
//    *a = tmp1;
//    *b = tmp2;
//}
//
//int main() {
//    int a, b;
//    int* pa = &a, * pb = &b;
//
//    scanf_s("%d %d", &a, &b);
//    update(pa, pb);
//    printf_s("%d\n%d", a, b);
//
//    return 0;
//}

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main1() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int n, arr[10000];
//    //Input n and array arr[n]
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//    //Print out arr[n]    
//    for (int i = n - 1; i >= 0; i--) {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}

////Variable Sized Arrays
///*
//	Input format:
//		- 1st Line: n q (n_number of variable-length arrs; q_queries)
//		- Each line i of n: k a[0], a[1],...,a[k-1]
//		- Each line j of q: m n (m_index of arr, n_index of element)
//	Output format: for each j of q print am[n]
//	Example:
//		Input:
//			2 2
//			3 1 5 4
//			5 1 2 8 9 3
//			0 1
//			1 3
//		Output:
//			5
//			9
//*/
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	vector<vector<int>> vct, qr;
//
//	int n, q;
//	cin >> n >> q;
//
//	for (int i = 0; i < n; i++) {
//		int k, x;
//		cin >> k;
//		vector<int> arr;
//		for (int j = 0; j < k; j++) {
//			cin >> x;
//			arr.push_back(x);
//		}
//		vct.push_back(arr);
//	}
//	for (int j = 0; j < q; j++) {
//		int m, n;
//		cin >> m >> n;
//		vector<int> ar;
//		ar.push_back(m);
//		ar.push_back(n);
//		qr.push_back(ar);		
//	}
//
//	//cout << n << " " << q << endl;
//	//for (int i = 0; i < vct.size(); i++) {
//	//	for (int j = 0; j < vct[i].size(); j++) {
//	//		cout << vct[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//for (int i = 0; i < qr.size(); i++) {
//	//	cout << qr[i][0] << " " << qr[i][1] << endl;
//	//}
//
//	for (int i = 0; i < qr.size(); i++) {
//		cout << vct[qr[i][0]][qr[i][1]] << endl;
//	}
//	return 0;
//}

////StringStream
///*
//	Input format: There is one line of  integers separated by commas.
//	Output format: vector<int>: a vector of the parsed integers.
//	Example:
//		Input:
//			23,4,56
//		Output:
//			23
//			4
//			56
//*/
//
//#include <sstream>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<int> parseInts(string str) {
//	// Complete this function
//	vector<int> vct;
//	
//	char c = ',';
//	int count_c = 0;
//
//	for (int i = 0; i < str.length(); i++)
//		if (str[i] == c)count_c += 1;
//	//cout << count_c << endl;
//	stringstream ss(str);
//	for (int i = 0; i <= count_c; i++) {
//		int x;
//		ss >> x >> c;
//		vct.push_back(x);
//	}
//	return vct;
//}
//
//int main() {
//	string str;
//	cin >> str;
//	vector<int> integers = parseInts(str);
//	for (int i = 0; i < integers.size(); i++) {
//		cout << integers[i] << "\n";
//	}
//
//	return 0;
//}

////StringStream
///*
//	Input format: There is one line of  integers separated by commas.
//	Output format: vector<int>: a vector of the parsed integers.
//	Example:
//		Input:
//			23,4,56
//		Output:
//			23
//			4
//			56
//*/
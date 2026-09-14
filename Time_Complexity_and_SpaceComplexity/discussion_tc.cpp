#include<bits/stdc++.h>
 using namespace std;
 int main(){

		//  // Constant Time Complexity. -> o(1);
		//  int n; // -> O(1);
		//  cin >> n; // -> O(1);

		//  cout << n; // O(1)

		// Linear Time Complexity;

		// int n;		// O(1);
		// cin >> n; // O(1);

		// for (int i = 0; i <= 5 * n; i++){
		// 	cout << i << endl;
		// } // O(N);

		// 	return 0; // O(1);

		// 	// Final Complexity -> O(1 + 1 + n + 1) -> O(n) -> O(n);

		// 	// Always Ignore Constant Value

  int n;
	cin >> n;

	int sum = (n * (n + 1)) / 2; // O(1);

	// for (int i = 1; i <= n; i++){
	// 	sum += i;
	// }  // O(N)
	cout << sum;
 }
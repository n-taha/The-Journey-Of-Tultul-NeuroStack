#include<bits/stdc++.h>
 using namespace std;
 int main(){

		 long long int n, q;
		 cin >> n >> q;
		 long long int arr[n];

		 for (int i = 0; i < n; i++){
			 cin >> arr[i];
		 }

		 sort(arr, arr + n); // N Log N

		 while(q--){
		 long long int l = 0;
		 long long int r = n - 1;
		 long long int x;
		 cin >> x;
		 int flag = 0;

		 while (l <= r){
			 long long int mid = (l + r) / 2;
			 if (arr[mid]==x){
				 flag = 1;
				 break;
			 }else if(x > arr[mid]){
				 l = mid + 1;
			 }else{
				 r = mid - 1;
			 }
		 }

		 if (flag == 1){
			 cout << "found" << endl;
		 }else{
			 cout << "not found" << endl;
		 }

		 }
		return 0;
 }
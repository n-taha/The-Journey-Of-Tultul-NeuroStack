#include<bits/stdc++.h>
 using namespace std;
    int main(){

        vector<int> v; // empty vector;
        vector<int> v2;

        // cout << v[0] <<  " " << v.at(1) << endl;
        // cout << v.back() << endl;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        // v.clear();
        // cout << v.size() << endl;
        // cout << v.capacity() << endl;
        // v.pop_back();
        cout << v.size() << endl;
        v.resize(10, 100);
        cout << v.size() << endl;
        for (int i = 0;  i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
 }



 // Static Array -> Stack Memory Allocate, Fixed Size, Fast;
// Dynamic Array -> Dynamic Memory Or Heap Memory Allocate , Larger, slower the static memory

 // Static Memory -> Automatic Memory Cleanup;
 // Dynamic Memory -> Manually Cleanup, Object Type data Store

 // Vector -> STL (Standard Template Library);

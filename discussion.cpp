#include<bits/stdc++.h>
using namespace std;

void change_value(int &p){
    p = 20;
}

int main(){
    int x = 10;
    cout << x << endl;
    change_value(x);
    cout << x;
}
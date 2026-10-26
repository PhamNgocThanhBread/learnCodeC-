#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
    int a;
    int b;
    cout<<"hay nhap so a: " << endl;
    cin >> a;
    cout<<"hay nhap so b: " << endl;
    cin >> b;
    int c = sum(a,b);
    cout<<"vay tong se la: " << c << endl;
    return 0;
}
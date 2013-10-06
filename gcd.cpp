#include <iostream>

using namespace std;

int gcd(int a, int b){          //递归计算a和b的最大公因数
    int r;
    if(b == 0) return a;
    else{
	return  gcd(b, a % b);
    }
}

int main(){
    int a, b;
    while(1){
	char temp;
        cout << "Please input a and b: " << endl;
        cin >> a >> b;
        int ans = gcd(a, b);
        cout << "The gcd of a and b is : " << ans << endl;
	cout << "if you want quit, type 'q', type 'c' to continue" << endl;
	cin >> temp;
	if (temp == 'q')
	    return 0;
    }
    return 0;
}

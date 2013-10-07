#include <iostream>

using namespace std;

int gcd(int a, int b){          //递归计算a和b的最大公因数
    int r;
    if(b == 0) return a;
    else{
	return  gcd(b, a % b);
    }
}

int abs(int a){                 //对输入取绝对值
    if(a < 0)
        a = -a;
    return a;
}

int main(){
    int a, b;
    while(1){
	char temp;
        cout << "Please input a and b: " << endl;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        if(a == 0 && b == 0){  //当两个数都是0的时候求最大公因数无意义
            cout << "Please input two Nonzero numbers." << endl;
            continue;
        }
        int ans = gcd(a, b);
        cout << "The gcd of a and b is : " << ans << endl;
	cout << "if you want quit, type 'q', type 'c' to continue" << endl;
	cin >> temp;
	if (temp == 'q')
	    return 0;
    }
    return 0;
}

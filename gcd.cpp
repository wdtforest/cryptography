/*******************************
 * created by: 盖方宇 1120112212
 * Time: 2013/10/05
 *******************************/

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
        cout << "请输入a和b：" << endl;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        if(a == 0 && b == 0){  //当两个数都是0的时候求最大公因数无意义
            cout << "请输入两个不全为0的数" << endl;
            continue;
        }
        int ans = gcd(a, b);
        cout << a << "和" << b << "的最大公约数是：" << ans << endl;
	cout << "退出请输入'q'，继续请输入'c'" << endl;
	cin >> temp;
	if (temp == 'q')
	    return 0;
    }
    return 0;
}

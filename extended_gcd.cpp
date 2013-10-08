/*******************************
 * created by: 盖方宇 1120112212
 * Time: 2013/10/05
 *******************************/

#include <iostream>

using namespace std;


/**
 * 利用扩展欧几里得算法实现求乘法逆元
 *
 * x为传引用，其值为a模b的乘法逆元
 *
 * y为传引用，其值为b模a的乘法逆元
 **/
int extended_gcd(int a, int b, int &x, int &y){
    int ret, tmp;
    if(!b){
    	x = 1; y = 0;
	return a;
    }
    ret = extended_gcd(b, a % b, x, y);
    tmp = x;
    x = y;
    y = tmp - a / b * y;
    return ret;
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
            cout << "请输入两个不全是0的数" << endl;
            continue;
        }
	int x, y;
	x = 0; y = 0;
        int ans = extended_gcd(a, b, x, y);
	cout << a << "和" << b << "的最大公约数是：" << ans << endl;
	cout << a << "模" << b << "的乘法逆元是：" << x << endl;
	cout << b << "模" << a << "的乘法逆元是：" << y << endl;
	cout << "退出请输入'q', 继续请输入'c'" << endl;
	cin >> temp;
	if (temp == 'q')
	    return 0;
	else if (temp == 'c')
	    continue;
	else 
	    cout<<"The input is wrong!"<<endl;
    }
    return 0;
}

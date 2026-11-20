#include<bits/stdc++.h>
using namespace std;

// 符合这个类型：参数int，返回double
double f(int x)
{
    return x / 2.0;
}

int main()
{
    // 定义函数指针fp
    double (*fp)(int);
    // 让fp指向函数f（&f 可以简写写成 f，函数名本身就是地址）
    fp = &f;

    // 两种调用写法，效果一样
    double ans1 = (*fp)(10);
    double ans2 = fp(10);

    cout <<fixed<<setprecision(1)<<ans1 << " " << ans2;
    return 0;
}
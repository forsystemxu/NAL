#include <iostream>  // 引入标准输入输出库，用于cin和cout
using namespace std;
using ll=long long;
int main() {
    ll num;  // 定义一个整数变量，用于存储从cin读取的值
    ll sum = 0;  // 初始化一个变量sum，用于累加用户输入的整数，总和初始化为0
    
    // 通过while循环不断从标准输入读取数据
    // cin >> num：读取用户输入的整数到变量num中
    // 当cin成功读取一个整数时，表达式cin >> num返回true，继续执行循环
    // 如果cin遇到输入错误或者文件结束符(EOF)，则表达式返回false，退出循环
    while (cin >> num) {
        sum += num;  // 将读取到的整数累加到sum中
        // 输出当前读取的整数，以及累加后的总和
        cout << "你输入的数字是: " << num << "，当前总和为: " << sum << endl;
    }
    cin.clear();
    int a=0;cin>>a;
    // 当循环结束后，cin不再有效，输出最终的总和
    cout << "输入结束，最终的总和为: " << sum << endl;

    return 0;  // 返回0表示程序成功结束
}


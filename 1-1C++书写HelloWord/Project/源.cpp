#include <iostream>//iostream是C++中标准库的输入输出流库，包含了用于输入输出的类和函数//os:这句话声明std一类的
using namespace std;//std命名空间内所有的标识符都已声明且存在，就像他们被声明全局变量一样，命名空间//os:这句话声明std中的标识符

int main1()
{
	cout << "Hello World!" << endl;//把字符串插入到输出流中，endl相当于该句话的句号，类似于\n比\n更好不需要回车程序也可以运行

	system("pause");//DOS命令合集中暂停的命令，c++中暂停黑窗口的命令
	return 0;
}
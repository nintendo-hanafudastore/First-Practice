#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
//
int main()
{
	printf("Hello World！\nIt's a wonderful world!");
	printf("\n%d", 100);
	printf("\n%d",sizeof(char));
	printf("\n%d",sizeof(int));
	printf("\n%d",sizeof(long)); 
	printf("\n%d",sizeof(long long));
	printf("\n%d",sizeof(float));
	printf("\n%d",sizeof(double));
	printf("\n%d",sizeof(short));

	return 0;
}
//Note:
//1bit:一个二进制的0/1
//1字节：1byte=8bit
//1kb=1024byte
//1mb=1024kb
//1gb=1024mb
//1tb=1024gb
//1pb=1024tb
//char字符数据类型 1bit
//short短整型 2bit
//int整型 4bit
//long长整型 4bit
//long long更长的整形 8bit
//float单精度浮点数 4bit
//double双精度浮点数 8bit
// 浮点数：小数
// printf("%d",100)//打印一个整数-%d
// sizeof-一个操作符，用于计算类型或变量所占空间的大小
// sizeof（数据类型名称）
// "%d"表示输出十进制有符号数，"%f"表示输出浮点数
// "\n"表示换行
//
int main()
{
	int age = 17;
	age = age + 1;
	printf(" % d\n",age);
	long weight = 160;
	weight = weight - 20;
	printf("%d\n", weight);

	return 0;
}
//Note:
//局部变量：定义在大括号{}内的变量
//全局变量：定义在大括号{}外的变量
//当局部变量全局变量名称冲突时，局部变量优先
//
int haruhi = 100;
int main()
{   
	printf(" %d\n", haruhi );
	return 0;
}
//Note:
//不建议使局部变量与全局变量名称冲突

int main()
{//加法计算器：
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n",sum);

	return 0;
}
//Note:
//scanf': This function or variable may be unsafe.Consider using scanf_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.See online help for details.
//直接运行会报错，解决方法：
// 1.复制大写段字母，写在代码第一行：“#define （空格）_CRT_SECURE_NO_WARNINGS” 
// 2.使用scanf-s函数，由VS编译器提供，其他编译器不能使用\读取
// 3.在 D:\软件\Visual Studio正式版\Common7\IDE\VC\VCProjectItems 路径找到“newC++file.cpp”文件，复制那段话，以后所有新建项目都可直接使用（管理员权限）
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",a);
	return 0;
}
//重复我输入的数字程序

//Note:
//作用域：一段程序代码中的名字并不总是有效/可用的，限定这个名字可用性的代码范围就是作用域。
//局部变量的作用域：变量所在的局部范围
//全局变量的作用域：整个工程（可在同一工程下的不同文件中使用)
//需要声明变量：“extern  int 变量名”
//extern int haruhi;
//
int main()
{
	printf("%d", haruhi);
	return 0;
}
//Note:
//变量的生命周期：变量创建与销毁之间的时间段
//全局变量的生命周期：程序的生命周期
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束（大括号内）
//常量：
// 1.字面常量：3.14、10、a、abcdef（无意义）
// 2.const修饰的常变量：
int main()
{
	const int mikuru = 1096;
	mikuru = 0721;//报错，显示左值不可修改
	printf("%d", mikuru);
	return 0;
}
//“const int 变量名”可使变量恒定，不可被修改（常属性）
int main()
{
	int arr[10] = { 0 };//创建有十个元素的数组
	int a = 10;
	const int arr2[a] = { 0 };//此处会报错，因为输入的数组元素数必须为常量（即使通过const让其变为常变量也不行！）
	return 0;
}
//3.#define定义的标识符常量:
//#define MAX 10000;//（在函数内部定义也可）
int main()
{
	int a = MAX;
	printf("%d", a);
	return 0;
}
//4.枚举常量：可以一一列举的常量
//eg:
enum Sex
{
	//这种枚举型常量未来的可能取值
	MALE=3,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//枚举型常量的编号是从0开始依次编码的（也可在定义时赋初值为其他数）
    return 0;
}
//Note:
//字符串：一串字符（用双引号括起的一串字符）eg:"super mario"
//数组：一组相同类型的元素
//可将字符串 存进一个字符数组中
//字符串的末尾隐藏了一个\0的字符，\0是字符串的结束标志
//strlen函数：求字符串的长度“string length”
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };//这种方式末尾不含\0结束标志，内存会读取到未知的部分，导致乱码（也可手动加入\0）
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//打印出的长度为随机值
	return 0;
}

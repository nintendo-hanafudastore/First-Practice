#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
//
int main()
{
	printf("Hello World��\nIt's a wonderful world!");
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
//1bit:һ�������Ƶ�0/1
//1�ֽڣ�1byte=8bit
//1kb=1024byte
//1mb=1024kb
//1gb=1024mb
//1tb=1024gb
//1pb=1024tb
//char�ַ��������� 1bit
//short������ 2bit
//int���� 4bit
//long������ 4bit
//long long���������� 8bit
//float�����ȸ����� 4bit
//double˫���ȸ����� 8bit
// ��������С��
// printf("%d",100)//��ӡһ������-%d
// sizeof-һ�������������ڼ������ͻ������ռ�ռ�Ĵ�С
// sizeof�������������ƣ�
// "%d"��ʾ���ʮ�����з�������"%f"��ʾ���������
// "\n"��ʾ����
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
//�ֲ������������ڴ�����{}�ڵı���
//ȫ�ֱ����������ڴ�����{}��ı���
//���ֲ�����ȫ�ֱ������Ƴ�ͻʱ���ֲ���������
//
int haruhi = 100;
int main()
{   
	printf(" %d\n", haruhi );
	return 0;
}
//Note:
//������ʹ�ֲ�������ȫ�ֱ������Ƴ�ͻ

int main()
{//�ӷ���������
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
//ֱ�����лᱨ�����������
// 1.���ƴ�д����ĸ��д�ڴ����һ�У���#define ���ո�_CRT_SECURE_NO_WARNINGS�� 
// 2.ʹ��scanf-s��������VS�������ṩ����������������ʹ��\��ȡ
// 3.�� D:\���\Visual Studio��ʽ��\Common7\IDE\VC\VCProjectItems ·���ҵ���newC++file.cpp���ļ��������Ƕλ����Ժ������½���Ŀ����ֱ��ʹ�ã�����ԱȨ�ޣ�
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",a);
	return 0;
}
//�ظ�����������ֳ���

//Note:
//������һ�γ�������е����ֲ���������Ч/���õģ��޶�������ֿ����ԵĴ��뷶Χ����������
//�ֲ������������򣺱������ڵľֲ���Χ
//ȫ�ֱ������������������̣�����ͬһ�����µĲ�ͬ�ļ���ʹ��)
//��Ҫ������������extern  int ��������
//extern int haruhi;
//
int main()
{
	printf("%d", haruhi);
	return 0;
}
//Note:
//�������������ڣ���������������֮���ʱ���
//ȫ�ֱ������������ڣ��������������
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ�����������������ڣ�
//������
// 1.���泣����3.14��10��a��abcdef�������壩
// 2.const���εĳ�������
int main()
{
	const int mikuru = 1096;
	mikuru = 0721;//������ʾ��ֵ�����޸�
	printf("%d", mikuru);
	return 0;
}
//��const int ����������ʹ�����㶨�����ɱ��޸ģ������ԣ�
int main()
{
	int arr[10] = { 0 };//������ʮ��Ԫ�ص�����
	int a = 10;
	const int arr2[a] = { 0 };//�˴��ᱨ����Ϊ���������Ԫ��������Ϊ��������ʹͨ��const�����Ϊ������Ҳ���У���
	return 0;
}
//3.#define����ı�ʶ������:
//#define MAX 10000;//���ں����ڲ�����Ҳ�ɣ�
int main()
{
	int a = MAX;
	printf("%d", a);
	return 0;
}
//4.ö�ٳ���������һһ�оٵĳ���
//eg:
enum Sex
{
	//����ö���ͳ���δ���Ŀ���ȡֵ
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
	//ö���ͳ����ı���Ǵ�0��ʼ���α���ģ�Ҳ���ڶ���ʱ����ֵΪ��������
    return 0;
}
//Note:
//�ַ�����һ���ַ�����˫���������һ���ַ���eg:"super mario"
//���飺һ����ͬ���͵�Ԫ��
//�ɽ��ַ��� ���һ���ַ�������
//�ַ�����ĩβ������һ��\0���ַ���\0���ַ����Ľ�����־
//strlen���������ַ����ĳ��ȡ�string length��
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };//���ַ�ʽĩβ����\0������־���ڴ���ȡ��δ֪�Ĳ��֣��������루Ҳ���ֶ�����\0��
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//��ӡ���ĳ���Ϊ���ֵ
	return 0;
}

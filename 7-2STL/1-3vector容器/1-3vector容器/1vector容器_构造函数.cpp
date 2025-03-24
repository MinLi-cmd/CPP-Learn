/*vector���캯��
	����������
		����vector����
	����ԭ�ͣ�
		vector<T> v;				//����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
		vector(v.begin(), v.end());	//��v[begin(), end())�����е�Ԫ�ؿ���������
		vector(n, elem);			//���캯����n��elem����������
		vector(const vector& vec);	//�������캯��

	�ܽ᣺vector�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü��ɡ�
*/

#include <iostream>
using namespace std;
#include <vector>

void PrintVector11(vector<int>& _v)
{
	for (vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void Study_VectorGouZao(void)
{
	//Ĭ�Ϲ��� �޲ι���
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(23 + i);
	}
	PrintVector11(v1);

	//ͨ�����䷽ʽ���й���
	vector<int> v2(v1.begin(), v1.end());
	PrintVector11(v2);

	//n��elem�ķ�ʽ����
	vector<int> v3(10, 100);
	PrintVector11(v3);

	//�������죬����ʹ��
	vector<int> v4(v3);
	PrintVector11(v4);

}

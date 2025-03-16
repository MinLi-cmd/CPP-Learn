#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <cassert>

template <class T1>
class UserArr91
{
public:
	UserArr91(int capacity);
	UserArr91(const UserArr91& C);
	UserArr91& operator= (const UserArr91& C);
	~UserArr91();
	const T1& operator[](int index) const;
	T1& operator[](int index);

	void PushBlock(const T1& data);
	void PopBlock(void);

	int GetSize(void);
	int GetCapacity(void);

private:
	int _size;
	int _capacity;
	T1* _arr;

};

template<class T1>
UserArr91<T1>::UserArr91(int capacity)
{
	this->_capacity = capacity;
	this->_size = 0;
	this->_arr = new T1[capacity];
}

template<class T1>
UserArr91<T1>::UserArr91(const UserArr91& C)
{
	this->_capacity = C._capacity;
	this->_size = C._size;
	this->_arr = new T1[C._capacity];

	assert(this->_size <= this->_capacity);
	for (int i = 0; i < C._size; i++)
	{
		this->_arr[i] = C._arr[i];
	}
}
template<class T1>
UserArr91<T1>& UserArr91<T1>::operator= (const UserArr91& C)
{
	if (this != &C)
	{
		delete[] this->_arr;
		this->_arr = new T1[C._capacity];

		this->_capacity = C._capacity;
		this->_size = C._size;

		assert(this->_size <= this->_capacity);//�������󣬷�ֹ����C6386�����Ե������������ʱ��assert ���� size <= capacity ������������� size ���� capacity������ʧ�ܣ��������ֹ�����������Ϣ��ָ������ʧ�ܷ�����λ�á�
		for (int i = 0; i < C._size; i++)
		{
			this->_arr[i] = C._arr[i];
		}
		return *this;
	}
	else
		return *this;
}
template<class T1>
UserArr91<T1>::~UserArr91()
{
	delete[] this->_arr;
	this->_arr = NULL;
}
template<class T1>
const T1& UserArr91<T1>::operator[](int index) const
{
	if (index < 0 || index >= _size)
	{
		throw std::out_of_range("Index out of range");
	}
	return this->_arr[index];
}
template<class T1>
T1& UserArr91<T1>::operator[](int index)
{
	if (index < 0 || index >= _size)
	{
		throw std::out_of_range("Index out of range");
	}
	return this->_arr[index];
}
template<class T1>
int UserArr91<T1>::GetSize(void)
{
	return this->_size;
}

template<class T1>
int UserArr91<T1>::GetCapacity(void)
{
	return this->_capacity;
}

template<class T1>
void UserArr91<T1>::PushBlock(const T1& data)
{
	if (this->_size < this->_capacity)
	{
		this->_arr[this->_size] = data;
		this->_size++;
	}

	else
	{
		cout << "���������޷�����" << endl;
		return;
	}
}

template<class T1>
void UserArr91<T1>::PopBlock(void)
{
	if (this->_size == 0)
	{
		cout << "����Ϊ���޷�ɾ��" << endl;
		return;
	}
	this->_size--;
}


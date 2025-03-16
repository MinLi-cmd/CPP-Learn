#pragma once

#include <iostream>
#include <string>

template <class T>
class MyArray91
{
public:
	MyArray91(int capacity);
	MyArray91(const MyArray91<T>& m);
	MyArray91<T>& operator=(const MyArray91<T>& m);
	~MyArray91();

	T& operator[](int index);

	void PushBlock(T& data);
	void PopBlock(void);

	int GetCapacity();
	int GetSize();
	

private:

	int _capacity;
	int _size;
	T* _arr;

};

template<class T>
MyArray91<T>::MyArray91(int capacity)
{
	this->_capacity = capacity;
	this->_size = 0;
	this->_arr = new T[capacity];
}

template<class T>
MyArray91<T>::MyArray91(const MyArray91<T>& m)
{
	this->_capacity = m._capacity;
	this->_size = m._size;
	this->_arr = new T[m._capacity];

	for (short i = 0; i < m._size; i++)
	{
		this->_arr[i] = m._arr[i];
	}
}

template<class T>
MyArray91<T>& MyArray91<T>::operator=(const MyArray91<T>& m)
{
	if (this == &m)
	{
		return *this;
	}

	this->_capacity = m._capacity;
	this->_size = m._size;
	delete[] this->_arr;

	this->_arr = new T[m._capacity];
	for (short i = 0; i < m._size; i++)
	{
		this->_arr[i] = m._arr[i];
	}
	return *this;
}

template<class T>
MyArray91<T>::~MyArray91(void)
{
	delete[] this->_arr;
	this->_arr = NULL;
}

template<class T>
T& MyArray91<T>::operator[](int index)
{
	if (index < 0 || index >= this->_size)
	{
		std::cout << "下标索引越界！" << std::endl;
	}
	return this->_arr[index];
}

template<class T>
void MyArray91<T>::PushBlock(T& data)
{
	if (this->_size == this->_capacity)
	{
		return;
	}

	this->_arr[this->_size] = data;
	this->_size++;
}

template<class T>
void MyArray91<T>::PopBlock(void)
{
	if (this->_size == 0)
	{
		return;
	}

	this->_size--;
}


template <class T>
int MyArray91<T>::GetCapacity(void)
{
	return this->_capacity;
}

template <class T>
int MyArray91<T>::GetSize(void)
{
	return this->_size;
}
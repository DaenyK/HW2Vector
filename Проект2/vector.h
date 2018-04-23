#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Vector
{
private:
	int cur_size;
	int buf_size;
	int *els;

public:
	Vector() {
		cur_size = 0;
		buf_size = 0;
		els = nullptr;
	}

	Vector(int size)
	{
		this->cur_size = size;
		this->buf_size = size;
		this->els = new int[buf_size];
		for (int i = 0; i < buf_size; i++)
		{
			els[i] = 0;
		}
	}
	Vector(const Vector&src)
	{
		this->cur_size = src.cur_size;
		this->buf_size = src.cur_size;
		this->els = new int[cur_size];
		for (int i = 0; i < cur_size; i++)
		{
			els[i] = src.els[i];
		}
	}

	void print()
	{
		for (int i = 0; i < cur_size; i++)
		{
			cout << els[i] << "    ";
		}
	}
	void pushBack(const int &e)
	{
		if (cur_size >= buf_size)
		{
			int *temp;
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0; i < cur_size; i++)
				temp[i] = els[i];
			delete[]els;
			els = temp;
		}
		els[cur_size++] = e;
	}
	void pushPos(const int&p, const int&e)
	{
		if (cur_size >= buf_size)
		{
			int *temp;
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0; i < cur_size; i++)
				temp[i] = els[i];
			delete[]els;
			els = temp;
			cur_size++;
			for (int i = cur_size; i >p - 1; i--)
				els[i + 1] = els[i];
			els[p - 1] = e;
			if (p + 1 == cur_size)els[p] = 0;
		}
		else
		{
			cur_size++;
			for (int i = cur_size; i >p - 1; i--)
				els[i + 1] = els[i];
			els[p - 1] = e;
			if (p == cur_size)els[p + 1] = 0;
		}
	}
	void popBack()
	{
		if (cur_size > 0)
			cur_size--;
	}
	void deletePos(const int&p)
	{
		for (int i = p - 1; i < cur_size; i++)
			els[i] = els[i + 1];
		cur_size--;
	}
	void returnInPos(const int&p, const int&e)
	{
		els[p - 1] = e;
	}
	int& at(int pos)
	{
		return els[pos - 1];
	}

	
	//деструктор
	~Vector()
	{
		delete[]els;
		els = nullptr;
	}
};
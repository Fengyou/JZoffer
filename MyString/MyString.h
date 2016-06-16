#pragma once
#include<iostream>
#include<string>

using namespace std;

#define CAPACITY 2
class myString
{
public:
	myString()
	:_str(new char[CAPACITY])
	, _capacity(CAPACITY)
	, _size(0)
	{
		_str[0] = '\0';
	}
	myString(const char *a)
		:_size(strlen(a))
		,_capacity(_size+CAPACITY)
	{
		_str = new char[_capacity];

		strcpy(_str, a);
	}
	myString(const myString &str)
	{
		if (&str != NULL)
		{
			_str = new char[str._capacity];

			strcpy(_str, str._str);
		}
	}
	myString& operator=(const myString &str)
	{
		if (this != &str)
		{
			myString strTemp(str);
			char *tmp = strTemp._str;
			strTemp._str = _str;
			_str = tmp;
		}
		return *this;
	}
	~myString()
	{
		if (_str)
		{
			delete[] _str;
			cout << " Îö¹¹£¡" << endl;
		}
	}

	friend ostream& operator<<(ostream& os, const myString &s);
	friend istream& operator>>(istream& is, myString& s);
private:
	char* _str;
	size_t _size;
	size_t _capacity;
};

ostream& operator<<(ostream& os, const myString& s)
{
	os << s._str;
	return os;
}
istream& operator>>(istream& is, myString& s)
{
	return is;
}

void Test()
{
	myString s("abc");
	cout << "s:"<< s << endl;

	myString s1(s);
	cout << "s1:" << s1 << endl;

	myString s2;
	s2 = s;
	cout << "s2:" << s2 << endl;
}
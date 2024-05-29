#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
using namespace std;

namespace moyu
{
	class string
	{
	private:
		char* _str = nullptr;
		size_t _size = 0 ;
		size_t _capacity = 0;
		const static size_t npos;
	public:
		string(const char* str = "");
		string(const string& str);
		~string();

		size_t size() const;
		const char* c_str() const;
		char& operator[](size_t pos);
		const char& operator[] (size_t pos) const;

		typedef char* iterator;
		iterator begin();
		iterator end();
		typedef const char* const_iterator;
		const_iterator begin() const;
		const_iterator end() const;


		void reserve(size_t n);
		void push_back(const char ch);
		string& append(const char* str);
		string& append(const char ch);
		string& operator+=(const char* str);
		string& operator+=(const char ch);

		string& insert(size_t pos , const char ch);
		string& insert(size_t pos , const char* str);
		string& erase(size_t pos = 0, size_t len = npos);

		size_t find(const char ch, size_t pos = 0);
		size_t find(const char* str, size_t pos = 0);

		string& operator=(string str);

		void swap(string& str);
		bool operator<(const string& str);
		bool operator>(const string& str);
		bool operator<=(const string& str);
		bool operator>=(const string& str);
		bool operator==(const string& str);
		bool operator!=(const string& str);

		string substr(size_t pos = 0, size_t len = npos);

		void clear();
	};

	istream& operator>>(istream& in, string& str);
	ostream& operator<<(ostream& out, string& str);
	ostream& operator<<(ostream& out, const string& str);
}

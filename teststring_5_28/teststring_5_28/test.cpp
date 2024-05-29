#include"string.h"

namespace moyu
{
	void teststring1()
	{
		string str1;
		cout << str1.c_str() << endl;

		string str2("hello world");
		cout << str2.c_str() << endl;

		string str3(str2);
		cout << str3.c_str() << endl;

		for (size_t i = 0; i < str3.size(); ++i)
		{
			str3[i] = '0';
			cout << str3[i] << ' ';
		}
		cout << endl;
		cout << str3.c_str() << endl;

		string::iterator begin = str3.begin();
		string::iterator end = str3.end();
		while (begin < end)
		{
			*begin = '1';
			cout << *begin << ' ';
			++begin;
		}
		cout << endl;

		for (auto& ch : str3)
		{
			ch = '2';
			cout << ch << ' ';
		}
		cout << endl;
		cout << str3.c_str() << endl;

		const string str4("hello world!");
		string::const_iterator begin1 = str4.begin();
		string::const_iterator end1 = str4.end();
		while (begin1 < end1)
		{
			//*begin1 = '4';
			cout << *begin1 << ' ';
			++begin1;
		}
		cout << endl;

		for (auto ch : str4)
		{
			cout << ch << ' ';
		}
		cout << endl;

	}

	void teststring2()
	{
		string str1("hello world");
		cout << str1.c_str() << endl;
		str1 += 'h';
		cout << str1.c_str() << endl;

		str1.push_back('y');
		cout << str1.c_str() << endl;
		str1.append("hello");
		cout << str1.c_str() << endl;
		str1 += " world";
		cout << str1.c_str() << endl;

		string str2("hello world");
		str2.insert(6, "LKKKK");
		cout << str2.c_str() << endl;
		str2.insert(6, 'o');
		cout << str2.c_str() << endl;

		string str3;
		str3.insert(0, "hello world");
		cout << str3.c_str() << endl;

		str3.erase(5, 3);
		cout << str3.c_str() << endl;
	}
	void teststring3()
	{
		string str1("hello world");
		cout << str1.find('l') << endl;
		cout << str1.find("or") << endl;
		cout << str1.find("lo") << endl;
	}

	void teststring4()
	{
		string str1("hello world");
		string str2("hello worla");
		string str3("a");
		string str4("z");
		cout << (str1 < str2) << endl;
		cout << (str1 > str2) << endl;
		cout << (str1 > str3) << endl;
		cout << (str1 < str3) << endl;
		cout << (str3 > str4) << endl;
		cout << (str3 < str4) << endl;
		cout << (str3 == str4) << endl;
		cout << (str3 != str4) << endl;
		cout << (str1 == str4) << endl;
		cout << (str1 != str4) << endl;
		
		cout << str1.c_str() << endl;
		cout << str3.c_str() << endl;
		str1.swap(str3);
		cout << str1.c_str() << endl;
		cout << str3.c_str() << endl;

		str2 = str4;
		cout << str2.c_str() << endl;

		string str5("hello world");
		cout << str5.substr(4,3).c_str() << endl;
		cout << str5.substr(4,3) << endl;

		string str6("hello");
		cin >> str6;
		cout << str6 << endl;
	}
	void teststring5()
	{
		string str("hello world");
		string str1(str);
		cout << str << endl << str1 << endl;
		cout << (void*)&str << ' ' << (void*)&str1 << endl;
	}
}

int main()
{
	//moyu::teststring1();
	//moyu::teststring2();
	//teststring4()moyu::teststring3();
	//moyu::teststring4();
	moyu::teststring5();
	return 0;
}
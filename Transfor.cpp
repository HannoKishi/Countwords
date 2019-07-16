

#include "Transfor.h"

string S2B(string s)                           //string类字符串中小写字母转大写字母
{
	int a = s.length();
	for (int i = 0; i < a; ++i)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = ('A' + (s[i] - 'a'));
	}
	return s;
}
string B2S(string s)                           //string类字符串中大写字母转小写字母
{
	int a = s.length();
	for (int i = 0; i < a; ++i)
	{
		if ((s[i] >= 'A') && (s[i] <= 'Z'))
			s[i] = ('a' + (s[i] - 'A'));
	}
	return s;
}
string FB(string s)                            //string类字符串开头字母大写
{
	int a = s.length();
	if ((s[0] >= 'a') && (s[0] <= 'z'))
		s[0] = ('A' + (s[0] - 'a'));
	return s;
}


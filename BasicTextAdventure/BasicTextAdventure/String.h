
#pragma once

#include <cstddef>
#include <iostream>
#include <cctype>  
#include <cstring> 

class String
{
public:
	String();
	String(const char* String);

	String(const String &other);

	~String();
public:

	size_t Length() const;
	char& CharacterAt(size_t index);
	const char& CharacterAt(size_t index) const;

	bool EqualTo(const String& other) const;

	String& Append(const String& str);
	String& Prepend(const String& str);

	const char* CStr() const;

	String& ToLower();
	String& ToUpper();
	String& ToWobble();

	size_t Find(const String& str);
	size_t Find(size_t startIndex, const String& str);

	size_t CountMatches(size_t _startIndex, const String& _find) const;
	String& Replace(const String& find, const String& replace);

	String& ReadFromConsole();
	String& WriteToConsole();

public:
	bool operator==(const String& other);
	bool operator!=(const String& other);

	String& operator=(const String& str);

	char& operator[](size_t index);
	const char& operator[](size_t index) const;

	bool operator<(const String& other);

	bool operator>(const String& other);

private:
/*
* Put your internal data structures and members here
*/

	char* str;
};

//#endif
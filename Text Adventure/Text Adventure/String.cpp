#include "String.h"

#include <cctype>
#include <cstring>
#include <iostream>



//_CRT_SECURE_NO_WARNINGS

String::String() //defualt constructor 
	: str(nullptr)
{
	str = new char[1] {'\0'};
}

String::String(const char* String) //basic constructor
	: str(nullptr)
{
	//1.how much text are is String pointing at.
	std :: size_t StringLength = std::strlen(String) + 1;

	//2.Make String point at an array big enough to fit the text in String 
	str = new char[StringLength];

	//3.Copy the text from String to str.
	std::strncpy(str, String, StringLength);
}

String::String(const String& other) //copy constructor
	: str(nullptr)
	//: String(other.str)
{
	std::size_t StringLength = other.Length() + 1;
	str = new char[StringLength];
	std::strncpy(str, other.str, StringLength);
}

String::~String() //Destructor
{
	delete[] str;
}

size_t String::Length() const //Done
{
	for (int i = 0; ; i++)
	{
		if (str[i] == '\0')
		{
			return i;
		}
	}
}

// Returns a char from 'str' representing the character at the location.
// if index is greater than length, return the '\0' at the end of your string.
char& String::CharacterAt(size_t index) //Done
{
	if (index > Length())
	{
		index = Length();
	}
	
	return str[index];
}

const char& String::CharacterAt(size_t index) const //Done
{
	if (index > Length())
	{
		index = Length();
	}

	return str[index];
}

bool String::EqualTo(const String& _other) const //Done
{
	//1. Are their lengths the same 
	//2. Examine each character to look for a mismatch.
	//3. If there is a mismatch, they are not equal.
	//4. At that point, they must be equal.
	
	if (Length() != _other.Length())
	{
		return false;
	}
	for (size_t i = 0; i < Length(); i++)
	{
		if (str[i] != _other[i])
		{
			return false;
		}
	}
	return true;
}

String& String::Append(const String& _str) //Done
{ 
// 1.Cal the size of the new string.
// 1a.Add lengths if this and _str length +1
	std::size_t NewStringLength = Length() + _str.Length() + 1;
// 3.Create a new array of charcters of the size cal above.
	char* newStr = new char[NewStringLength];
// 4.copy contents of this string into the new array (at the start.)
	std::strcpy(newStr, str);
// 5.copy contents of _str into the new array (after the previus text is copid.)
	std::strcpy(newStr+Length(), _str.str);
// 6.Delete this string's array of character.
	delete[] str;
// 7.Make our str ponit at the new array of chraracter.
	str = newStr;

	return*this;
}

String& String::Prepend(const String& _str) //Done
{
	// 1.Cal the size of the new string.
// 1a.Add lengths if this and _str length +1
	std::size_t NewStringLength = Length() + _str.Length() + 1;
	// 3.Create a new array of charcters of the size cal above.
	char* newStr = new char[NewStringLength];
	// 4.copy contents of _str into the new array (at the start.)
	std::strcpy(newStr, _str.str);
	// 5.copy contents of this string into the new array (after the previus text is copid.)
	std::strcpy(newStr + _str.Length(), str);
	// 6.Delete this string's array of character.
	delete[] str;
	// 7.Make our str ponit at the new array of chraracter.
	str = newStr;

	return*this;
}

const char* String::CStr() const //done
{
	return str;
}

String& String::ToLower() //Done
{
	
	for (int i = 0; i < Length(); i++)
	{
		str[i] = std::tolower(str[i]);
	}
	return*this;
}

String& String::ToUpper() //Done
{
	for (int i = 0; i < Length(); i++)
	{	
		str[i] = std::toupper(str[i]);
	}
	return*this;
}
String& String::ToWobble() //Done
{
	ToLower();
	for (int i = 0; i < Length(); i++)
	{
		i = i + 1;
		str[i] = std::toupper(str[i]);
	}
	return*this;
}

size_t String::Find(const String& _str)//Done
{
	//Return the location of the requested char within the array, if not found return -1.
	int string1Lenght = Length();
	int string2Length = _str.Length();
	int I = 0;

	for (int i = 0; i < string1Lenght; i++)
	{
		for (I = 0; I < string2Length; I++)
		{
			if (str[i + I] != _str[I])
			{
				break;
			}
		}
		if (I == string2Length)
		{
			return i;
		}

	}
	return(-1);
}

size_t String::Find(size_t startIndex, const String& _str)//Done
{
	//Return the location of the requested char within the array, if not found return -1.
	int string1Lenght = Length();
	int string2Length = _str.Length();
	int I = 0;

	for (int i = startIndex; i < string1Lenght; i++)
	{
		for (I = 0; I < string2Length; I++)
		{
			if (str[i + I] != _str[I])
			{
				break;
			}
		}
		if (I == string2Length)
		{
			return i;
		}

	}
	return(-1);
}

String& String::ReadFromConsole() 
{
	
	std::istream::sentry fetcher(std::cin);

	if (!fetcher)
	{
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		return *this;
	}
	std::streamsize buffedText = std::cin.rdbuf()->in_avail();
	char* newString = new char[buffedText];

	std::cin.rdbuf()->sgetn(newString, buffedText);
	newString[buffedText - 1] = '\0';

	delete[] str;
	str = newString;

	return*this;
}

String& String::WriteToConsole(std::ostream& output) //Done.
{
	//Print to the console.
	output << str;
	return *this;
}

bool String::operator==(const String& other) //done
{	
	return this->EqualTo(other);
}

bool String::operator!=(const String& other) //done
{
	return !this->EqualTo(other);
}

String& String::operator=(const String& _str) //Done
{
	//Detecting if it is copying it self into it self.
	if (this == &_str)
		return *this;
	
	delete[] str;
	std::size_t _strLen = std::strlen(_str.str) + 1;
	str = new char[_strLen];
	std::strncpy(str, _str.str, _strLen);

	return*this;
}

char& String::operator[](size_t index) //Done
{
	return str[index];
}

const char& String::operator[](size_t index) const //Done
{
	return str[index];
}
bool String::operator<(const String& other)
{
	int strcmpINT = strcmp(str, other.str);
	if (strcmpINT < 0)
	{
		return true;
	}
	else return false;

}

bool String::operator>(const String& other)
{
	int strcmpINT = strcmp(str, other.str);
	if (strcmpINT > 0)
	{
		return true;
	}
	else return false;


}


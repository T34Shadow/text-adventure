#include "String.h"

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
	//returns a length, by looping to count how
	//many characters there is until the null pointer.
	for (int i = 0; ; i++)
	{
		if (str[i] == '\0')
		{
			return i;
		}
	}
}


char& String::CharacterAt(size_t index) //Done
// Returns a char from 'str' representing the character at the location.
// if index is greater than length, return the '\0' at the end of your string.
{
	//Returns a character at vaule index
	//and checks to make sure index is within
	//the length of the given string.
	if (index > Length())
	{
		index = Length();
	}
	
	return str[index];
}

const char& String::CharacterAt(size_t index) const //Done
{	//Returns a character at const index
	//and checks to make sure index is within
	//the length of the given string.
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
// 5.copy contents of _str into the new array (after the previous text is copid.)
	std::strcpy(newStr+Length(), _str.str);
// 6.Delete this string's array of character.
	delete[] str;
// 7.Make the str point at the new array of chraracter.
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
	// 5.copy contents of this string into the new array (Before the previous text is copid.)
	std::strcpy(newStr + _str.Length(), str);
	// 6.Delete this string's array of character.
	delete[] str;
	// 7.Make the str point at the new array of chraracter.
	str = newStr;

	return*this;
}

const char* String::CStr() const //done
{
	return str;
}

String& String::ToLower() //Done
{
	//Returns a string with all characters set to lowercase,
	//looping through and applying 'tolower' to each character.
	for (int i = 0; i < Length(); i++)
	{
		str[i] = std::tolower(str[i]);
	}
	return*this;
}

String& String::ToUpper() //Done
{	//Returns a string with all characters set to uppercase,
	//looping through and applying 'toupper' to each character.
	for (int i = 0; i < Length(); i++)
	{	
		str[i] = std::toupper(str[i]);
	}
	return*this;
}

String& String::ToWobble() //Done
{
	//EXRTA
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



size_t String::CountMatches(size_t _startIndex, const String& _find) const
{
	size_t findLength = _find.Length();
	size_t count = 0;

	//This loop goes through each occurrence of the string _find and counts them.
	for (const char* next = std::strstr(this->str + _startIndex, _find.str);
		next != nullptr;
		next = std::strstr(next, _find.str))
	{
		++count;
		next += findLength;
	}

	return count;
}

String& String::Replace(const String& _find, const String& _replace) //todo
{
	//If _find doesn't occur anywhere in the string, of if _find is empty,
	// nothing has to change.
	const char* nextOccurrence = std::strstr(this->str, _find.str);
	if (nextOccurrence == nullptr || _find.Length() == 0)
	{
		return *this;
	}

	size_t findLength = _find.Length();
	size_t replaceLength = _replace.Length();

	//Finds and counts all occurrences of _find in this string.
	size_t occurrences = 1 + this->CountMatches((nextOccurrence - this->str) + findLength, _find);
	char* newStr = new char[this->Length() + (replaceLength - findLength) * occurrences + 1];

	//Copies the beginning of this string, up to the first occurrence of _find,
	//into the new array.
	std::strncpy(newStr, this->str, (nextOccurrence - this->str));

	//Adding this null-terminator is necessary for strncat and strcat to work.
	newStr[nextOccurrence - this->str] = '\0';

	//Adds the first occurrence of _replace into the new array.
	std::strncat(newStr, _replace.str, replaceLength);

	//Loop over each subsequent occurrence of _find in this string.
	const char* prevOccurrence = nextOccurrence + findLength;
	while (
		(nextOccurrence = std::strstr(prevOccurrence, _find.str))
		!= nullptr)
	{
		//Copy all text from this string between the last occurrence of 
		// _find and the latest occurrence over to the new array.
		std::strncat(newStr, prevOccurrence, nextOccurrence - prevOccurrence);
		//Add a copy of _replace to the new array.
		std::strncat(newStr, _replace.str, replaceLength);
		prevOccurrence = nextOccurrence + findLength;
	}

	//Copy the remainder of the text from this string from the last occurence
	// of _find to the end of the string over to the new array.
	std::strcat(newStr, prevOccurrence);

	delete[] this->str;
	this->str = newStr;

	return *this;
}


String& String::ReadFromConsole() //Done
{
	//Returns a string that has been typed in from the console.
	//Creating a new string array for the given console input.
	//Feeding the console input into the new string and delete the 'str'.
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

String& String::WriteToConsole() //Done.
{
	//Print to the console.
	std::cout << str;
	return*this;
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

char& String::operator[](size_t index) //Done
{
	return str[index];
}

const char& String::operator[](size_t index) const //Done
{
	return str[index];
}

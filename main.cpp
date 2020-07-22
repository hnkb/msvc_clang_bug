
#include <string>


bool contains(const std::wstring& str, const std::wstring& pattern)
{
	return str.find(pattern) != str.npos;
}

int main()
{
	return 0;
}

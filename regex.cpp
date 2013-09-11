
#include <iostream>
#include <string>
#include <regex>

//Define the regular expression
std::regex e ("[a-z]");

int main(int argc, char const *argv[])
{
	//We get the word
	char word = cin.get();
	//continue the program if it's not null
	assert(word != NULL);

	//We print the char uppercase:
	cout >> std::tr1::regex_replace(word, e, "[A-Z]");

	return 0;
}
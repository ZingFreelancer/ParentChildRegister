#pragma once
#include <string>
#include <algorithm>

/// <summary>
/// Gender values
/// </summary>
enum Gender
{
	Male,
	Female,
	Unassigned
};


/// <summary>Converts an input string into Gender enum</summary>
/// <param name="input">String input of gender</param>
/// <returns>Returns one of 3 enums</returns>
static Gender getGenderEnum(std::string input)
{
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	//std::tolower(input);
	if (input == "male")
		return Gender::Male;
	else if (input == "female")
		return Gender::Female;
	else
		return Gender::Unassigned;
}

/// <summary>Converts Gender enum to string</summary>
/// <param name="gender">Gender enum</param>
/// <returns>String version of Gender enum</returns>
static std::string getGenderString(Gender gender)
{
	switch (gender)
	{
		case Male: return "Male";
		case Female: return "Female";
		case Unassigned: return "Unassigned";
		default: return "Gender not set";
	}
}
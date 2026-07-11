#include <iostream> 
#include <vector>
#include "clsStrings.h"
using namespace std;

int main() {

	cout << "=========================================\n";
	cout << "        1) Object-Oriented Style         \n";
	cout << "=========================================\n";

	clsStrings Str("   manar alwahedi   ");
	cout << "Original Value : \"" << Str.Value << "\"\n";

	// Trim whitespace from both sides
	Str.Trim();
	cout << "After Trim     : \"" << Str.Value << "\"\n";

	// Convert the first letter of each word to uppercase
	Str.ConvertFirstLettersToUpper();
	cout << "First Let Upper: \"" << Str.Value << "\"\n";

	// Reverse the order of words
	Str.ReverseWords();
	cout << "Reverse Words  : \"" << Str.Value << "\"\n";

	// Count the total words in the current object value
	cout << "Word Count     : " << Str.CountWords() << "\n\n";


	// --- Part 2: Using Static Methods Style (Direct Utility Calls) ---
	cout << "=========================================\n";
	cout << "          2) Static Methods Style        \n";
	cout << "=========================================\n";

	string TestText = "C++ Object Oriented Programming";
	cout << "Test Text      : " << TestText << "\n";

	// Convert the entire string to uppercase without changing the original variable
	cout << "All Upper      : " << clsStrings::ConvertAllLettersToUpper(TestText) << "\n";

	// Count capital letters only using the main function and Enum
	short CapitalCount = clsStrings::CountLetters(TestText, clsStrings::enWhatToCount::CapitalLetter);
	cout << "Capital Letters: " << CapitalCount << "\n";

	// Replace a specific word inside the string
	string NewText = clsStrings::ReplaceWord(TestText, "Programming", "Mastery");
	cout << "After Replace  : " << NewText << "\n";
	cout << "=========================================\n";

	system("pause > nul");
	return 0;

}
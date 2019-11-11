// Mad-Lib
// Creates a story based on user input
 
#include <iostream>
#include <string>
 
using namespace std;
 
string askText(const string* const prompt);
int askNumber(const string* const prompt);
void tellStory(const string* const name, const string* const noun,
			   const int* const number, const string* const bodyPart, const string* const verb);
 
int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
	
	string namePrompt = "Please enter a name: ";
	string nounPrompt = "Please enter a plural noun: ";
	string numberPrompt = "Please enter a number: ";
	string bodyPartPrompt = "Please enter a body part: ";
	string verbPrompt = "Please enter a verb: ";
	
    string name = askText(&namePrompt);
    string noun = askText(&nounPrompt);
    int number = askNumber(&numberPrompt);
    string bodyPart = askText(&bodyPartPrompt);
    string verb = askText(&verbPrompt);
     
    tellStory(&name, &noun, &number, &bodyPart, &verb);
 
    return 0;
}
 
string askText(const string* const prompt)
{
    string text;		// Note: this cannot be returned as a pointer, as it's local.
    cout << *prompt;	// I attempted creating a temporary string variable so cin could
    cin >> text;		// set it to the answer, and then the function would return a pointer
    return text;		// to that temp variable, which is immediately dereferenced, but it didn't work.
}
 
int askNumber(const string* const prompt)
{
    int num;
    cout << *prompt;
    cin >> num;
    return num;
}
 
void tellStory(const string* const name, const string* const noun,
			   const int* const number, const string* const bodyPart, const string* const verb)
{
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << *name;
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << *noun;
    cout << " when one day, the ";
    cout << *noun;
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout << *number;
    cout << " " << *noun;
    cout << ", a tear came to ";
    cout << *name << "'s ";
    cout << *bodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << *noun << "\n";
    cout << "promptly devoured ";
    cout << *name << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << *verb;
    cout << " for.";
}

/*
 * Pointers are more efficient than passing whole variables around, but they're sometimes hard to read.
 * Using pointers incorrectly may also cause unintended behaviour,
 * e.g. with null and dangling pointers that point to random garbage in memory.
 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int countWord(string word);
int main()
{
    string inputstring;
    cout << "Enter your string: " << endl;
    getline(cin, inputstring);
    cout << "The string \""<< inputstring <<"\" has "<<countWord(inputstring)<<" words"<<endl;

    cin.get();
    cin.ignore();
    return 0;
}
int countWord(string word)
{
    int words(0);
    for (int i = 0; i<word.length(); i++)
    {
       if ((!isspace(word[i]))&&(isspace(word[i+1]))||(word[i+1] == '\0'))
       {
           words++;
       }
    }
   return words;
}
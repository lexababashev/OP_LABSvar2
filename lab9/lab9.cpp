#include <iostream>
#include <string>

using namespace std;

string enterString();
string* divideWords(string, int&, int&);
int Sum(string* , int);
bool WrongSymbol(string);

int main()
{
    int index = 0;

    string Entered;
    do
    {
        Entered = enterString();
    } while (WrongSymbol(Entered));


    string* dividedWords;
    int n = count(Entered.begin(), Entered.end(), ' ') + 1;
    dividedWords = divideWords(Entered, n, index);


    int sum = Sum(dividedWords, n);


    cout << "sum = " << sum;
}

string enterString()
{
    string result;

    cout << "enter string"<<endl;
    getline(cin, result);

    return result;
}

bool WrongSymbol(string entered)
{
    bool res = false;
    for (int i = 0; i < entered.length(); i++)
        if (entered[i] != ' ' && (entered[i] < '0' || entered[i] > '9'))
        {
            res = true;
        }
    if (res)
        cout << "incorrect symbol. try againe" << endl;
    return res;
}

string* divideWords(string text, int& n, int& index)
{
    
    string* arrayOfWords = new string[n];
    string currWord = "";

    for (int i = 0; i <= text.size(); i++)
    {
        if (text[i] != ' ' && i < text.size())
            currWord += text[i];
        else
        {
            arrayOfWords[index] = currWord;
            currWord = "";
            index++;
        }
    }
    return arrayOfWords;
}

int Sum(string* words, int n)
{

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += stoi(words[i]);
    }
    return res;
}


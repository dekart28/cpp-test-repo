#include <iostream>
#include <string>

using namespace std;

// Определяет, будет ли слово палиндромом
// text может быть строкой, содержащей строчные буквы английского алфавита и пробелы
// Пустые строки и строки, состоящие только из пробелов, - это не палиндромы
string SearchSpace(const string& text) {



    string word;

    for (const char c : text) {

        if (c != ' ') {
            word.push_back(c);

        }

    }

    return word;

}
bool IsPalindrome(const string& text) {

    // нужно понять, будет ли s палиндромом
    bool poly=0;
    string query=SearchSpace(text);
    if(!query.size()||query.size()==1)
    {

            return poly;
    }
    poly=1;

        for(int i=0;i<query.size()/2;++i)
        {
            if(query[i]!=query[query.size()-i-1])
                poly=0;
        }
        return poly;


}


int main() {
    string text;
    getline(cin, text);

    if (IsPalindrome(text)) {
        cout << "palindrome"s << endl;
    } else {
        cout << "not a palindrome"s << endl;
    }
}

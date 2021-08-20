#include <iostream>
#include <stdio.h>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

        map<string, string> translate;
        map<string, string>::iterator t1;
        string english, strange, text;

        while (getline(cin, text))
        {
            if(text == "")
                break;
            size_t pos = text.find_first_of(" ");
            strange = text.substr(pos+1);
            english = text.substr(0,pos);
            translate.insert(make_pair(strange,english));
        }
        while (getline(cin, strange))
        {
            if(strange == "")
                break;
            if(translate.count(strange) == 1)
                cout << translate[strange] << endl;
            else
                cout <<"eh"<< endl;
        }
        
    return 0;
}
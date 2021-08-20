#include <iostream>
#include <string>
#include <vector>


#define true 1

using std::vector;
using std::pair;
using std::make_pair;
using std::string;
using std::cout;
using std::cin;

int main(){

    vector<string> yesName;
    vector<string> noName;
    string name, res, firstFriend;

    vector<pair<string,int>>::iterator it;

    unsigned nameLenght=1, aux;

    while (true)
    {
        aux=0;

        cin >> name;
        if(name == "FIM")
            break;
        cin >> res;
        
        
        if(res == "YES")
        {
            if( (name.length() > nameLenght) || (nameLenght == 1))
            {
                nameLenght = name.length();
                firstFriend.assign(name);
            }

            if(yesName.size() == 0)
                yesName.push_back(name);
            
            if(yesName[0] > name)
               yesName.insert(yesName.begin(), name);
            

            else
            {
                for (unsigned int i = 0; i < yesName.size(); i++)
                {
                    if(yesName[i] == name)
                    {
                        aux = 1;
                        break;
                    }
                    else if(name < yesName[i])
                    {
                        yesName.insert(yesName.begin()+i, name);
                        aux = 1;
                        break;
                    }
                }
                if(aux == 0)
                    yesName.push_back(name);
            }
        }
        else
            {
                if(noName.size() == 0)
                    noName.push_back(name);
            
                //if(noName[0] > name)
                   // noName.insert(noName.begin(), name);
                else
                {
                    for (unsigned int i = 0; i < noName.size(); i++)
                    {
                        if(noName[i] == name)
                        {
                            aux = 1;
                            break;
                        }
                        else if(name < noName[i])
                        {
                            noName.insert(noName.begin()+i, name);
                            aux = 1;
                            break;
                        }
                    }
                    if(aux == 0)
                        noName.push_back(name);
                }
            }        
    }
    for (unsigned int i = 0; i < yesName.size(); i++)
        cout<< yesName[i] << "\n"; 
    for (unsigned int i = 0; i < noName.size(); i++)
        cout << noName[i] << "\n";
    
    cout<<"\n"<< "Amigo do Habay:\n"<<firstFriend<<"\n";     

}
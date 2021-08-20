#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        int lengthTrem;
        cin >> lengthTrem;

        if(lengthTrem == 0)
            return 0;

        while (true)
        {
            
            int  numTrem[lengthTrem], count = 0;
              
            while (count<lengthTrem)
            {
                cin >> numTrem[count]; 

                if(numTrem[count] == 0)
                {
                    printf("\n");
                    break;
                }
                count++;
            }

            if(count == 0)
                break;

            int numOUT = lengthTrem, temp = 0;

            stack<int> pilha;

            while(numOUT > 0)
            {
                if(numTrem[count] == numOUT && count >= 0)
                {
                    numOUT--;
                    count--;                    
                    continue; 
                }
                else if(pilha.size() != 0 )
                {
                    if(pilha.top() == numOUT)
                    {
                        pilha.pop();
                        numOUT--;
                        continue; 
                    }
                    else if(count >= 0 )
                    {
                        pilha.push(numTrem[count]);
                        count--;
                        continue; 
                    }
                    else if(count < 0)
                    {
                        printf("No\n");
                        break;
                    }
                }
                else if(pilha.size() == 0 && count >= 0)
                {
                    pilha.push(numTrem[count]);                
                    count--;
                    continue;
                }
                printf("No\n");
                break;        
            }

            if(numOUT == 0)
                printf("Yes\n");
        }
    }
    
}
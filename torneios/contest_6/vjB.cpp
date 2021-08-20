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
            
            int  numTrem[lengthTrem], count = 0,numOUT = 1, temp = 0;
            stack<int> pilha;

            for (int i = 0; i < lengthTrem; i++)
                cin >> numTrem[i];


            while(numOUT < lengthTrem)
            {
                if(numTrem[count] == numOUT && count >= 0)
                {
                    numOUT++;
                    count++;            
                    continue; 
                }
                else if(pilha.size() != 0 ) {
                    if(pilha.top() == numOUT) {
                        pilha.pop();
                        numOUT++;
                        continue; 
                    }
                    else if(count < lengthTrem ) {
                        pilha.push(numTrem[count]);
                        count++;
                        continue; 
                    }
                    else if(count >= lengthTrem) {
                            printf("no\n");
                            break;
                    }
                }
                else if(pilha.size() == 0 && count >= 0) {
                    pilha.push(numTrem[count]);          
                    count++;
                    continue;
                }
                printf("no\n");
                break;        
            }

            if(numOUT == lengthTrem)
                printf("yes\n");
        }
    
    
}
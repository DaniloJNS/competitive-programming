#include <stdio.h>
#include <stdlib.h>



typedef struct presentes{

	unsigned _id;
	unsigned _volume;

}presentes;

presentes presente[100100];

int compara(presentes *a, presentes *b)
{

	if (a->_volume == b->_volume)
	{

		if (a->_id > b->_id)
			return 1;
		else
			return -1;

	}
	else if (a->_volume > b->_volume)
		return -1;
	else
		return 1;

}

int compara2(presentes *a, presentes  *b)
{

	if (*a->_id > *b->_id)
		return 1;
	else
		return -1;

}
int main(){
    int cases;

    scanf("%d", &cases);

    while (cases--)
    {
        int numNoel, numKid;
        int height, width, length;

        scanf("%d %d", &numNoel, &numKid);

        for (int i = 0; i < numNoel; i++)
        {
            scanf("%d %d %d %d", &presente[i]._id, &height, &width, &length);
            presente[i]._size = height * width * length;
        }

        qsort(presente, numNoel, sizeof(presentes), compara);

        //presente.erase(presente.begin()+numKid, presente.end());

        qsort(presente, numKid, sizeof(presentes), compara2);   

        for (int i = 0; i < numKid; i++)
        {
            if(i != 0 && i != numKid)
                printf(" ");;
            printf("%d", presente[i]._id);

        }
        printf("\n");

    }
    
}
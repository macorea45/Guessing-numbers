#include <stdio.h>
#include <stdlib.h>  
#include <time.h>   

#define max_stage  10

int main(void)
{
    int i;
    int no;
    int ans;
    int stage;
    int num[max_stage];

    int c;



    srand((unsigned int)time(NULL));

    while (1) {
        ans = rand() % 91 + 10;
        
            
        printf("10�`99�̐����𓖂ĂĂ�������.\n\n");

        stage = 0;
        do


        {
            printf("�c��%d��B�������ȁH:", max_stage - stage);
            scanf_s("%d", &no);
            num[stage++] = no;

            if (no > ans)
                printf("\a�����Ə�������B\n");
            else if (no < ans)
                printf("\a�����Ƒ傫����B\n");

        } while (no != ans && stage < max_stage);



        if (no != ans)
            printf("\a�c�O�B������%d�ł����B\n", ans);
        else {
            printf("�����ł��B\n");
            printf("%d��œ�����܂����ˁB\n", stage);
        }

        puts("\n---���͊m�F---");
        for (i = 0; i < stage; i++)
            printf("\n %2d:%d", i + 1, num[i]);

        printf("\n�����ăQ�[�����I�����܂����H");
        printf("\n0=�I�� 0�ȊO=�L�����Z��");
        scanf_s("%d", &c);



        if (c == 0)
        {
            break;
        }
    }
    printf("\n�I�����܂����B\n\n");





    return 0;
}


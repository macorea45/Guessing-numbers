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
        
            
        printf("10～99の整数を当ててください.\n\n");

        stage = 0;
        do


        {
            printf("残り%d回。いくつかな？:", max_stage - stage);
            scanf_s("%d", &no);
            num[stage++] = no;

            if (no > ans)
                printf("\aもっと小さいよ。\n");
            else if (no < ans)
                printf("\aもっと大きいよ。\n");

        } while (no != ans && stage < max_stage);



        if (no != ans)
            printf("\a残念。正解は%dでした。\n", ans);
        else {
            printf("正解です。\n");
            printf("%d回で当たりましたね。\n", stage);
        }

        puts("\n---入力確認---");
        for (i = 0; i < stage; i++)
            printf("\n %2d:%d", i + 1, num[i]);

        printf("\n数あてゲームを終了しますか？");
        printf("\n0=終了 0以外=キャンセル");
        scanf_s("%d", &c);



        if (c == 0)
        {
            break;
        }
    }
    printf("\n終了しました。\n\n");





    return 0;
}


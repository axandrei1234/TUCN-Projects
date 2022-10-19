#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char alegere[20];
    srand(time(NULL));
    int mcard1 = rand() % 11+1; // cartea mea
    int card1 = rand() % 11+1; // cartea robotului
    int mcard2 = rand() % 11+1;  // cartea mea
    int card2 = rand() % 11+1; // cartea robotului
    int card3 = rand() % 11+1; //botul mai trage o carte
    int card4 = rand() % 11+1; // cartea botului
    int card5= rand() % 11+1; // cartea botului
    int mcard3 = rand() % 11+1; // cartea mea
    
    
    printf ("carte bot: %d   ?\n\n\n" , card1);
    printf ("cartile mele: %d   %d (%d)\n" , mcard1, mcard2, mcard1+mcard2);
    if (mcard1+mcard2 == 21 && card1+card2 == 21) {
        printf ("carte bot: %d\n", card2);
        printf ("EGALITATE!\n");
        return 0;
    } else
        if (mcard1+mcard2 == 21 && card1+card2 < 21) { // 21 <21 (2carti)
             // botul mai trage o carte
            if (card1+card2+card3 == 21) { // 21  21 (3carti)
                printf ("carti bot: %d %d %d (%d)\n",card1, card2, card3, card1+card2+card3);
                printf ("EGALITATE!\n");
                return 1;
            }
            else
                if(mcard1+mcard2 == 21 && card1+card2+card3 > 21) { // 21  >21 (3carti)
                    printf ("carti bot: %d %d %d (%d)\n",card1, card2, card3, card1+card2+card3);
                    printf ("Guest Wins!\n");
                    return 2;
                }
                
            else
                if (mcard1+mcard2 == 21 && card1+card2+card3 < 21) { // 21    <21 (3carti)
                    
                    printf ("carti bot: %d %d %d %d (%d)\n",card1, card2, card3, card4, card1+card2+card3+card4);
                    //botul mai trage o carte
                }
                    if (mcard1+mcard2 == 21 && card1+card2+card3+card4 == 21) { // 21 21 (4carti)
                        printf ("carti bot: %d %d %d %d (%d)\n",card1, card2, card3,card4, card1+card2+card3+card4);
                        printf ("EGALITATE!\n");
                        return 3;
                    }
                    else
                        if (mcard1+mcard2 == 21 && card1+card2+card3+card4 > 21) { // 21 >21 (4carti)
                            printf ("carti bot: %d %d %d %d (%d)\n",card1, card2, card3, card4, card1+card2+card3+card4);
                            printf ("Guest Wins!\n");
                            return 4;
                        }
                    
                else
                        if (mcard1+mcard2 == 21 && card1+card2+card3+card4 < 21) {
                            printf ("carti bot: %d %d %d %d %d (%d)\n",card1, card2, card3, card4, card5, card1+card2+card3+card4+card5);
                             //botul mai trage o carte
                            if (mcard1+mcard2 == 21 && card1+card2+card3+card4+card5 == 21) {
                                printf ("carti bot: %d %d %d %d %d (%d)\n",card1, card2, card3, card4, card5, card1+card2+card3+card4+card5);
                                printf ("EGALITATE!\n");
                                return 5;
                        }
                            else
                                if (mcard1+mcard2 == 21 && card1+card2+card3+card4+card5 > 21) {
                                    printf ("carti bot: %d %d %d %d %d (%d)\n",card1, card2, card3, card4, card5, card1+card2+card3+card4+card5);
                                    printf ("Guest Wins\n");
                                    return 6;
                }
                            else
                                return 7;
                        }
        } // CAZ GUEST ARE 21 DIN PRIMELE 2 CARTI
    if (mcard1+mcard2 < 21) {
        printf ("HIT     STAND\n");
        scanf ("%s" , alegere);
        if (strcmp(alegere , "STAND") == 0) {
            printf ("carti bot: %d %d (%d)\n", card1, card2, card1+card2);
            if (mcard1+mcard2 < 21 && card1+card2 > mcard1+mcard2) {
                printf ("Dealer Wins!\n");
                return 21;
            }
            if (mcard1+mcard2 < 21 && card1+card2 < mcard1+mcard2 && (card1+card2 > 18 && card1+card2 < 21)) {
                printf ("Guest Wins!\n"); // <21  [18,21] (2carti)         
                return 8;
            }
            else
                if (mcard1+mcard2 < 21 && card1+card2 < mcard1+mcard2 && card1+card2 < 18) {
                    // botul mai trage o carte (3)
                    printf ("carti bot: %d %d %d (%d)\n",card1, card2, card3, card1+card2+card3);
                    if (card1+card2+card3 > 21) {
                        printf ("Guest Wins!\n"); // guest < bot
                        return 9;
                    }
                    else
                        if (card1+card2+card3 > mcard1+mcard2) {
                            printf ("Dealer Wins!\n");
                            return 10;
                        }
                    else
                        if (mcard1+mcard2 > card1+card2+card3 && (card1+card2+card3 > 18 && card1+card2+card3 < 21)) { // guest > dealer && dealer [18,21]
                            printf ("Guest Wins!\n");
                            return 11;
                        }
                            
                    else
                        if (mcard1+mcard2 == card1+card2+card3 && (card1+card2+card3 > 18 && card1+card2+card3 < 21)) {
                            printf ("EGALITATE!\n"); // guest == bot && bot [18,21]
                            return 12;
                        }
                        else
                            if (mcard1+mcard2 == card1+card2+card3 && (card1+card2+card3 < 18)) { // guest == bot  && bot < 18
                            //botul mai trage o carte (4)
                            printf ("carti bot: %d %d %d %d (%d)\n",card1, card2, card3,card4, card1+card2+card3+card4);
                            if (card1+card2+card3+card4 > 21) { // guest < bot
                                printf ("Guest Wins!\n");
                                return 13;
                            }
                            else
                                if (mcard1+mcard2 < card1+card2+card3+card4) {
                                    printf ("Dealer Wins!\n");
                                    return 14;
                                }
                            else
                                if (mcard1+mcard2 == card1+card2+card3+card4 && (card1+card2+card3+card4 > 18 && card1+card2+card3+card4 < 21)) {
                                    printf ("EGALITATE!\n");
                                    return 15;
                                }
                                else
                                    if (mcard1+mcard2 > card1+card2+card3 && card1+card2+card3 < 18) {
                                        //botul mai trage o carte
                                        printf ("carti bot: %d %d %d %d (%d)\n",card1, card2, card3, card4, card1+card2+card3+card4);
                                        if (mcard1+mcard2 > card1+card2+card3+card4 && (card1+card2+card3+card4 > 18 && card1+card2+card3+card4 < 21)) {
                                            printf ("Guest Wins!\n");
                                            return 16;
                                        }
                                        else
                                        
                                    if (mcard1+mcard2 == card1+card2+card3+card4 && card1+card2+card3+card4 < 18) {
                                    //botul mai trage o carte
                                    printf ("carti bot: %d %d %d %d %d (%d)\n",card1, card2, card3, card4, card5, card1+card2+card3+card4+card5);
                                    if (card1+card2+card3+card4+card5 > 21) {
                                        printf ("Guest Wins!\n");
                                        return 17;
                                    }
                                    else
                                        if (mcard1+mcard2 < card1+card2+card3+card4+card5) { // bot > 21 (5carti)
                                            printf ("Dealer Wins!\n");
                                            return 18;
                                        }
                                        else
                                            if (mcard1+mcard2 == card1+card2+card3+card4+card5) { // guest == bot (5)
                                                printf ("Egalitate!\n");
                                                return 19;
                                            }
                                        else
                                            if (mcard1+mcard2 > card1+card2+card3+card4) {
                                                printf ("carti bot: %d %d %d %d %d (%d)\n",card1, card2, card3, card4, card5, card1+card2+card3+card4+card5);
                                                if(mcard1+mcard2 > card1+card2+card3+card4+card5) {
                                                    printf ("Guest Wins!");
                                                    return 20;
                                                }
                                            }
                                                
                                    
                                }
                        }
                }
            
            
        }
    }
}
}

              
              



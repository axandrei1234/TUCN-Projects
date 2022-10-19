//
//  main.cpp
//  problemaTeo
//
//  Created by Axente Andrei on 09.09.2022.
//

#include <stdlib.h>
#include <stdio.h>

//fluct stands for fluctuation of price. //
int main() {
    
    int numStocks {};
    double initStockPrice {};
    double fluctFirst {};
    double fluctSecond {};
    double balanceInit {};
    double balanceFirstYear {};
    double balanceSecondYear {};
    double result {};
    
    scanf("%d %lf %lf %lf", &numStocks, &initStockPrice, &fluctFirst, &fluctSecond);
    balanceInit = abs(numStocks) * abs(initStockPrice);
    balanceFirstYear = balanceInit + ((fluctFirst * balanceInit) / 100.0);
    
    if (balanceFirstYear < 0)
        balanceFirstYear = 0;
    
    balanceSecondYear = balanceFirstYear + ((fluctSecond * balanceFirstYear) / 100.0);
    
    if (balanceSecondYear < 0)
        balanceSecondYear = 0;
    
    result = balanceSecondYear - balanceInit;
    
    if (balanceSecondYear == balanceInit)
        printf("Tie\n");
    if (result > 0)
            printf("Profit %lf\n" , result);
    if (result < 0)
        printf("Loss %lf\n", result);
}

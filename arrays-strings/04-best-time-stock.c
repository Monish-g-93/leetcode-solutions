#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfitValue) {
            maxProfitValue = profit;
        }
    }

    return maxProfitValue;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    printf("Maximum Profit: %d\n", maxProfit(prices, n));

    return 0;
}
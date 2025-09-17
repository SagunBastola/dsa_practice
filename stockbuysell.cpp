int maxProfit(int* prices, int pricesSize) {
    int bestbuy=prices[0];
    int maxprofit=0;
    for(int i=0;i<pricesSize;i++)
    {
        if(bestbuy<prices[i])
        {
            if(maxprofit<(prices[i]-bestbuy))
            {
                maxprofit=prices[i]-bestbuy;
            }
        }
        if(prices[i]<bestbuy)
        {
            bestbuy=prices[i];
        }
    }
    return maxprofit;
}
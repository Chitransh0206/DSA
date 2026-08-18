class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];  // best day to buy
            }
            else{
                int profit = prices[i] - minPrice;
                if(profit > maxProfit){
                    maxProfit = profit;
                }
            }
        }

    return maxProfit;
    


    // int minPrice=INT_MAX;
    // int maxProfit=0;
    // for(int i=0;i<prices.size();i++){
    //     if(prices[i]<minPrice){
    //         minPrice=prices[i];
    //     }
    //     else{
    //         int profit=prices[i]-minPrice;
    //         if(profit>maxProfit){
    //             maxProfit=profit;
    //         }
    //     }
    // }
    // return maxProfit;
    }


    // int maxi=0;
    // for(int i=0;i<prices.size();i++){
    //     for(int j=i+1;j<prices.size();j++){
    //         int profit=prices[j]-prices[i];
    //         maxi=max(maxi,profit);
    //     }
    // }
    // return maxi;
    // }


    //     int mini = prices[0];

    //     int profit = 0;

    //     for(int i=0; i<prices.size(); i++){

    //         mini = min(mini, prices[i]);

    //         profit = max(profit,
    //                      prices[i] - mini);
    //     }

    //     return profit;
    // }
};
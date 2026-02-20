class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            {
                price += (prices[i] - prices[i-1]);
            }
        }

        return price;
    }
};

-------------------------------------------------------------
Whenever price increases from previous day → take that profit.

If:
price[i] > price[i-1]

Then add:
price[i] - price[i-1]


Why?
Because:
Instead of waiting for big peak,
we collect every small profit
This automatically gives maximum profit.

🧠 Why This Works?
Example:
100 → 180 → 260 → 310


Profit =
(180-100) + (260-180) + (310-260)
= 80 + 80 + 50
= 210


Same as
310 - 100 = 210


So we can sum all positive differences.
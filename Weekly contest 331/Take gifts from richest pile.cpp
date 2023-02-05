class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for(int i=0;i<k;i++){
            int maxi= max_element(gifts.begin(),gifts.end())-gifts.begin();
            gifts[maxi]=sqrt(gifts[maxi]);
        }
         long long sum=0;
        for(int i=0;i<gifts.size();i++){
            sum = sum+gifts[i];
        }
        return sum;
    }
};

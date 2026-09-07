#include <iostream>
#include <string>
using namespace std;

int maximumCandies(vector<int>& candies, long long k) {
        int low = 1;
        int high = *max_element(candies.begin(),candies.end());
        int ans = 0;


        while(low <= high){
            int mid = low + (high - low)/2;
            long long childrent_count = 0;
            for(int num : candies){
                childrent_count += num/mid;
            }
            if(childrent_count < k){
                high = mid - 1;
            }else{
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }

int main() {
    
    return 0;
}
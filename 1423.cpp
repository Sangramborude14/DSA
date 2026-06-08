#include <iostream>
#include <string>
using namespace std;

int maxScore(vector<int>& cardPoints, int k){
    int n = cardPoints.size();
    int totalSum = 0;

    for(int pt: cardPoints){
        totalSum += pt;
    }

    if(k == n) return totalSum;


    int windowsize = n - k;
    int currentWindowSum = 0;

    for(int i = 0 ; i < windowSize ; i++){
        currentWindowSum += cardPoints[i];
    }

    int minWindowSum = currentWindowSum;

    for(int i= windowSize; i < n; i++){
        currentWindowSum += cardPoints[i] - cardPoints[i-windowsize];

        if(currentWindowSum < minWindowSum){
            minWindowSum = currentWindowSum;
        }
        return totalSum - minWindowSum;
    }
}

int main() {
    
    return 0;
}
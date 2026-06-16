#include <iostream>
#include <string>
using namespace std;

int maxArea(vector<int>& height){
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;
    
    while(left < right){
        int current_area = min(height[left],height[right])*(right - left);
        if(current_area >  max_area) max_area = current_area;
        
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return max_area;
}

int main() {
    
    return 0;
}
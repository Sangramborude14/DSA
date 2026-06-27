#include <iostream>
#include <string>
using namespace std;


void DFS(vector<vector<int>>& image, int sr, int sc,int source,int color){
    int rows = image.size();
    int cols = image[0].size();

    if(sr < 0 || sr >= rows || sc < 0 || sc >= cols) return;
    if(image[sr][sc] != source) return;
    image[sr][sc] = color;

    DFS(image,sr-1,sc,source,color);
    DFS(image,sr+1,sc,source,color);
    DFS(image,sr,sc-1,source,color);
    DFS(image,sr,sc+1,source,color);
}

vector<vector<int>> floodFill(vector<vector<int>>& image,int sr,int sc, int color){
    int source = image[sr][sc];

    if(image[sr][sc] == color) return image;

    DFS(image,sr,sc,source,color);

    return image;
}

int main() {
    
    return 0;
}
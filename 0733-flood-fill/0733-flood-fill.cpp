class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int color,int ncolor){
          int n=image.size();
          int m=image[0].size();
          if(r<0 ||c<0|| r>=n||c>=m || image[r][c]!=ncolor){
            return;
          }
          image[r][c]=color;
          int dr[]={1,-1,0,0};
          int dc[]={0,0,1,-1};

          for(int i=0;i<4;i++){
            int nr=dr[i]+r;
            int nc=dc[i]+c;

            dfs(image,nr,nc,color,ncolor);
          }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ncolor=image[sr][sc];
        if(ncolor==color){
            return image;
        }
        dfs(image,sr,sc,color,ncolor);
        return image;
    }
};
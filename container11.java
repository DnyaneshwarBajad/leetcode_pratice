import java.util.*;

public class container11 {

    public int maxarea(int [] height){
          int mArea = 0;
        int l = 0;
        int r = height.length - 1;

        while(l<r){
            mArea=Math.max(mArea, (r-l)*Math.min(height[l], height[r]));
             if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return mArea;
    }

    public static void main(String[] args) {
        int [] height= {1, 8, 6, 2, 5, 4, 8, 3, 7};
        container11 obj=new container11();
        System.out.println(obj.maxarea(height));
    }
}
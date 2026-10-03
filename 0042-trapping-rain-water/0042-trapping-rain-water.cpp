class Solution {
public:
    int trap(vector<int>& height) { 
        // for wach point in x axis find the laregest element at the left and largest element at right. 
        //  

        int n = height.size(); 
        vector<int> lefthigh = {0};  
         vector<int> righthigh ; 
        int maxleft = height[0];
        int maxright = height[n-1];
        for(int i=1; i<n;i++) { 
            if (maxleft < height[i-1]) { 
                maxleft = height[i-1];
            }
            lefthigh.push_back(maxleft);

        }

        for(int i=n-2; i>=0;i--) { 
            if (maxright < height[i+1]) { 
                maxright = height[i+1];
            }
            righthigh.push_back(maxright); 


        } 
        righthigh.push_back(0);  


        reverse(righthigh.begin(), righthigh.end());


        int totalsum = 0; 
        int sum = 0;

        for(int i=0; i<n;i++) { 
            sum = min(lefthigh[i],righthigh[i])-height[i];  
            if(sum>0) { 
                totalsum = totalsum + sum; 
            }

        }


    return totalsum;
         
    }
};
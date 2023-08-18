class Solution {
public:
    int maxArea(vector<int>& height) {
        
        vector <int> maxi;
        // maxi.push_back(height[height.size() -1]);

        vector <int> indices;
        // indices.push_back(height.size() -1);

        int water = 0;

        for(int i = height.size() -2; i>= 0 ; i--){
            if(height[i + 1] >=  height[i]){
                maxi.push_back(height[i+1]);
                indices.push_back(i+1);
            }

            for(int j = 0; j< maxi.size(); j++){
                int temp = (min(maxi[j], height[i]) * (indices[j] - i));
                if(temp > water){
                    water = temp;
                }
            }
        }

        return water;
    }
};

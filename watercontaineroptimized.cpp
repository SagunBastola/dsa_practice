int maxArea(int* height, int heightSize) {
    int ans=0;
    int start=0;
    int end=heightSize-1;
    while(start<end)
    {
     int width=end-start;
     int height1;
     if(height[start]<height[end])
     {
        
        height1=height[start];
        start++;
     }   
     else
     {
        height1=height[end];
        end--;
     }
     int water_stored=width*height1;
     if(water_stored>ans)
     {
        ans=water_stored;
     }
    }
    return ans;
}
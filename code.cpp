class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
        int height=-1;
        int count=0;
        for(int i=0;i<N;i++)
        {
            if(count>=N)
            {
                break;
            }
            height++;
            count=count+pow(2,i);
        }
        return height;
    }
};

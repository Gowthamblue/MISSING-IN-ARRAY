// User function template for C++ IN GEEKS FOR GEEKS
// By Using Not Gate
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        long long int m1=0;
        long long int m2=0;
        for(int i=0;i<arr.size();i++)
        {
            m1=m1^arr[i];
        }
        for(int i=0;i<=arr.size()+1;i++)
        {
            m2=m2^i;
        }
        return m1^m2;
    }
};

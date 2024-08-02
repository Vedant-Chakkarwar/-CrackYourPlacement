{ Driver Code Starts
#include bitsstdc++.h
using namespace std;


 } Driver Code Ends
class Solution {
  public
     Function to find floor of x
     n size of vector
     x element whose floor is to find
    int findFloor(vectorlong long &v, long long n, long long x) {

        int low = 0, high = n - 1;
        int res = -1;

        while (low = high) {
            int mid = low + (high - low)  2;

            if (v[mid] == x)
                return mid;
    
            if (v[mid]  x) {
                res = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }

        return res;
    }
};


{ Driver Code Starts.

int main() {

    long long t;
    cin  t;

    while (t--) {
        long long n;
        cin  n;
        long long x;
        cin  x;

        vectorlong long v;

        for (long long i = 0; i  n; i++) {
            long long temp;
            cin  temp;
            v.push_back(temp);
        }
        Solution obj;
        cout  obj.findFloor(v, n, x)  endl;
    }

    return 0;
}
 } Driver Code Ends
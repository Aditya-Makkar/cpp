#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        // cout<<high<<" "<<sizeof(nums)<<" "<<sizeof(nums[0]);
        

        while (low<high){
            int mid=(low+high)/2;
            // cout<<mid<<"  ";
            if (nums[mid]==target){
                // cout<<"loop1"<<endl;
                return(mid);
            }
            else if (nums[mid]<target){
                // cout<<"loop2"<<endl;
                low=mid+1;
            }
            else {
                // cout<<"loop3"<<endl;
                high=mid-1;
            }
            // cout<<low<<" "<<high<<endl;
        }
        return -1;
    }

int main() {
    vector <int> a={-1,0,3,5,9,12};
	cout<<search(a,12);

}

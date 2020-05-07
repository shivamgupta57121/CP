#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
}

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int k;
	cin>>k;
	rotate(v,k);
	for(int i=0;i<n;i++) cout<<v[i];
	return 0;
}
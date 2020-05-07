#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int count=0;
        for(int i=0;count<n;i++){
            int cur=i;
            int prev = nums[i];
            do{
                int pos = (cur-k);
                if(pos<0) pos+=n;
                nums[cur]=nums[pos];
                count++;
                cur=pos; 
            }while(i!=cur);
            nums[cur+k]=prev;
        }
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
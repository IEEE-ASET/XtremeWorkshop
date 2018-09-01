
#define ll long long        // ll == long long
#define ld long double      // ld == long double
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void func(ll arr[], ll num){
    ld val=0;
    sort(arr,arr+num);
    for(int i=0; i<num; i++){
        
        val += (ld)log((ld)arr[i]);     // multiplying in terms of logarithm
    
    }
    ll left=arr[0], right = arr[num-1]+1,mid,ans;
    ld temp;
    
    while(left<=right){
        mid=(left + right)/2;
        
        temp= (ld) ((ld)num*log((ld)mid));
        if(temp>val){
            ans = mid;
            right = mid-1;
        } else{
            left = mid+1;
        }
    }
    cout<<ans;
}

int main() {
	ll num, arr[10000000],n;
	cin >> num;	
	
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    func(arr,num);
    
}

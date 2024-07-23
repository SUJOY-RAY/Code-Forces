#include<iostream>
#include <algorithm>

using namespace std;
int minSwaps(int n, vector<int>& heights){
	
	
    int maxHeight = *max_element(heights.begin(), heights.end());
    int minHeight = *min_element(heights.begin(), heights.end());
	
    int maxIndex = find(heights.begin(), heights.end(), maxHeight) - heights.begin();
    int minIndex =(n-1)-(find(heights.rbegin(), heights.rend(), minHeight) - heights.rbegin());
    
    int swapsToStart=maxIndex;
    int swapsToEnd=(n-1)-minIndex;
    
    if(maxIndex>minIndex){
    	return swapsToStart+swapsToEnd-1;
    }else{
    	return swapsToStart+swapsToEnd;
    }
}


int main(){
	int n;
	cin>>n;
	vector<int> heights(n);
	for(int i=0;i<n;i++){
		cin>>heights[i];
	}
	
	cout<<minSwaps(n,heights)<<endl;
	return 0;
	
	
	return 0;
}

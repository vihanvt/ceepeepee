#include <bits/stdc++.h>
using namespace std;    
void Bubble(vector<int> &vec){
    int n=vec.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(vec[j+1]<vec[j]){
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
                
            }
        }
    }
}
void printing(const vector<int> vec){
    int n=vec.size();
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> vec={64,25,9,100,45,43};
    cout<<"original array"<<endl;
    printing(vec);
    cout<<"updated array"<<endl;
    Bubble(vec);
    printing(vec);
    return 0;
}


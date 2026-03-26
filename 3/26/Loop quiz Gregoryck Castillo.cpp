#include<iostream>
using namespace std;
int main(){
    for(int i=10;i<=100;i++){
        int tens= i/10;
        int ones= i%10;
        int sum=tens + ones;
        if(sum==9||sum==13){
            cout<<i<<" ";

        }
        return 0; 
       }
}

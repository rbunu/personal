#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int x;

    cout<<"enter a two-digit number:";
    int msd=x/10;
    int lsd=x%10;
    if (lsd !=0 &&x%lsd==0){
        cout<<msd<<"is even"<<endl;
    }
    int root=sqrt(x);
    if(root*root==x){
        cout<<x<<"is a perfect square"<<endl;

    }
return 0;    
}
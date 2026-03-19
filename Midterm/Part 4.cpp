#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    char itemType;
    int quantity;
    double price;
    double taxRate=0.0;
    cout<<"Is the item food(enter 'F'), clothing(Enter 'C')or other(Enter 'O')>";
    cin>>itemType;

    cout<<"Enter the quantity of th eitem purchased>";
    cin>>price;

    if(itemType=='F'||itemType=='c'){
    taxRate=0.08875;//8.875%
    }else{
    
    cout<<"Invalid item type entered."<<endl;
    return 1;
}
    
double cost=quantity*price;
double tax=cost*taxRate;
double totalCost=cost+tax;

cout<<fixed<<setprecision(2);
cout<<"\nThe Cost is"<<cost
<<";The tax is "<<tax
<<";The total Cost is"<<totalCost<<endl;

return 0;


}
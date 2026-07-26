#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

cout<<"enter the number of digits"<<endl;

int a;
cin>>a;

vector<int> arr(a);

for(int x=0; x<a; x++){
cout << "Enter number " <<(x+1)<<":";
cin >> arr[x];
}

vector<int> container(a);

for(int y=0; y<a; y++){
int n=arr.at(y);
int input= pow(n,a);
container.at(y)=input;
}

int sum=0;

for(int z: container){
sum += z;
}

string sum1= to_string(sum);

vector<string> holder(a);

for(int n=0; n<a; n++){
holder[n]=to_string(arr.at(n));
}

sort(holder.begin(), holder.end());

do{
string sum2;

for(string m:holder){
sum2 += m;
}

if(sum1==sum2){
cout<<"They are armstrong numbers";
break;
}

}

while(next_permutation(holder.begin(),holder.end()));

cout<<"They are not armstrong numbers";

return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool solve(int p1,int p2,int v1,int v2){
   if(p1>p2&&v1>=v2)
      return false;
   if(p2>p1&&v2>=v1)
      return false;

   return (abs(p1 - p2) % abs(v1 - v2) == 0);
}
int main(){
   int p1, p2, v1, v2;
   cin >> p1 >> p2 >> v1 >> v2;
   if(solve(p1,p2,v1,v2)){
      cout << "Meet"
           << "\n";
   }
   else{
      cout << "No Meet"
           << "\n";
   }
}
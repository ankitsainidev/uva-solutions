#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
typedef vector<int> v;
typedef pair<int, bool> pib;
int main(){
    int ar[10000],start=0;
    while(scanf("%d",&ar[start])==1){
        if (start%2==0){
        nth_element(ar,ar+start/2,ar+start+1);
        printf("%d\n",ar[start/2]);}
        else{
            nth_element(ar,ar+start/2,ar+start+1);
            int a=ar[start/2];
            nth_element(ar,ar+start/2+1,ar+start+1);
            printf("%d\n",(a+ar[start/2+1])/2);
        }
        // for(int i=0;i<=start;i++){
        //     cout<<ar[i]<<" ";
        // }
        // cout<<endl;
        start+=1;
    }
}
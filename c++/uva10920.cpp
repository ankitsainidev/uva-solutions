#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
typedef vector<int> v;
typedef pair<int, bool> pib;
typedef vector<pib> vpib;
int main(){
    int size,p;
    scanf("%d %d",&size,&p);
    while(size!=0||p!=0){
        int l=0,a=0,temp=1;
        int indx=(size/2)+1,indy=(size/2)+1;
        // cout<<indx<<indy<<endl;
        
        // cout<<indy<<endl;
        // cout<<size<<p<<endl<<"ab"<<endl;
        int curr=1;
        while(curr<p){
            
            curr+=temp;
            
            if(l==0){
                indx=indx+temp;
            }else if(l==1){
                indy=indy-temp;
            }else if(l==2){
                indx= indx-temp;
            }else{
                indy=indy+temp;
            }
            if(a!=0){
                temp+=1;
                a=0;
            }else{
                a=1;
            }
            l+=1;
            l=l%4;
            // printf("curr:%d p:%d indx:%d indy:%d\n",curr,p,indx,indy);
        }
        // cout<<indx<<"indx"<<indy<<"indy"<<endl;
        // cout<<curr<<"  p:"<<p<<endl;
        // printf("curr:%d p:%d indx:%d indy:%d\n",curr,p,indx,indy);
        temp = p-curr;
        if(l==0){
            l=3;
        }else{
        l--;}
        // cout<<l<<temp;
        //  cout<<temp<<endl;
        if(l==0){
                indx+=temp;
            }else if(l==1){
                indy-=temp;
            }else if(l==2){
                indx-=temp;
            }else{
                indy+=temp;
            }


        printf("Line = %d, column = %d.\n",indx,indy);
        scanf("%d %d",&size,&p);
    }
}
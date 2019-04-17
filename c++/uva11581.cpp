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
    int cases;
    scanf("%d",&cases);
    for(int cas=0;cas<cases;cas++){
        int g[5][5]={},temp,past[5][5]={},topr=-1,tempmat[5][5];
        bool check=true;
        for(int i = 1;i<4;i++){
            
                scanf("%d",&temp);
                
                g[i][1]=temp/100;
                g[i][2]=(temp/10)%10;
                g[i][3]=temp%10;
        }
        while(true){
            check=true;
            for(int i=1;i<4;i++){
                for(int j=1;j<4;j++){
                    if(g[i][j]!=past[i][j]){
                        check = false;
                    }
                }
            }
            if(check){

                break;
            }
            for(int i=1;i<4;i++){
                for(int j=1;j<4;j++){
                    tempmat[i][j]=(g[i-1][j]+g[i+1][j]+g[i][j-1]+g[i][j+1])%2;
                }
            }
            for(int i=1;i<4;i++){
                for(int j=1;j<4;j++){
                    past[i][j]=g[i][j];
                }
            }
            for(int i=1;i<4;i++){
                for(int j=1;j<4;j++){
                    g[i][j]=tempmat[i][j];
                }
            }
            // for(int i=0;i<5;i++){
            //     for(int j=0;j<5;j++){
            //         cout<<g[i][j];
            //     }
            // cout<<endl;
            // }
            // cout<<endl;
            // for(int i=0;i<5;i++){
            //     for(int j=0;j<5;j++){
            //         cout<<past[i][j];
            //     }
            // cout<<endl;
            // }
            // cout<<endl;
            topr+=1;
        }

        if(topr!=-1){
            topr-=1;
        }
        printf("%d\n",topr);
        }
    }

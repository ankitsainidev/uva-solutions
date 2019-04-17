#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
typedef vector<int> v;
typedef pair<int, bool> pib;
int main(){
    char code[50];
    scanf(" %s",code);
    while(code[0]!='#'){
        int ln= strlen(code);
        int t = next_permutation(code,code+ln);
        if(t==1){
            printf("%s\n",code);
        }else{
            printf("No Successor\n");
        }
        scanf(" %s",code);
    }
}
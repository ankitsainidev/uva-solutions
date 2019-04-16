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
int main()
{
    v l;
    int s, b;
    int x, y;

    int temp, n, m;
    bool notfoundn, notfoundm;
    scanf("%d %d", &s, &b);
    while (s != 0 || b != 0)
    {
        pair<int, int> l[s];            // for index i will be store which indexes are buddies -1 for no buddy.
        l[0] = make_pair(-1, 1);
        l[s - 1] = make_pair(s - 2, -1);
        for (int i = 1; i < s - 1; i++)
        {
            l[i] = make_pair(i - 1, i + 1);
        }
        // bool l[s];
        // // for(auto ui:l){
        // //     cout<<ui.first<<" "<<ui.second<<"a"<<endl;
        // // }
        // for(int i = 0; i<s;i++){
        //     l[i]=true;
        // }
        // for (auto kj : l)
        // {
        //     cout << kj.first << "a" << kj.second << endl;
        // }
        while (b != 0)
        {

            //     notfoundn = false;
            //     notfoundm = false;
            scanf("%d %d", &x, &y);
            int topi1, topi2;
            if (y != s && x != 1)
            {
                // cout<<1<<endl;
                l[l[x - 1].first].second = l[y - 1].second;
                l[l[y - 1].second].first = l[x - 1].first;
                topi2 = l[y - 1].second;
                topi1 = l[x - 1].first;
            }
            else if (x == 1 && y == s)
            {
                // cout<<2<<endl;
                topi1 = -1;
                topi2 = -1;
            }
            else if (y == s)
            {
                // cout<<3<<endl;
                l[l[x - 1].first].second = l[y - 1].second;
                topi2 = -1;
                topi1 = l[x - 1].first;
            }
            else
            {
                // cout<<y-1<<" "<<l[y-1].first<<" "<<l[y-1].second<<endl;
                
                l[l[y - 1].second].first = l[x - 1].first;
                topi1 = -1;
                topi2 = l[y - 1].second;
            }
            if (topi1 == -1 && topi2 == -1)
            {
                printf("* *\n");
            }
            else if (topi1 == -1)
            {
                printf("* %d\n", topi2 + 1);
            }
            else if (topi2 == -1)
            {
                printf("%d *\n", topi1 + 1);
            }
            else
            {
                printf("%d %d\n", topi1 + 1, topi2 + 1);
            }

            //     x--;y--;
            //     temp = min(x,y);
            //     for(;temp<=max(x,y);temp++){
            //         l[temp]=false;
            //     }
            //     temp = min(x,y);
            //     while(l[temp] ==false){
            //         temp--;
            //         if (temp<0){
            //             notfoundn = true;
            //             break;
            //         }
            //     }

            //     n = temp;
            //     int m = s;
            //     temp = max(x,y);
            //     if(temp!=m){
            //     while(l[temp] == false){
            //         temp++;
            //         if (temp>m-1){
            //             notfoundm = true;
            //             break;
            //         }
            //     }}else{
            //         notfoundm = true;
            //     }
            //     m = temp;
            //     if(notfoundm && notfoundn){
            //         printf("* *\n");
            //     }
            //     else if(notfoundm){
            //         printf("%d *\n",n+1);
            //     }
            //     else if(notfoundn){
            //         printf("* %d\n",m+1);
            //     }
            //     else{
            //     printf("%d %d\n",n+1,m+1);}
            b--;
            //     // for(auto ui:l){
            //     // cout<<ui.first<<" "<<ui.second<<"a"<<endl;

            // }
            // for(auto kj:l){
            //      cout <<kj.first<<"a"<<kj.second<<endl;
            // }
        }

        printf("-\n");
        scanf("%d %d", &s, &b);
    }
}

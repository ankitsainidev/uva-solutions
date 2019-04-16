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
    int N, n;
    scanf("%d %d", &N, &n);

    while (N != 0 || n != 0)
    {
        bool match = true;
        char big[N][N];
        int count[4]={};
        
        char small[n][n];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                scanf(" %c", &big[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf(" %c", &small[i][j]);
            }
        }

        for (int ind = 0; ind < 4; ind++)
        {
            if (ind > 0)
            {

                char temp[n][n];
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        temp[j][n-1-i] = small[i][j];
                    }
                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        small[i][j] =temp[i][j];
                    }
                }

            }
            // for(int i=0;i<n;i++){
            //         for(int j=0;j<n;j++){
            //             cout<<small[i][j];
            //         }
            //         cout<<endl;
            //     }

            for (int i = 0; i < N - n+1; i++)
            {
                for (int j = 0; j < N - n+1; j++)
                {
                    match = true;
                    for (int x = 0; x < n; x++)
                    {
                        for (int y = 0; y < n; y++)
                        {
                            // cout<<small[x][y]<<big[x+i][y+j]<<match<<endl;
                            if (small[x][y] != big[x + i][y + j])
                            {
                                // cout<<1111<<endl;
                                match = false;
                                break;
                            }
                        }
                        if (!match)
                        {
                            break;
                        }
                    }
                    if (match)
                    {
                        count[ind] += 1;
                    }
                }
            }
        }
        printf("%d %d %d %d\n",count[0],count[1],count[2],count[3]);
        scanf("%d %d", &N, &n);
    }
}
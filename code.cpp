#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cin>>arr[i][j];
        }
    }
    int x, y;
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            if(arr[i][j] == 1){
               x  = i;
               y = j;
            }
        }
    }
    int count = 0;
    while(x!=2){
        if(x>2){
            x--;
            count++;
        } 
        else{
            x++;
            count++;
        }
    }
    while (y!=2)
    {
         if(y>2){
            y--;
            count++;
        }
        else{
            y++;
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
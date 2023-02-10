#include<iostream>
#include <string.h>
using namespace std;
int main(){
    cout<<"hello";
    char arr[45]="meenakshi";
int d=strlen(arr);
    for(int i=0;i<d;i++){
        arr[i]=arr[d-1-i];
 }
      for(int i=0;i<d;i++){
        printf("%c",arr[i]);
      }
    return 0;
}

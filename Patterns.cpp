/* let's get going with the patterns*/

#include<iostream>

using namespace std;

/* 1. int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(n-j+1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/

/* 2. int main(){
    int n;
    cin>>n;
    int count =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            cout<<count<<" ";
            count +=1;

        }
        cout<<endl;
    }
    return 0;
}*/

/* 3. int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for(int j=1;j<=i;j++){
        }
        cout<<endl;
    }
    
    return 0;

}*/

/* 4. int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/* 5. int main(){
    int n;
    cin>>n;
    int count =1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<count<<" ";
            count +=1;
        }
        cout<<endl;   
    }
    return 0;
}*/

/* 6. int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(i+j)-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/* 7. int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int value = i;
        for(int j=1;j<=i;j++){
            cout<<i-j+1<<" ";   
        }
        cout<<endl;
    }
    return 0;
}*/

/* 8. int main(){
    int n;
    cin>>n;
    char ch = '@';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char prt = ch+i;
            cout<<prt<<" ";
        }
        cout<<endl;
    }
    return 0;

}*/

/* 9. int main(){
    int n;
    cin>>n;
    char ch = '@';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char prt = ch+j;
            cout<<prt<<" ";
        }
        cout<<endl;
    }
}*/

/* 10. int main(){
    int n;
    cin>>n;
    char strt = 'A';
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<strt<<" ";
                strt =strt + 1;
            }
            cout<<endl;
        }
    return 0;
}*/

/* 11. int main(){
    int n;
    cin>>n;
    char strt = '@';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char prt = strt+i+j-1;
            cout<<prt<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/

/* 12. int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char prt = 'A'+i-1;
            cout<<prt<<" ";
        }   
        cout<<endl;
    }
    return 0;
}*/

/* 13. int main(){
    int n;
    cin>>n;
    char strt = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<strt<<" ";
            strt = strt +1;
        }   
        cout<<endl;
    }
    return 0;
}*/

/* 14. int main(){
    int n;
    cin>>n;
    char strt = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char prnt = strt+i+j-2;
            cout<<prnt<<" ";
        }   
        cout<<endl;
    }
    return 0;
}*/

/* 15. int main(){
    int n;
    cin>>n;
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k =1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

/* 16. int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int x =2;x<=i;x++){
            int value =i;
            cout<<value-1;
        }
        cout<<endl;
    }
    return 0;
}*/
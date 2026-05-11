//========================LLLLLLLLLLLLLLLLLLLLLLL=============================
for( int i=1;i<n ;i++){
    cout << "*";
    cout<<endl;
    }
for(int i=1;i<=n;i++){
    cout<<"* ";
}

//===============================MMMMMMMMMMMMMMMMMMMMMMMM=========================

for(int i=1;i<=n/2+1;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==i || j==(n-i+1) || j==n) cout<<"*";
        else cout <<" ";
    }
    cout << endl;
}
for(int i= n/2+2;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==n) cout <<"*";
        else cout <<" ";
    }
    cout << endl;
}


//==============================NNNNNNNNNNNNNNNNNNNNNN===========================
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==n || j==i) cout<<"*";
        else cout <<" ";
    }
    cout << endl;
}
